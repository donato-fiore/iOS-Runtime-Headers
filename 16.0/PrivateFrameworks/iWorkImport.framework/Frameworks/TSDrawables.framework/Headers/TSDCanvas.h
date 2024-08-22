// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCANVAS_H
#define TSDCANVAS_H

@class TSDInteractiveCanvasController, NSArray, TSUPointerKeyDictionary, NSMutableArray, NSHashTable, TSKAccessController, NSSet, TSUColor, TSKChangeNotifier, TSKDocumentRoot, TSPObjectContext;
@protocol TSDCanvasDelegate;

#import <Foundation/Foundation.h>

#import "TSDLayoutController.h"

@interface TSDCanvas : NSObject {
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mAllRepsOrdered;
    TSUPointerKeyDictionary *mRepsByLayout;
    CGFloat mContentsScale;
    BOOL mWideGamut;
    ? mInvalidFlags;
    BOOL mShouldUpdateLayersDuringLayout;
    BOOL mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    NSMutableArray *mBlocksToPerform;
    os_unfair_lock_s mBlocksToPerformLock;
    NSHashTable *mCanvasLayoutObservers;
    BOOL mIgnoringClickThrough;
}


@property (readonly, nonatomic) TSKAccessController *accessController;
@property (readonly, nonatomic) NSSet *allReps; // ivar: mAllReps
@property (readonly, nonatomic) NSArray *allRepsOrdered;
@property (nonatomic) BOOL allowsFontSubpixelQuantization; // ivar: mAllowsFontSubpixelQuantization
@property (copy, nonatomic) TSUColor *backgroundColor; // ivar: mBackgroundColor
@property (readonly, nonatomic) TSDInteractiveCanvasController *canvasController;
@property (readonly, nonatomic) BOOL canvasIsWideGamut;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (nonatomic) UIEdgeInsets contentInset; // ivar: mContentInset
@property (readonly, nonatomic) CGFloat contentsScale;
@property (weak, nonatomic) NSObject<TSDCanvasDelegate> *delegate; // ivar: mDelegate
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (nonatomic) BOOL enableInstructionalText; // ivar: mEnableInstructionalText
@property (nonatomic) CGFloat i_viewScaleForAudioObjectsInNonInteractiveCanvas; // ivar: i_viewScaleForAudioObjectsInNonInteractiveCanvas
@property (copy, nonatomic) NSArray *infosToDisplay; // ivar: mInfos
@property (nonatomic) BOOL isAnchoredAtRight; // ivar: mIsAnchoredAtRight
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isLayoutComplete;
@property (readonly, nonatomic) BOOL isTemporaryForLayout; // ivar: mIsTemporaryForLayout
@property (readonly, nonatomic) TSDLayoutController *layoutController; // ivar: mLayoutController
@property (readonly, nonatomic) TSPObjectContext *objectContext;
@property (nonatomic) BOOL shouldClampGroupsToParentsByScaling; // ivar: mShouldClampGroupsToParentsByScaling
@property (nonatomic) BOOL shouldRenderInvisibleContentForNonInteractiveCanvas; // ivar: mShouldRenderInvisibleContentForNonInteractiveCanvas
@property (readonly, nonatomic) BOOL supportsAdaptiveLayout;
@property (nonatomic) BOOL suppressesShadowsAndReflections; // ivar: mSuppressesShadowsAndReflections
@property (nonatomic) BOOL suppressesShapeText; // ivar: mSuppressesShapeText
@property (readonly, nonatomic) NSArray *topLevelReps; // ivar: mTopLevelReps
@property (readonly, nonatomic) CGRect unscaledRectOfLayouts;
@property (nonatomic) CGSize unscaledSize; // ivar: mUnscaledSize
@property (nonatomic) CGFloat viewScale; // ivar: mViewScale


