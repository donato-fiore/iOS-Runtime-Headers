// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNCALERTINGCONTROLLER_H
#define SBNCALERTINGCONTROLLER_H

@class NCNotificationRequest, NSString, NSMutableSet;
@protocol NCAlertingController;

#import <Foundation/Foundation.h>

#import "SBCommunicationPolicyManager.h"
#import "SBLockScreenManager.h"
#import "SBNCScreenController.h"
#import "SBNCSoundController.h"

@interface SBNCAlertingController : NSObject <NCAlertingController>



@property (retain, nonatomic) NCNotificationRequest *activeRequestWithRealerts; // ivar: _activeRequestWithRealerts
@property (retain, nonatomic) SBCommunicationPolicyManager *communicationPolicyManager; // ivar: _communicationPolicyManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBLockScreenManager *lockScreenManager; // ivar: _lockScreenManager
@property (retain, nonatomic) NSMutableSet *realertTimers; // ivar: _realertTimers
@property (retain, nonatomic) SBNCScreenController *screenController; // ivar: _screenController
@property (retain, nonatomic) SBNCSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;


-(BOOL)_activeAlertDestinationsInRequestDestinations:(id)arg0 ;
-(BOOL)_isBundleIdentifierBlockedForCommunicationPolicy:(id)arg0 ;
-(BOOL)_isBundleIdentifierBlockedForScreenTimeExpiration:(id)arg0 ;
-(BOOL)_shouldRealert;
-(BOOL)_shouldScreenTimeSuppressNotificationRequest:(id)arg0 ;
-(BOOL)_shouldScreenTimeSuppressNotificationsForBundleIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithSoundController:(id)arg0 screenController:(id)arg1 lockScreenManager:(id)arg2 communicationPolicyManager:(id)arg3 ;
-(void)_alertNowForNotificationRequest:(id)arg0 ;
-(void)_alertNowForNotificationRequest:(id)arg0 presentingDestination:(id)arg1 ;
-(void)_hardwareButtonPressed:(id)arg0 ;
-(void)_killRealertsForNotificationRequest:(id)arg0 ;
-(void)_lockStateChanged;
-(void)_notificationCenterDidPresent;
-(void)_realertTimerFired:(id)arg0 ;
-(void)_scheduleRealertsForNotificationRequest:(id)arg0 ;
-(void)alertOnPostForNotificationRequest:(id)arg0 forRequestDestinations:(id)arg1 ;
-(void)alertOnPresentationForNotificationRequest:(id)arg0 presentingDestination:(id)arg1 ;
-(void)killAlertsForNotificationRequest:(id)arg0 ;
-(void)killRealerts;
-(void)resetAutomaticLockStateForNotificationRequest:(id)arg0 ;


@end


#endif