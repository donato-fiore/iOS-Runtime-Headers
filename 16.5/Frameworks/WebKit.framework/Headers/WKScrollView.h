// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKSCROLLVIEW_H
#define WKSCROLLVIEW_H

@class UIScrollView, WKWebView<UIScrollViewDelegate>;



@interface WKScrollView : UIScrollView {
    WeakObjCPtr<id<UIScrollViewDelegate>> _externalDelegate;
    RetainPtr<WKScrollViewDelegateForwarder> _delegateForwarder;
    BOOL _backgroundColorSetByClient;
    BOOL _indicatorStyleSetByClient;
    BOOL _decelerationRateSetByClient;
    BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
    BOOL _contentInsetWasExternallyOverridden;
    CGFloat _keyboardBottomInsetAdjustment;
    BOOL _scrollEnabledByClient;
    BOOL _scrollEnabledInternal;
    BOOL _zoomEnabledByClient;
    BOOL _zoomEnabledInternal;
    BOOL _bouncesSetByClient;
    BOOL _bouncesHorizontalInternal;
    BOOL _bouncesVerticalInternal;
    optional<UIEdgeInsets> _contentScrollInsetFromClient;
    optional<UIEdgeInsets> _contentScrollInsetInternal;
}


@property (readonly, nonatomic) BOOL _contentInsetAdjustmentBehaviorWasExternallyOverridden;
@property (nonatomic) WKWebView<UIScrollViewDelegate> *internalDelegate; // ivar: _internalDelegate


-(BOOL)_setContentScrollInsetInternal:(struct UIEdgeInsets )arg0 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldBeRequiredToFailByGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1 ;
-(BOOL)isScrollEnabled;
-(CGFloat)_rubberBandOffsetForOffset:(CGFloat)arg0 maxOffset:(CGFloat)arg1 minOffset:(CGFloat)arg2 range:(CGFloat)arg3 outside:(*BOOL)arg4 ;
-(id)delegate;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_currentTopLeftRubberbandAmount;
-(struct UIEdgeInsets )_systemContentInset;
-(void)_adjustForAutomaticKeyboardInfo:(id)arg0 animated:(BOOL)arg1 lastAdjustment:(*CGFloat)arg2 ;
-(void)_restoreContentOffsetWithRubberbandAmount:(struct CGSize )arg0 ;
-(void)_sendPinchGestureActionEarlyIfNeeded;
-(void)_setBackgroundColorInternal:(id)arg0 ;
-(void)_setBouncesInternal:(BOOL)arg0 vertical:(BOOL)arg1 ;
-(void)_setContentInsetAdjustmentBehaviorInternal:(NSInteger)arg0 ;
-(void)_setContentScrollInset:(struct UIEdgeInsets )arg0 ;
-(void)_setContentSizePreservingContentOffsetDuringRubberband:(struct CGSize )arg0 ;
-(void)_setDecelerationRateInternal:(CGFloat)arg0 ;
-(void)_setIndicatorStyleInternal:(NSInteger)arg0 ;
-(void)_setScrollEnabledInternal:(BOOL)arg0 ;
-(void)_setZoomEnabledInternal:(BOOL)arg0 ;
-(void)_updateBouncability;
-(void)_updateContentScrollInset;
-(void)_updateDelegate;
-(void)_updateScrollability;
-(void)_updateZoomability;
-(void)handlePan:(id)arg0 ;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setBounces:(BOOL)arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setContentInsetAdjustmentBehavior:(NSInteger)arg0 ;
-(void)setDecelerationRate:(CGFloat)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setIndicatorStyle:(NSInteger)arg0 ;
-(void)setScrollEnabled:(BOOL)arg0 ;
-(void)setZoomEnabled:(BOOL)arg0 ;


@end


#endif