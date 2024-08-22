// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTEXTURESET_H
#define TSDTEXTURESET_H

@class NSMutableArray, NSDictionary, NSMapTable, NSArray, CALayer;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSDBitmapRenderingQualityInfo.h"
#import "TSDRep.h"
#import "TSDTextureDescription.h"

@interface TSDTextureSet : NSObject <NSCopying>

 {
    NSMutableArray *_titleAndCaptionTextures;
    NSMutableArray *_animatableTextures;
    NSDictionary *_bakedAttributes;
    NSMapTable *_eventIndexToViewLayerMap;
    NSMutableArray *_finalTextures;
    NSMapTable *_textureToStageIndexMap;
    NSMapTable *_flattenKeyToFlattenedTextureMap;
    NSMapTable *_origBoundingRectForStageMap;
}


@property (readonly, nonatomic) NSArray *allTextures; // ivar: _allTextures
@property (retain, nonatomic) CALayer *alternateLayer; // ivar: _alternateLayer
@property (nonatomic) TSDBitmapRenderingQualityInfo *bitmapRenderingQualityInfo; // ivar: _bitmapRenderingQualityInfo
@property (readonly, nonatomic) CGRect boundingRect; // ivar: _boundingRect
@property (copy, nonatomic) NSMapTable *boundingRectForStageMap; // ivar: _boundingRectForStageMap
@property (nonatomic) CGPoint center; // ivar: _center
@property (nonatomic) *CGColorSpace colorSpace; // ivar: _colorSpace
@property (nonatomic) BOOL containsContentBuildTextures; // ivar: _containsContentBuildTextures
@property (readonly, nonatomic) BOOL containsFinalTextures;
@property (readonly, nonatomic) CGRect frame;
@property (nonatomic) BOOL isBackground; // ivar: _isBackground
@property (nonatomic) BOOL isBaked; // ivar: _isBaked
@property (nonatomic) BOOL isFlippedHorizontally; // ivar: _isFlippedHorizontally
@property (readonly, nonatomic) BOOL isFlippedVertically;
@property (readonly, nonatomic) BOOL isImageSource;
@property (nonatomic) BOOL isMagicMove; // ivar: _isMagicMove
@property (readonly, nonatomic) BOOL isRenderable;
@property (readonly, nonatomic) CALayer *layer; // ivar: _layer
@property (readonly, nonatomic) NSInteger maxStageIndex; // ivar: _maxStageIndex
@property (nonatomic) NSInteger objectType; // ivar: _objectType
@property (nonatomic) CGPoint originalPosition; // ivar: _originalPosition
@property (weak, nonatomic) TSDRep *rep; // ivar: _rep
@property (nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet; // ivar: _shouldIncludeFinalTexturesInVisibleSet
@property (nonatomic) BOOL shouldTransformUsingTextureCenter; // ivar: _shouldTransformUsingTextureCenter
@property (nonatomic) CGFloat textureAngle; // ivar: _textureAngle
@property (nonatomic) CGFloat textureAnimationPercent; // ivar: _textureAnimationPercent
@property (copy, nonatomic) TSDTextureDescription *textureDescription; // ivar: _textureDescription
@property (nonatomic) CGFloat textureOpacity; // ivar: _textureOpacity
@property (nonatomic) NSInteger textureZOrder; // ivar: _textureZOrder
@property (readonly, nonatomic) NSArray *titleAndCaptionTextures;
@property (readonly, nonatomic) NSArray *visibleTextures;
@property (readonly, nonatomic) NSArray *visibleTexturesIncludingCaptions;


+(id)newFlattenedTextureFromTextures:(id)arg0 newRect:(struct CGRect )arg1 ;
-(BOOL)canReuseMetalTexturesWith:(id)arg0 ;
-(BOOL)hasTexture:(id)arg0 beenFlattenedForKey:(id)arg1 ;
-(BOOL)isBackgroundTexture:(id)arg0 ;
-(BOOL)p_areAttributes:(id)arg0 equalToAttributes:(id)arg1 ;
-(BOOL)shouldAnimateBackgroundTexturesWithStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 ;
-(NSInteger)stageIndexForTexture:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)finalTexturesForStage:(NSInteger)arg0 ;
-(id)firstVisibleTextureForTextureType:(NSInteger)arg0 ;
-(id)init;
-(id)p_insertNewFlattenedTextureWithArray:(id)arg0 rect:(struct CGRect )arg1 stage:(NSInteger)arg2 insertAfter:(id)arg3 flattenKey:(id)arg4 ;
-(id)viewLayerAtEventIndex:(NSUInteger)arg0 ;
-(id)visibleTexturesBeforeStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 isContentBuild:(BOOL)arg2 shouldFlatten:(BOOL)arg3 flattenKey:(id)arg4 ;
-(id)visibleTexturesForStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 isContentBuild:(BOOL)arg2 shouldFlatten:(BOOL)arg3 flattenKey:(id)arg4 ;
-(id)visibleTexturesForStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 isContentBuild:(BOOL)arg2 shouldFlatten:(BOOL)arg3 flattenKey:(id)arg4 shouldIncludeCaptions:(BOOL)arg5 ;
-(id)visibleTexturesWithTextureType:(NSInteger)arg0 ;
-(struct CGRect )boundingRectForStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 isContentBuild:(BOOL)arg2 ;
-(struct CGRect )p_frameAtEventIndex:(NSUInteger)arg0 ;
-(void)addFinalTexture:(id)arg0 forStage:(NSInteger)arg1 ;
-(void)addPerspectiveLayerToTexture:(id)arg0 withShowSize:(struct CGSize )arg1 ;
-(void)addRenderable:(id)arg0 ;
-(void)addRenderable:(id)arg0 forStage:(NSInteger)arg1 ;
-(void)addRenderable:(id)arg0 shouldAdjustBounds:(BOOL)arg1 ;
-(void)adjustAnchorPointRelativeToCenterOfRotationAtEventIndex:(NSUInteger)arg0 ;
-(void)applyActionEffect:(id)arg0 viewScale:(CGFloat)arg1 isMagicMove:(BOOL)arg2 shouldBake:(BOOL)arg3 applyScaleOnly:(BOOL)arg4 ignoreScale:(BOOL)arg5 shouldCheckActionKeys:(BOOL)arg6 eventIndex:(NSUInteger)arg7 ;
-(void)dealloc;
-(void)drawFrameWithMetalContext:(id)arg0 ;
-(void)evictRenderedResources;
-(void)flattenToFinalTexturesForMagicMove;
-(void)hideLayersOfFinalTexturesAtEventIndex:(NSUInteger)arg0 ;
-(void)p_addRenderable:(id)arg0 forStage:(NSInteger)arg1 shouldAdjustBounds:(BOOL)arg2 ;
-(void)p_applyPositionFromAttributes:(id)arg0 viewScale:(CGFloat)arg1 eventIndex:(NSUInteger)arg2 ;
-(void)p_getComponentsOpacity:(*CGFloat)arg0 scale:(*CGFloat)arg1 angle:(*CGFloat)arg2 fromAttributes:(id)arg3 shouldApplyOpacity:(*BOOL)arg4 shouldApplyAngle:(*BOOL)arg5 shouldApplyScale:(*BOOL)arg6 ;
-(void)p_resetAttributesWithViewScale:(CGFloat)arg0 eventIndex:(NSUInteger)arg1 ;
-(void)releaseSingleTextures;
-(void)removeAllPerspectiveLayers;
-(void)removeRenderable:(id)arg0 ;
-(void)renderIntoContext:(struct CGContext *)arg0 eventIndex:(NSUInteger)arg1 requiresTransparentBackground:(BOOL)arg2 ;
-(void)renderLayerContentsIfNeeded;
-(void)resetAnchorPointAtEventIndex:(NSUInteger)arg0 ;
-(void)resetToOriginalSourceAtEventIndex:(NSUInteger)arg0 ;
-(void)teardown;


@end


#endif