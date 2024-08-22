// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUQUICKCONTROLICONVIEW_H
#define HUQUICKCONTROLICONVIEW_H

@class UIView, NSString, UILabel;
@protocol HUQuickControlInteractiveView, HUQuickControlViewInteractionDelegate;


#import "HUIconView.h"
#import "HUQuickControlIconViewProfile.h"

@interface HUQuickControlIconView : UIView <HUQuickControlInteractiveView>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (weak, nonatomic) NSObject<HUQuickControlViewInteractionDelegate> *interactionDelegate; // ivar: _interactionDelegate
@property (copy, nonatomic) HUQuickControlIconViewProfile *profile; // ivar: _profile
@property (nonatomic) NSUInteger reachabilityState; // ivar: _reachabilityState
@property (retain, nonatomic) id *secondaryValue;
@property (retain, nonatomic) UILabel *statusLabel; // ivar: _statusLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *supplementaryLabel; // ivar: _supplementaryLabel
@property (nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // ivar: _userInteractionActive
@property (retain, nonatomic) id *value;
@property (retain, nonatomic) id *viewValue; // ivar: _viewValue


+(BOOL)requiresConstraintBasedLayout;
-(CGFloat)_iconAndLabelsHeight;
-(id)initWithProfile:(id)arg0 ;
-(id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg0 ;
-(struct CGRect )_getLabelsContainingRect;
-(struct CGSize )intrinsicContentSize;
-(void)_updateLabelFramesOrigins;
-(void)_updateLabelSizes;
-(void)_updateLayout;
-(void)_updateUI;
-(void)_updateUIForReachabilityState:(NSUInteger)arg0 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif