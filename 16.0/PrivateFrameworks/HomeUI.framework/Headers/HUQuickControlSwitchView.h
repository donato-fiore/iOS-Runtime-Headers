// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUQUICKCONTROLSWITCHVIEW_H
#define HUQUICKCONTROLSWITCHVIEW_H

@class UIView, NSString, UIImpactFeedbackGenerator;
@protocol HUQuickControlControllableView;


#import "HUIconView.h"
#import "HUQuickControlSwitchViewProfile.h"
#import "HUDynamicFormattingLabel.h"

@interface HUQuickControlSwitchView : UIView <HUQuickControlControllableView>



@property (nonatomic) CGFloat clippedValue; // ivar: _clippedValue
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HUIconView *decorationIconView; // ivar: _decorationIconView
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *knobView; // ivar: _knobView
@property (copy, nonatomic) HUQuickControlSwitchViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (readonly) Class superclass;
@property (retain, nonatomic) HUDynamicFormattingLabel *supplementaryValueLabel; // ivar: _supplementaryValueLabel
@property (nonatomic) CGFloat switchValue; // ivar: _switchValue
@property (retain, nonatomic) id *value;
@property (retain, nonatomic) UIView *wellView; // ivar: _wellView


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)_createDecorationIconViewIfNecessary;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct CGPoint )_knobCenterForMetrics:(struct ? )arg0 switchValue:(CGFloat)arg1 ;
-(struct CGRect )_knobFrameForMetrics:(struct ? )arg0 switchValue:(CGFloat)arg1 ;
-(struct CGSize )_knobSizeForMetrics:(struct ? )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_actuateTapticFeedback;
-(void)_createSupplementaryValueLabelIfNecessary;
-(void)_prepareForTapticFeedback;
-(void)_updateDecorationIconDescriptorAnimated:(BOOL)arg0 ;
-(void)_updateKnobViewTintColorAnimated:(BOOL)arg0 ;
-(void)_updateSupplementaryValueLabelAnimated:(BOOL)arg0 ;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)layoutSubviews;


@end


#endif