+(void)p_recursivelyAddOrderedChildrenOfRep:(id)arg0 toArray:(id)arg1 ;
-(BOOL)i_needsLayout;
-(BOOL)i_shouldIgnoreClickThrough;
-(BOOL)isDrawingIntoPDF;
-(BOOL)isPrinting;
-(BOOL)isRenderingForKPF;
-(BOOL)p_canvasShouldAlwaysUpdateLayers;
-(BOOL)p_updateRepsFromLayouts;
-(BOOL)shouldShowComments;
-(BOOL)shouldShowInstructionalTextForLayout:(id)arg0 ;
-(BOOL)shouldShowTextCommentHighlights;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(BOOL)textLayoutMustIncludeAdornments;
-(BOOL)wantsEditingLayoutsForOffscreenInfos;
-(Class)rootLayoutClass;
-(id)init;
-(id)initForTemporaryLayout;
-(id)initWithLayoutControllerClass:(Class)arg0 delegate:(id)arg1 ;
-(id)repForLayout:(id)arg0 ;
-(struct CGContext *)i_createContextToDrawImageInScaledRect:(struct CGRect )arg0 withTargetIntegralSize:(struct CGSize )arg1 distortedToMatch:(BOOL)arg2 returningBounds:(struct CGRect *)arg3 integralBounds:(struct CGRect *)arg4 ;
-(struct CGImage *)i_image;
-(struct CGImage *)i_imageInScaledRect:(struct CGRect )arg0 keepingChildrenPassingTest:(id)arg1 ;
-(struct CGImage *)i_imageInScaledRect:(struct CGRect )arg0 withTargetIntegralSize:(struct CGSize )arg1 distortedToMatch:(BOOL)arg2 keepingChildrenPassingTest:(id)arg3 ;
-(struct CGImage *)i_newImageInContext:(struct CGContext *)arg0 bounds:(struct CGRect )arg1 integralBounds:(struct CGRect )arg2 distortedToMatch:(BOOL)arg3 keepingChildrenPassingTest:(id)arg4 ;
-(struct CGPoint )convertBoundsToUnscaledPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )convertUnscaledToBoundsPoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertBoundsToUnscaledRect:(struct CGRect )arg0 ;
-(struct CGRect )convertUnscaledToBoundsRect:(struct CGRect )arg0 ;
-(struct CGRect )i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint )arg0 ;
-(struct CGRect )i_clipRectForCreatingRepsFromLayouts;
-(struct CGRect )p_bounds;
-(struct CGRect )visibleUnscaledRectForClippingReps;
-(struct CGSize )convertBoundsToUnscaledSize:(struct CGSize )arg0 ;
-(struct CGSize )convertUnscaledToBoundsSize:(struct CGSize )arg0 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)dealloc;
-(void)i_drawBackgroundInContext:(struct CGContext *)arg0 ;
-(void)i_drawBackgroundInContext:(struct CGContext *)arg0 bounds:(struct CGRect )arg1 ;
-(void)i_drawRepsInContext:(struct CGContext *)arg0 passingTest:(id)arg1 ;
// -(void)i_drawRepsInContext:(struct CGContext *)arg0 passingTest:(id)arg1 distort:(unk)arg2  ;
-(void)i_layoutIfNeeded;
-(void)i_layoutIfNeededUpdatingLayerTree;
-(void)i_performBlockWhileIgnoringClickThrough:(id)arg0 ;
-(void)i_registerCanvasLayoutObserver:(id)arg0 ;
-(void)i_registerRep:(id)arg0 ;
-(void)i_unregisterCanvasLayoutObserver:(id)arg0 ;
-(void)i_unregisterRep:(id)arg0 ;
-(void)i_updateInfosInLayoutController;
-(void)invalidateLayers;
-(void)invalidateReps;
-(void)invalidateVisibleBounds;
-(void)layoutInvalidated;
-(void)nonInteractiveLayoutIfNeeded;
-(void)orderRepsForLayout:(id)arg0 ;
-(void)p_layoutWithReadLock;
-(void)p_removeAllReps;
-(void)performBlockAfterLayoutIfNecessary:(id)arg0 ;
-(void)recreateAllLayoutsAndReps;
-(void)teardown;


@end


#endif