// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBDASHBOARDBIOMETRICUNLOCKCONTROLLER_H
#define SBDASHBOARDBIOMETRICUNLOCKCONTROLLER_H

@class CSCoverSheetViewController, NSString;
@protocol SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehaviorConfigurationDelegate, CSExternalEventHandling, SBBiometricUnlockBehavior, SBBiometricUnlockBehaviorConfiguration;

#import <Foundation/Foundation.h>


@interface SBDashBoardBiometricUnlockController : NSObject <SBBiometricUnlockBehaviorDelegate, SBBiometricUnlockBehaviorConfigurationDelegate, CSExternalEventHandling, SBBiometricUnlockBehavior>

 {
    CSCoverSheetViewController *_coverSheetViewController;
    id<SBBiometricUnlockBehaviorConfiguration> *_biometricUnlockBehaviorConfiguration;
    id<SBBiometricUnlockBehavior> *_biometricUnlockBehavior;
}


@property (weak, nonatomic) NSObject<SBBiometricUnlockBehaviorDelegate> *biometricUnlockBehaviorDelegate; // ivar: _biometricUnlockBehaviorDelegate
@property (readonly, copy, nonatomic) NSString *coverSheetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger participantState;
@property (readonly) Class superclass;


-(BOOL)biometricUnlockBehavior:(id)arg0 requestsFeedback:(id)arg1 ;
-(BOOL)biometricUnlockBehavior:(id)arg0 requestsUnlock:(id)arg1 withFeedback:(id)arg2 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)hasVisibleContentToReveal;
-(BOOL)isLockScreenShowingDefaultContent;
-(BOOL)isRestToOpenAvailable;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(id)_mesaUnlockBehavior;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoverSheetViewController:(id)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(int)lockScreenWakeSource;
-(void)biometricUnlockBehaviorConfigurationDidChange:(id)arg0 ;
-(void)conformsToCSEventHandling;
-(void)dealloc;
-(void)fillRestToOpenWithDuration:(CGFloat)arg0 ;
-(void)handleBiometricEvent:(NSUInteger)arg0 ;
-(void)noteLockButtonDown;
-(void)noteMenuButtonDown;
-(void)noteMenuButtonUp;
-(void)resetRestToOpen;
-(void)setAuthenticated:(BOOL)arg0 ;
-(void)startRestToOpenCoachingWithCompletion:(id)arg0 ;


@end


#endif