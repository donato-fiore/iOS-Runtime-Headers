// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSLIDERVIEW_H
#define HUQUICKCONTROLSLIDERVIEW_H

@class UIView, NSString, UIImpactFeedbackGenerator, NSLayoutConstraint;
@protocol HUQuickControlControllableView;


#import "HUIconView.h"
#import "HUQuickControlSliderViewProfile.h"
#import "HUQuickControlSliderValueOverlayView.h"

@interface HUQuickControlSliderView : UIView <HUQuickControlControllableView>



@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIView *borderView; // ivar: _borderView
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HUIconView *decorationIconView; // ivar: _decorationIconView
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *overlayTopConstraint; // ivar: _overlayTopConstraint
@property (nonatomic) CGFloat primaryNormalizedValue; // ivar: _primaryNormalizedValue
@property (copy, nonatomic) HUQuickControlSliderViewProfile *profile; // ivar: _profile
@property (nonatomic) CGFloat rawSliderValue; // ivar: _rawSliderValue
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (nonatomic) CGFloat secondaryNormalizedValue; // ivar: _secondaryNormalizedValue
@property (nonatomic) CGFloat secondarySliderValue; // ivar: _secondarySliderValue
@property (retain, nonatomic) id *secondaryValue;
@property (nonatomic) BOOL showOffState; // ivar: _showOffState
@property (nonatomic) CGFloat sliderValue; // ivar: _sliderValue
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value;
@property (retain, nonatomic) HUQuickControlSliderValueOverlayView *valueOverlayView; // ivar: _valueOverlayView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_createDecorationIconViewIfNecessary;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct ? )_permittedValueRange;
-(struct CGSize )intrinsicContentSize;
-(void)_actuateTapticFeedback;
-(void)_prepareForTapticFeedback;
-(void)_updateDecorationIconDescriptorAnimated:(BOOL)arg0 ;
-(void)_updateOffState;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif