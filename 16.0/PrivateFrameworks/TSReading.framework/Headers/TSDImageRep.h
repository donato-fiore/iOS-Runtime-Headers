// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDIMAGEREP_H
#define TSDIMAGEREP_H

@class CALayer, CAShapeLayer, TSDInstantAlphaTracker, NSRecursiveLock, NSCache, NSMutableArray, NSString;
@protocol CALayerDelegate, TSDMagicMoveMatching, OS_dispatch_queue, OS_dispatch_semaphore;


#import "TSDMediaRep.h"
#import "TSDLayoutGeometry.h"
#import "TSDImageRepSizingState.h"

@interface TSDImageRep : TSDMediaRep <CALayerDelegate, TSDMagicMoveMatching>

 {
    TSDLayoutGeometry *mLastImageGeometryInRoot;
    TSDLayoutGeometry *mLastMaskGeometryInRoot;
    CGAffineTransform mLastLayoutToImageTransform;
    CGRect mFrameInUnscaledCanvasRelativeToSuper;
    BOOL mFrameInUnscaledCanvasIsValid;
    CALayer *mContentsLayer;
    CAShapeLayer *mMaskPathLayer;
    CAShapeLayer *mIAMaskLayer;
    CAShapeLayer *mMaskSublayer;
    CGAffineTransform mLastPictureFrameLayerTransform;
    BOOL mDirectlyManagesLayerContent;
    BOOL mShowImageHighlight;
    BOOL mInInstantAlphaMode;
    TSDInstantAlphaTracker *mInstantAlphaTracker;
    *CGImage mInstantAlphaImage;
    CGAffineTransform mBaseMaskLayoutTransform;
    NSRecursiveLock *mLayerUpdateAndSizingStateLock;
    TSDImageRepSizingState *mSizingState;
    BOOL mSizingStateReady;
    NSObject<OS_dispatch_queue> *mSizedImageAccessQueue;
    *CGImage mSizedImage;
    CGSize mSizedImageSize;
    NSInteger mSizedImageOrientation;
    BOOL mSizedImageHasMaskBakedIn;
    BOOL mSizedImageHasAdjustmentsBakedIn;
    *CGPath mSizedImageMaskPath;
    *CGImage mCachedSizedImage;
    CGSize mCachedSizedImageSize;
    NSInteger mCachedSizedImageOrientation;
    NSCache *mHitTestCache;
    NSInteger mHitTestCacheOnce;
    NSMutableArray *mUpdateFromLayoutBlocks;
    NSObject<OS_dispatch_semaphore> *mUpdateFromLayoutBlocksLock;
    NSUInteger mImageSizingDisabledCount;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) *CGImage imageRef;
@property (readonly) Class superclass;


+(CGFloat)magicMoveAttributeMatchPercentBetweenOutgoingObject:(id)arg0 incomingObject:(id)arg1 ;
+(struct CGPath *)p_newPathToBakeIntoSizedImageForSize:(struct CGSize )arg0 withImageLayout:(id)arg1 orientation:(NSInteger)arg2 ;
-(BOOL)canDrawInParallel;
-(BOOL)canDrawShadowInOneStepWithChildren:(BOOL)arg0 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)directlyManagesLayerContent;
-(BOOL)handleDoubleTapAtPoint:(struct CGPoint )arg0 ;
-(BOOL)isDraggable;
-(BOOL)p_directlyManagesContentForLayer:(id)arg0 ;
-(BOOL)p_drawsInOneStep;
-(BOOL)p_hitCacheGetCachedValue:(*BOOL)arg0 forPoint:(struct CGPoint )arg1 ;
-(BOOL)p_okayToGenerateSizedImage;
-(BOOL)p_shouldBakeMaskIntoSizedImage;
-(BOOL)p_shouldMaskWithFrameLayers;
-(BOOL)p_shouldRenderWithMaskToBounds;
-(BOOL)p_takeSizedImageFromState:(id)arg0 ;
-(BOOL)shouldAllowReplacementFromPaste;
-(BOOL)shouldCreateSelectionKnobs;
-(BOOL)shouldIgnoreEditMenuTapAtPoint:(struct CGPoint )arg0 withRecognizer:(id)arg1 ;
-(BOOL)shouldShowDragHUD;
-(BOOL)shouldShowMediaReplaceUI;
-(BOOL)shouldShowSelectionHighlight;
-(BOOL)shouldShowShadow;
-(BOOL)shouldShowSmartMaskKnobs;
-(BOOL)wantsToDistortWithImagerContext;
-(CGFloat)additionalRotationForKnobOrientation;
-(NSInteger)p_orientationForDirectlyManagedLayer;
-(id)additionalLayersOverLayer;
-(id)contentsLayer;
-(id)hitRepChrome:(struct CGPoint )arg0 ;
-(id)imageInfo;
-(id)imageLayout;
-(id)imageOfStroke:(struct CGRect *)arg0 ;
-(id)initWithLayout:(id)arg0 canvas:(id)arg1 ;
-(id)maskInfo;
-(id)maskLayout;
-(id)newCachedSizedImage;
-(id)newCachedSizedImageWithNaturalSize;
-(id)overlayLayers;
-(id)p_imageData;
-(id)p_imageProvider;
-(id)p_validatedBitmapImageProvider;
-(id)p_validatedImageProvider;
-(id)p_validatedThumbnailImageProvider;
-(id)pathSourceForSelectionHighlightBehavior;
-(id)textureForContext:(id)arg0 ;
-(int)dragTypeAtCanvasPoint:(struct CGPoint )arg0 ;
-(struct CGAffineTransform )transformForHighlightLayer;
-(struct CGImage *)p_imageForDirectlyManagedLayer:(id)arg0 ;
-(struct CGImage *)p_newImageByApplyingAdjustmentsToImage:(struct CGImage *)arg0 alreadyEnhanced:(BOOL)arg1 ;
-(struct CGPoint )centerForRotation;
-(struct CGPoint )positionOfStandardKnob:(id)arg0 forBounds:(struct CGRect )arg1 ;
-(struct CGRect )boundsForHighlightLayer;
-(struct CGRect )boundsForStandardKnobs;
-(struct CGRect )frameInUnscaledCanvas;
-(struct CGRect )targetRectForEditMenu;
-(struct CGSize )p_desiredSizedImageSize;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)addKnobsToArray:(id)arg0 ;
-(void)becameNotSelected;
-(void)cacheImageAtCurrentSize;
-(void)dealloc;
-(void)didCreateLayer:(id)arg0 ;
-(void)didUpdateLayer:(id)arg0 ;
-(void)drawInContextWithoutEffects:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(BOOL)arg3 forAlphaOnly:(BOOL)arg4 drawChildren:(BOOL)arg5 ;
-(void)drawInLayerContext:(struct CGContext *)arg0 ;
-(void)generateSizedImageOnBackgroundThread;
-(void)highlightImage;
-(void)i_willEnterForeground;
-(void)layoutInRootChangedFrom:(id)arg0 to:(id)arg1 translatedOnly:(BOOL)arg2 ;
-(void)p_canvasSelectionDidChange:(id)arg0 ;
-(void)p_createMaskLayerForLayer:(id)arg0 ;
-(void)p_disposeMaskLayer;
-(void)p_disposeStrokeLayer;
-(void)p_drawInContext:(struct CGContext *)arg0 withContent:(BOOL)arg1 withStroke:(BOOL)arg2 withOpacity:(CGFloat)arg3 withMask:(BOOL)arg4 withIAMask:(BOOL)arg5 forLayer:(BOOL)arg6 forShadow:(BOOL)arg7 forHitTest:(BOOL)arg8 ;
-(void)p_generateSizedImage:(id)arg0 ;
-(void)p_generateSizedImageIfNecessary;
-(void)p_getAliasedValuesForMaskToBoundsDirectLayerFrame:(struct CGRect *)arg0 transform:(struct CGAffineTransform *)arg1 ;
-(void)p_hitCacheSetCachedValue:(BOOL)arg0 forPoint:(struct CGPoint )arg1 ;
-(void)p_invalidateHitTestCache;
-(void)p_invalidateSizedImage;
-(void)p_invalidateSizedImageFromQueue;
-(void)p_popoverViewPresented:(id)arg0 ;
-(void)p_startSizing;
-(void)p_takeSizedImageFromCache;
-(void)p_takeSizedImageFromState;
-(void)p_takeSizedImageFromStateIfReady;
-(void)p_updateDirectlyManagesLayerContentForLayer:(id)arg0 ;
-(void)p_updateMaskLayer:(id)arg0 forRepLayer:(id)arg1 shouldIncludeMask:(BOOL)arg2 shouldIncludeInstantAlpha:(BOOL)arg3 ;
-(void)p_updateMaskSublayersForMaskEditMode;
-(void)p_updateStrokeLayerForStroke:(id)arg0 repLayer:(id)arg1 ;
-(void)popDisableImageSizing;
-(void)processChangedProperty:(int)arg0 ;
-(void)processChanges:(id)arg0 ;
-(void)pushDisableImageSizing;
-(void)unhighlightImage;
-(void)updateFromLayout;
-(void)updateLayerGeometryFromLayout:(id)arg0 ;
-(void)updatePositionsOfKnobs:(id)arg0 ;
-(void)useCachedSizedImage:(id)arg0 ;
-(void)viewScaleDidChange;
-(void)wideGamutValueDidChange;
-(void)willBeRemoved;
-(void)willBeginReadMode;
-(void)willUpdateLayer:(id)arg0 ;


@end


#endif