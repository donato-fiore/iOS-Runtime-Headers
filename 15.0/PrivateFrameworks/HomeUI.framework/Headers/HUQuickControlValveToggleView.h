// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLVALVETOGGLEVIEW_H
#define HUQUICKCONTROLVALVETOGGLEVIEW_H

@class UIView, UIColor, NSString;
@protocol HUQuickControlInteractiveView, HUQuickControlViewInteractionDelegate;


#import "HUCircleView.h"
#import "HUIconView.h"
#import "HUQuickControlViewProfile.h"

@interface HUQuickControlValveToggleView : UIView <HUQuickControlInteractiveView>



@property (readonly, nonatomic) UIColor *backgroundOffColor;
@property (readonly, nonatomic) UIColor *backgroundOnColor;
@property (retain, nonatomic) HUCircleView *circleView; // ivar: _circleView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (weak, nonatomic) NSObject<HUQuickControlViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (nonatomic) BOOL open; // ivar: _open
@property (copy, nonatomic) HUQuickControlViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value; // ivar: _value


+(BOOL)requiresConstraintBasedLayout;
+(id)intrinsicSizeDescriptor;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(void)_handleTap:(id)arg0 ;
-(void)_setupIconView;
-(void)_updateAppearance;
-(void)_updateIconDescriptor;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)updateConstraints;


@end


#endif