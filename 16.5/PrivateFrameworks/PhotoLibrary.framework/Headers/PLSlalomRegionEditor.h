// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSLALOMREGIONEDITOR_H
#define PLSLALOMREGIONEDITOR_H

@class UIControl, UIImageView;
@protocol PLSlalomRegionEditorDelegate;



@interface PLSlalomRegionEditor : UIControl {
    UIImageView *_startHandleView;
    UIImageView *_endHandleView;
    UIImageView *_trackImageView;
    UIImageView *_trackSnapshotView;
    BOOL _draggingStart;
    BOOL _draggingEnd;
    CGFloat _touchOffset;
    BOOL _zoomed;
    BOOL _trackingZoom;
    CGPoint _touchLocationWhenTrackingZoomBegan;
    BOOL _forceLayout;
    CGFloat _zoomMinValue;
    CGFloat _zoomMaxValue;
}


@property (nonatomic) NSObject<PLSlalomRegionEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) CGRect endHandleFrame;
@property (nonatomic) CGFloat endValue; // ivar: _endValue
@property (nonatomic) CGFloat maxValue; // ivar: _maxValue
@property (nonatomic) CGFloat minValue; // ivar: _minValue
@property (nonatomic) NSUInteger regionEditorStyle; // ivar: _regionEditorStyle
@property (readonly, nonatomic) CGRect startHandleFrame;
@property (nonatomic) CGFloat startValue; // ivar: _startValue
@property (nonatomic) UIEdgeInsets trackInsets; // ivar: _trackInsets
@property (nonatomic) CGFloat trimHandleWidth; // ivar: _trimHandleWidth
@property (nonatomic, getter=isZoomAnimating, setter=setZoomAnimating:) BOOL zoomAnimating; // ivar: _zoomAnimating
@property (nonatomic) CGFloat zoomDelay; // ivar: _zoomDelay


-(BOOL)_isTouch:(id)arg0 inHandleIsStart:(BOOL)arg1 outTouchOffset:(*CGFloat)arg2 ;
-(BOOL)_isZoomed;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)_trackScale;
-(CGFloat)_valueFromEndHandleFrame:(struct CGRect )arg0 ;
-(CGFloat)_valueFromHandleFrame:(struct CGRect )arg0 isStart:(BOOL)arg1 ;
-(CGFloat)_valueFromStartHandleFrame:(struct CGRect )arg0 ;
-(CGFloat)_zoomMaxValue;
-(CGFloat)_zoomMinValue;
-(id)_handleImage;
-(id)_handleTintColor;
-(id)_tickColor;
-(id)_trackColor;
-(id)_trackImageForZoom:(BOOL)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )_handleFrameForValue:(CGFloat)arg0 isStart:(BOOL)arg1 ;
-(struct CGRect )_trackFrame;
-(struct CGRect )_trackFrameNoZoom;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_beginTrackingZoomWithTouch:(id)arg0 ;
-(void)_cancelTrackingZoom;
-(void)_cancelZoom;
-(void)_cancelZoomTrackingIfNeccessaryWithTouch:(id)arg0 ;
-(void)_drawCurveWithFlatEndsFromX:(CGFloat)arg0 fromY:(CGFloat)arg1 toX:(CGFloat)arg2 toY:(CGFloat)arg3 ;
-(void)_stopTrackingAndSendControlEvents:(NSUInteger)arg0 ;
-(void)_updateSlidersWithTouch:(id)arg0 ;
-(void)_updateTrack;
-(void)_zoomPressWasHeld;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setZoomMinValue:(CGFloat)arg0 maxValue:(CGFloat)arg1 ;


@end


#endif