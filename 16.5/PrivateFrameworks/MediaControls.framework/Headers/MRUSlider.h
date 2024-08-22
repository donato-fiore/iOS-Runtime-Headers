// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRUSLIDER_H
#define MRUSLIDER_H

@class UIControl, UIView, NSString, UIImpactFeedbackGenerator;
@protocol MRUVisualStylingProviderObserver;


#import "MRUVisualStylingProvider.h"

@interface MRUSlider : UIControl <MRUVisualStylingProviderObserver>



@property (nonatomic) CGFloat animationHeight; // ivar: _animationHeight
@property (retain, nonatomic) UIView *clipView; // ivar: _clipView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // ivar: _dimmed
@property (nonatomic, getter=isEqualizing) BOOL equalizing; // ivar: _equalizing
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (nonatomic) UIEdgeInsets hitRectInset; // ivar: _hitRectInset
@property (retain, nonatomic) UIView *maxTrack; // ivar: _maxTrack
@property (nonatomic) float maximumValue; // ivar: _maximumValue
@property (retain, nonatomic) UIView *minTrack; // ivar: _minTrack
@property (nonatomic) float minimumValue; // ivar: _minimumValue
@property (retain, nonatomic) MRUVisualStylingProvider *stylingProvider; // ivar: _stylingProvider
@property (readonly) Class superclass;
@property (nonatomic) float trackingStartNormalizedValue; // ivar: _trackingStartNormalizedValue
@property (nonatomic) CGFloat trackingTouchStartNormalized; // ivar: _trackingTouchStartNormalized
@property (nonatomic) float value; // ivar: _value


-(BOOL)acuis_wantsPriorityOverTargetOfGestureRecognizer:(id)arg0 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(CGFloat)currentPosition;
-(CGFloat)locationForTouch:(id)arg0 ;
-(CGFloat)valueForTouch:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGRect )hitRect;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setEnabled:(BOOL)arg0 ;
-(void)setTracking:(BOOL)arg0 ;
-(void)updateVisibility;
-(void)updateVisualStyling;
-(void)visualStylingProviderDidChange:(id)arg0 ;


@end


#endif