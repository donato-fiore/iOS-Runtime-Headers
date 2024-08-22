// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDTEXTURESET_H
#define TSDTEXTURESET_H

@class NSMutableArray, TSUNoCopyDictionary, NSMutableDictionary, NSDictionary, CALayer, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TSDRep.h"

@interface TSDTextureSet : NSObject <NSCopying>

 {
    NSMutableArray *mTextures;
    TSUNoCopyDictionary *mStageIndexForTexture;
    NSMutableDictionary *mFinalTextureForStage;
    NSMutableDictionary *mReverseFinalTextureForStage;
    TSUNoCopyDictionary *mFinalTexturesToStageMap;
    TSUNoCopyDictionary *mReverseFinalTexturesToStageMap;
    NSDictionary *mBakedAttributes;
    _NSRange mActiveChunkIndices;
    CALayer *mLayer;
}


@property (readonly, nonatomic) NSArray *allTextures; // ivar: mAllTextures
@property (retain, nonatomic) CALayer *alternateLayer; // ivar: mAlternateLayer
@property (readonly, nonatomic) CGRect boundingRect; // ivar: mBounds
@property (retain, nonatomic) NSDictionary *boundingRectForStage; // ivar: mBoundingRectForStage
@property (nonatomic) CGPoint center; // ivar: mCenter
@property (readonly, nonatomic) NSUInteger chunkCount; // ivar: mChunkCount
@property (nonatomic) *CGColorSpace colorSpace; // ivar: mColorSpace
@property (retain, nonatomic) NSDictionary *contentRectForStage; // ivar: mContentRectForStage
@property (readonly, nonatomic) CGRect frame;
@property (nonatomic) BOOL isBackground; // ivar: mIsBackground
@property (nonatomic) BOOL isBaked; // ivar: mIsBaked
@property (nonatomic) BOOL isMagicMove; // ivar: mIsMagicMove
@property (readonly, nonatomic) BOOL isRenderable;
@property (readonly, nonatomic) CALayer *layer;
@property (readonly, nonatomic) NSInteger maxStageIndex; // ivar: mMaxStageIndex
@property (nonatomic) CGPoint originalPosition; // ivar: mOriginalPosition
@property TSDRep *rep; // ivar: mRep
@property (nonatomic) BOOL shouldIncludeFinalTexturesInVisibleSet; // ivar: mShouldIncludeFinalTexturesInVisibleSet
@property (nonatomic) BOOL shouldTransformUsingTextureCenter; // ivar: mShouldTransformUsingTextureCenter
@property (readonly, nonatomic) NSInteger stageIndex; // ivar: _stageIndex
@property (nonatomic) CGFloat textureAngle; // ivar: mTextureAngle
@property (nonatomic) CGRect textureContentRect; // ivar: mTextureContentRect
@property (nonatomic) CGFloat textureOpacity; // ivar: mTextureOpacity
@property (nonatomic) NSInteger textureZOrder; // ivar: mTextureZOrder
@property (readonly, nonatomic) NSArray *visibleTextures;


-(BOOL)isBackgroundTexture:(id)arg0 ;
-(NSInteger)stageIndexForTexture:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)finalTextureForStage:(NSInteger)arg0 reverse:(BOOL)arg1 ;
-(id)firstVisibleTextureForTextureType:(int)arg0 ;
-(id)init;
-(id)newFlattenedTexture;
-(id)newFlattenedTextureFromTextures:(id)arg0 newRect:(struct CGRect )arg1 ;
-(id)visibleTexturesForStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 shouldFlatten:(BOOL)arg2 ;
-(struct CGRect )boundingRectForStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 ;
-(struct CGRect )contentRectForStage:(NSInteger)arg0 isBuildIn:(BOOL)arg1 ;
-(void)addFinalTexture:(id)arg0 forStage:(NSInteger)arg1 reverse:(BOOL)arg2 ;
-(void)addPerspectiveLayerToTexture:(id)arg0 withShowSize:(struct CGSize )arg1 ;
-(void)addRenderable:(id)arg0 ;
-(void)addRenderable:(id)arg0 forStage:(NSInteger)arg1 ;
-(void)adjustAnchorPointRelativeToCenterOfRotation;
-(void)applyActionEffect:(id)arg0 viewScale:(CGFloat)arg1 isMagicMove:(BOOL)arg2 shouldBake:(BOOL)arg3 applyScaleOnly:(BOOL)arg4 ignoreScale:(BOOL)arg5 shouldCheckActionKeys:(BOOL)arg6 ;
-(void)dealloc;
-(void)hideLayersOfFinalTextures;
-(void)p_applyPositionFromAttributes:(id)arg0 viewScale:(CGFloat)arg1 ;
-(void)p_resetAttributesWithViewScale:(CGFloat)arg0 ;
-(void)releaseSingleTextures;
-(void)removeRenderable:(id)arg0 ;
-(void)renderIntoContext:(struct CGContext *)arg0 ;
-(void)renderLayerContentsIfNeeded;
-(void)resetAnchorPoint;
-(void)setContentRect:(struct CGRect )arg0 forStage:(NSInteger)arg1 ;
-(void)teardown;


@end


#endif