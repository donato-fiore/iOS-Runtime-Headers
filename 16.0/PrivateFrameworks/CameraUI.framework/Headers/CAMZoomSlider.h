// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMZOOMSLIDER_H
#define CAMZOOMSLIDER_H

@class UISlider, UIView, NSTimer;
@protocol CAMZoomSliderDelegate;



@interface CAMZoomSlider : UISlider

@property (nonatomic, getter=_isAutozooming, setter=_setAutozooming:) BOOL _autozooming; // ivar: __autozooming
@property (readonly, nonatomic) UIView *_maxTrackMaskView; // ivar: __maxTrackMaskView
@property (readonly, nonatomic) UIView *_minTrackMaskView; // ivar: __minTrackMaskView
@property (readonly, nonatomic) NSTimer *_visibilityTimer; // ivar: __visibilityTimer
@property (nonatomic) UIEdgeInsets alignmentRectInsets; // ivar: _alignmentRectInsets
@property (readonly, nonatomic, getter=isAutozooming) BOOL autozooming;
@property (weak, nonatomic) NSObject<CAMZoomSliderDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger layoutStyle; // ivar: _layoutStyle
@property (nonatomic, getter=isMaximumAutozooming, setter=_setMaximumAutozooming:) BOOL maximumAutozooming; // ivar: _maximumAutozooming
@property (nonatomic, getter=isMinimumAutozooming, setter=_setMinimumAutozooming:) BOOL minimumAutozooming; // ivar: _minimumAutozooming
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (nonatomic, getter=isVisibilityTimerSuspended) BOOL visibilityTimerSuspended; // ivar: _visibilityTimerSuspended


+(BOOL)shouldFadeOutZoomSliderForLayoutStyle:(NSInteger)arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)shouldHideForExpiredVisibilityTimer;
-(CGFloat)_thumbCenterMaximumXForTrackRect:(struct CGRect )arg0 ;
-(CGFloat)_thumbCenterMinimumXForTrackRect:(struct CGRect )arg0 ;
-(CGFloat)_thumbCenterXForValue:(float)arg0 trackRect:(struct CGRect )arg1 ;
-(NSInteger)locationOfTouch:(id)arg0 ;
-(float)_valueForThumbCenterX:(CGFloat)arg0 trackRect:(struct CGRect )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithLayoutStyle:(NSInteger)arg0 ;
-(struct CGRect )maximumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )minimumValueImageRectForBounds:(struct CGRect )arg0 ;
-(struct CGRect )thumbRectForBounds:(struct CGRect )arg0 trackRect:(struct CGRect )arg1 value:(float)arg2 ;
-(struct CGRect )trackRectForBounds:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_beginAutozooming;
-(void)_commonCAMZoomSliderInitializationWithLayoutStyle:(NSInteger)arg0 ;
-(void)_endAutozooming;
-(void)_handleTouchUpInside:(id)arg0 ;
-(void)_hideZoomSlider:(id)arg0 ;
-(void)_makeInvisibleAnimationDuration:(CGFloat)arg0 ;
-(void)_startVisibilityTimer;
-(void)_stopVisibilityTimer;
-(void)_updateAutozooming;
-(void)_updateForLayoutStyle;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)dealloc;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)makeInvisibleAnimated:(BOOL)arg0 ;
-(void)makeVisibleAnimated:(BOOL)arg0 ;


@end


#endif