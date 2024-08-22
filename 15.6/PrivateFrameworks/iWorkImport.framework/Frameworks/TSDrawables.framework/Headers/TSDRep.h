// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDREP_H
#define TSDREP_H

@class NSMutableArray, NSArray, NSDictionary;
@protocol TSDMagicMoveMatching, TSDInfo;

#import <Foundation/Foundation.h>

#import "TSDCanvas.h"
#import "TSDLayout.h"
#import "TSDRep.h"

@interface TSDRep : NSObject <TSDMagicMoveMatching>

 {
    NSMutableArray *mChildReps;
    BOOL mHasBeenRemoved;
}


@property (readonly, nonatomic) CGFloat angleInRoot;
@property (readonly, nonatomic) CGRect boundsForStandardKnobs;
@property (readonly, weak, nonatomic) TSDCanvas *canvas; // ivar: mCanvas
@property (readonly, nonatomic) CGRect captionFrameInUnscaledCanvas;
@property (readonly, nonatomic) CGPoint centerForRotation;
@property (readonly, nonatomic) NSArray *childReps;
@property (readonly, nonatomic) CGRect clipRect;
@property (readonly, nonatomic) NSObject *dynamicOverride;
@property (readonly, nonatomic) CGRect frameForMagicMove;
@property (readonly, nonatomic) CGRect frameInUnscaledCanvas;
@property (readonly, nonatomic) CGRect frameInUnscaledCanvasForMarqueeSelecting;
@property (readonly, nonatomic) CGRect frameInUnscaledCanvasIncludingChrome;
@property (readonly, nonatomic) NSArray *hyperlinkRegions;
@property (readonly, nonatomic) CGRect i_clipRectRecursive;
@property (readonly, nonatomic) CGRect i_layerFrameInScaledCanvasIgnoringDragging;
@property (readonly, nonatomic) CGRect i_partition_deepClipRect;
@property (readonly, nonatomic) NSObject<TSDInfo> *info;
@property (readonly, nonatomic) BOOL isDrawingInFlippedContext;
@property (readonly, nonatomic) BOOL isLocked;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) CGRect layerFrameInScaledCanvas;
@property (readonly, nonatomic) TSDLayout *layout; // ivar: mLayout
@property (readonly, nonatomic) NSArray *layoutsForChildReps;
@property (readonly, nonatomic) BOOL masksToBounds;
@property (readonly, nonatomic) CGRect naturalBounds;
@property (readonly, nonatomic) CGFloat opacity;
@property (weak, nonatomic) TSDRep *parentRep; // ivar: mParentRep
@property (readonly, nonatomic) CGRect rectToClipChildRepRenderables;
@property (retain, nonatomic) TSDLayout *temporaryMixingLayout; // ivar: mTemporaryMixingLayout
@property (copy, nonatomic) NSDictionary *textureAnimationInfo; // ivar: mTextureAnimationInfo
@property (readonly, nonatomic) CGRect titleFrameInUnscaledCanvas;
@property (readonly, nonatomic) BOOL wantsToDistortWithImagerContext;


-(BOOL)forcesPlacementOnTop;
-(CGFloat)contentsScale;
-(id)description;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)p_comment;
-(id)textureForDescription:(id)arg0 ;
-(struct CGAffineTransform )unRotatedTransform:(struct CGAffineTransform )arg0 ;
-(struct CGPath *)newPathInScaledCanvasFromNaturalRect:(struct CGRect )arg0 ;
-(struct CGPoint )convertNaturalPointFromUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGPoint )convertNaturalPointToUnscaledCanvas:(struct CGPoint )arg0 ;
-(struct CGRect )convertNaturalRectFromUnscaledCanvas:(struct CGRect )arg0 ;
-(struct CGRect )convertNaturalRectToUnscaledCanvas:(struct CGRect )arg0 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)addChildTexturesToTextureSet:(id)arg0 forDescription:(id)arg1 passingTest:(id)arg2 ;
-(void)addToSet:(id)arg0 ;
-(void)dealloc;
-(void)didAddChildRep:(id)arg0 ;
-(void)didDisplayTextureWithDescription:(id)arg0 isAtEndOfBuild:(BOOL)arg1 ;
-(void)drawInContext:(struct CGContext *)arg0 ;
// -(void)enumerateChildTexturesForDescription:(id)arg0 passingTest:(id)arg1 withBlock:(unk)arg2  ;
-(void)i_configureFontSmoothingForContext:(struct CGContext *)arg0 layer:(id)arg1 ;
-(void)i_willBeRemoved;
-(void)recursivelyDrawChildrenInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;
-(void)recursivelyDrawInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg0 ;
-(void)recursivelyPerformSelector:(SEL)arg0 withObject:(id)arg1 ;
-(void)recursivelyPerformSelector:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(id)arg1 ;
-(void)recursivelyPerformSelectorIfImplemented:(SEL)arg0 withObject:(id)arg1 withObject:(id)arg2 ;
-(void)removeChildRep:(id)arg0 ;
-(void)setTextureAttributes:(id)arg0 textureBounds:(struct CGRect )arg1 ;
-(void)updateChildrenFromLayout;
-(void)updateFromLayout;
-(void)updateHitTestingForTextureStage:(NSUInteger)arg0 isAtEndOfBuild:(BOOL)arg1 ;
-(void)willBeRemoved;
-(void)willLayoutAndRenderInBackground;


@end


#endif