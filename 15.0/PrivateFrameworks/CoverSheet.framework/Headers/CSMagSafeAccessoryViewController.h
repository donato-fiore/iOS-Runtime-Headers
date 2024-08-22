// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSMAGSAFEACCESSORYVIEWCONTROLLER_H
#define CSMAGSAFEACCESSORYVIEWCONTROLLER_H



#import "CSCoverSheetViewControllerBase.h"
#import "CSMagSafeAccessory.h"
#import "CSMagSafeAccessoryView.h"

@interface CSMagSafeAccessoryViewController : CSCoverSheetViewControllerBase

@property (retain, nonatomic) CSMagSafeAccessory *accessory; // ivar: _accessory
@property (readonly, nonatomic) CSMagSafeAccessoryView *accessoryView;
@property (readonly, nonatomic) CGFloat animationDurationBeforeDismissal;
@property (readonly, nonatomic) CGFloat chargingAnimationDuration;
@property (readonly, nonatomic) BOOL hasChargingAnimation;
@property (readonly, nonatomic) BOOL isAnimatingPresentation; // ivar: _isAnimatingPresentation
@property (readonly, nonatomic) BOOL isStatic;
@property (readonly, nonatomic) BOOL showingChargingAnimation;


-(BOOL)handleEvent:(id)arg0 ;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationType;
-(id)initWithAccessory:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)performDismissalAnimationWithCompletionHandler:(id)arg0 ;
-(void)transitionChargingViewVisible:(BOOL)arg0 chargingInfo:(id)arg1 ;


@end


#endif