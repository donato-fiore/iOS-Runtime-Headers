// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDCANVASLAYER_H
#define TSDCANVASLAYER_H

@class NSString;
@protocol TSKKeyboardObserver;


#import "TSDNoDefaultImplicitActionLayer.h"
#import "TSDCanvasView.h"
#import "TSDInteractiveCanvasController.h"

@interface TSDCanvasLayer : TSDNoDefaultImplicitActionLayer <TSKKeyboardObserver>

 {
    NSUInteger mViewScaleAnimationCount;
    NSUInteger mLayoutDisabledDepth;
}


@property (nonatomic) BOOL allowsPinchZoom; // ivar: mAllowsPinchZoom
@property (nonatomic) BOOL avoidKeyboardWhenVerticallyCenteredInScrollView; // ivar: mAvoidKeyboardWhenVerticallyCenteredInScrollView
@property (readonly, nonatomic) TSDCanvasView *canvasView;
@property (nonatomic) BOOL centeredInScrollView;
@property (nonatomic) UIEdgeInsets contentInset; // ivar: mContentInset
@property (nonatomic) TSDInteractiveCanvasController *controller; // ivar: mController
@property (nonatomic) BOOL createdAsCopy; // ivar: _createdAsCopy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isLayoutDisabled) BOOL disableLayout;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL horizontallyCenteredInScrollView; // ivar: mHorizontallyCenteredInScrollView
@property (nonatomic, getter=isInfinite) BOOL infinite; // ivar: mIsInfinite
@property (nonatomic) CGFloat maximumPinchViewScale; // ivar: mMaximumPinchViewScale
@property (nonatomic) CGFloat minimumPinchViewScale; // ivar: mMinimumPinchViewScale
@property (nonatomic) BOOL showsScaleFeedback; // ivar: mShowsScaleFeedback
@property (readonly) Class superclass;
@property (nonatomic) BOOL torndown; // ivar: _torndown
@property (readonly, nonatomic) CGPoint unscaledContentCenter;
@property (nonatomic) CGSize unscaledSize; // ivar: mUnscaledSize
@property (nonatomic) BOOL verticallyCenteredInScrollView; // ivar: mVerticallyCenteredInScrollView
@property (nonatomic) CGFloat viewScale; // ivar: mViewScale


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLayer:(id)arg0 ;
-(struct CGPoint )contentOffsetForUnscaledContentCenter:(struct CGPoint )arg0 ;
-(struct CGPoint )p_contentOffsetForUnscaledContentCenter:(struct CGPoint )arg0 viewScale:(CGFloat)arg1 contentInset:(struct UIEdgeInsets )arg2 ;
-(struct CGRect )p_boundsRect;
-(struct CGRect )p_fixedBoundsForScrollViewSize:(struct CGSize )arg0 viewScale:(CGFloat)arg1 contentInset:(struct UIEdgeInsets )arg2 ;
-(void)_adjustContentInsetsForKeyboard;
-(void)adjustContentInsets;
-(void)animateToViewScale:(CGFloat)arg0 contentCenter:(struct CGPoint )arg1 contentInset:(struct UIEdgeInsets )arg2 duration:(CGFloat)arg3 animation:(id)arg4 completionBlock:(id)arg5 ;
-(void)animateToViewScale:(CGFloat)arg0 contentCenter:(struct CGPoint )arg1 contentInset:(struct UIEdgeInsets )arg2 duration:(CGFloat)arg3 completionBlock:(id)arg4 ;
-(void)dealloc;
-(void)fixFrameAndScrollView;
-(void)keyboardDidChangeFrame:(id)arg0 ;
-(void)keyboardWillChangeFrame:(id)arg0 ;
-(void)layoutIfNeededIgnoringDisabledLayout;
-(void)layoutSublayers;
-(void)p_commonInit;
-(void)p_fixFrameAndScrollView;
-(void)p_reenableDrawingAfterResumingFromBackground;
-(void)p_scrollViewScrollerStyleDidChange:(id)arg0 ;
-(void)p_setEnclosingScrollViewZoomParameters;
-(void)popLayoutDisabled;
-(void)pushLayoutDisabled;
-(void)setNeedsDisplayForDirtyTiles:(id)arg0 ;
-(void)setNeedsLayout;
-(void)setNeedsLayoutForTilingLayers;
-(void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect )arg0 ;
-(void)setScrollViewFrameMaintainingApparentScrollPosition:(struct CGRect )arg0 animated:(BOOL)arg1 ;
-(void)teardown;
-(void)teardownWithoutClearingLayerDelegates;


@end


#endif