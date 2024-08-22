// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUQUICKCONTROLPUSHBUTTONVIEW_H
#define HUQUICKCONTROLPUSHBUTTONVIEW_H

@class UIView, UILabel, NSString, UIImpactFeedbackGenerator, UILongPressGestureRecognizer;
@protocol HUQuickControlInteractiveView, HUQuickControlViewInteractionDelegate;


#import "HUIconView.h"
#import "HUQuickControlPushButtonViewProfile.h"
#import "HUQuickControlRoundButton.h"

@interface HUQuickControlPushButtonView : UIView <HUQuickControlInteractiveView>



@property (retain, nonatomic) UILabel *buttonLabel; // ivar: _buttonLabel
@property (nonatomic) NSUInteger controlState; // ivar: _controlState
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) HUIconView *decorationIconView; // ivar: _decorationIconView
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptionText; // ivar: _descriptionText
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator; // ivar: _feedbackGenerator
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<HUQuickControlViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (copy, nonatomic) HUQuickControlPushButtonViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) HUQuickControlRoundButton *roundButton; // ivar: _roundButton
@property (retain, nonatomic) id *secondaryValue;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;


+(BOOL)requiresConstraintBasedLayout;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_actuateTapticFeedbackWithIntensity:(CGFloat)arg0 ;
-(void)_animateToEnlargeView;
-(void)_animateToShrinkView;
-(void)_contentSizeCategoryDidChange;
-(void)_prepareForTapticFeedback;
-(void)_updateDecorationIconDescriptorAnimated:(BOOL)arg0 ;
-(void)_updateUI;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif