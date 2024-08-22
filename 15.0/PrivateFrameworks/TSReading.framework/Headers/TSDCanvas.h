// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCANVAS_H
#define TSDCANVAS_H

@class NSArray, NSSet;
@protocol TSDCanvasDelegate;

#import <Foundation/Foundation.h>

#import "TSDInteractiveCanvasController.h"
#import "TSKAccessController.h"
#import "TSKChangeNotifier.h"
#import "TSKDocumentRoot.h"
#import "TSDLayoutController.h"
#import "TSPObjectContext.h"

@interface TSDCanvas : NSObject {
    TSDInteractiveCanvasController *mCanvasController;
    NSArray *mTopLevelReps;
    NSSet *mAllReps;
    NSArray *mAllRepsOrdered;
    *__CFDictionary mRepsByLayout;
    CGFloat mContentsScale;
    BOOL mWideGamut;
    ? mInvalidFlags;
    BOOL mInLayout;
    NSArray *mPreviouslyVisibleLayouts;
    BOOL mClipToCanvas;
}


@property (readonly, nonatomic) TSKAccessController *accessController;
@property (readonly, nonatomic) NSArray *allRepsOrdered;
@property (nonatomic) BOOL allowsFontSubpixelQuantization; // ivar: mAllowsFontSubpixelQuantization
@property (nonatomic) *CGColor backgroundColor; // ivar: mBackgroundColor
@property (readonly, nonatomic) TSDInteractiveCanvasController *canvasController;
@property (readonly, nonatomic) BOOL canvasIsWideGamut;
@property (readonly, nonatomic) TSKChangeNotifier *changeNotifier;
@property (nonatomic) UIEdgeInsets contentInset; // ivar: mContentInset
@property (readonly, nonatomic) CGFloat contentsScale;
@property (nonatomic) NSObject<TSDCanvasDelegate> *delegate; // ivar: mDelegate
@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;
@property (copy, nonatomic) NSArray *infosToDisplay; // ivar: mInfos
@property (readonly, nonatomic) BOOL isCanvasInteractive;
@property (readonly, nonatomic) BOOL isTemporaryForLayout; // ivar: mIsTemporaryForLayout
@property (readonly, nonatomic) TSDLayoutController *layoutController; // ivar: mLayoutController
@property (readonly, nonatomic) TSPObjectContext *objectContext;
@property (nonatomic) BOOL pInTearDown; // ivar: pInTearDown
@property (readonly, nonatomic) BOOL supportsAdaptiveLayout;
@property (nonatomic) CGSize unscaledSize; // ivar: mUnscaledSize
@property (nonatomic) CGFloat viewScale; // ivar: mViewScale


+(void)p_recursivelyAddOrderedChildrenOfRep:(id)arg0 toArray:(id)arg1 ;
-(BOOL)i_needsLayout;
-(BOOL)isDrawingIntoPDF;
-(BOOL)isPrinting;
-(BOOL)p_expandHitRegionOfPoint:(struct CGPoint )arg0 forRep:(id)arg1 smallRepOutset:(CGFloat)arg2 forShortestDistance:(*CGFloat)arg3 ;
-(BOOL)p_shouldRep:(id)arg0 countAsClosestSmallRepForSizeLimit:(CGFloat)arg1 ;
-(BOOL)p_updateRepsFromLayouts;
-(BOOL)shouldShowInstructionalText;
-(BOOL)shouldShowTextOverflowGlyphs;
-(BOOL)shouldSuppressBackgrounds;
-(BOOL)spellCheckingSupported;
-(BOOL)spellCheckingSuppressed;
-(id)allReps;
-(id)hitRep:(struct CGPoint )arg0 inTopLevelReps:(id)arg1 smallRepOutset:(CGFloat)arg2 withGesture:(id)arg3 passingTest:(id)arg4 ;
-(id)init;
-(id)initForTemporaryLayout;
-(id)layoutGeometryProviderForLayout:(id)arg0 ;
-(id)repForLayout:(id)arg0 ;
-(id)textRendererForLayer:(id)arg0 context:(struct CGContext *)arg1 ;
-(id)topLevelReps;
-(struct CGContext *)i_createContextToDrawImageInScaledRect:(struct CGRect )arg0 withTargetIntegralSize:(struct CGSize )arg1 returningBounds:(struct CGRect *)arg2 integralBounds:(struct CGRect *)arg3 ;
-(struct CGImage *)i_image;
-(struct CGImage *)i_imageInScaledRect:(struct CGRect )arg0 ;
-(struct CGImage *)i_imageInScaledRect:(struct CGRect )arg0 withTargetIntegralSize:(struct CGSize )arg1 distortedToMatch:(BOOL)arg2 ;
-(struct CGImage *)i_newImageInContext:(struct CGContext *)arg0 bounds:(struct CGRect )arg1 integralBounds:(struct CGRect )arg2 distortedToMatch:(BOOL)arg3 ;
-(struct CGPoint )convertBoundsToUnscaledPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )convertUnscaledToBoundsPoint:(struct CGPoint )arg0 ;
-(struct CGRect )convertBoundsToUnscaledRect:(struct CGRect )arg0 ;
-(struct CGRect )convertUnscaledToBoundsRect:(struct CGRect )arg0 ;
-(struct CGRect )i_approximateScaledFrameOfEditingMenuAtPoint:(struct CGPoint )arg0 ;
-(struct CGRect )i_clipRectForCreatingRepsFromLayouts;
-(struct CGRect )i_unscaledRectOfLayouts;
-(struct CGRect )p_bounds;
-(struct CGRect )visibleUnscaledRectForClippingReps;
-(struct CGSize )convertBoundsToUnscaledSize:(struct CGSize )arg0 ;
-(struct CGSize )convertUnscaledToBoundsSize:(struct CGSize )arg0 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)dealloc;
-(void)i_clipsImagesToBounds:(BOOL)arg0 ;
-(void)i_drawBackgroundInContext:(struct CGContext *)arg0 ;
-(void)i_drawBackgroundInContext:(struct CGContext *)arg0 bounds:(struct CGRect )arg1 ;
-(void)i_drawRepsInContext:(struct CGContext *)arg0 ;
-(void)i_drawRepsInContext:(struct CGContext *)arg0 distort:(struct CGAffineTransform )arg1 ;
-(void)i_registerRep:(id)arg0 ;
-(void)i_unregisterRep:(id)arg0 ;
-(void)i_updateInfosInLayoutController;
-(void)invalidateLayers;
-(void)invalidateReps;
-(void)invalidateVisibleBounds;
-(void)layoutIfNeeded;
-(void)layoutInvalidated;
-(void)p_layoutWithReadLock;
-(void)p_removeAllReps;
-(void)recreateAllLayoutsAndReps;
-(void)teardown;


@end


#endif