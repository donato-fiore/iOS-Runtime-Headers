// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDSPIDSSERVICEMANAGER_H
#define HDSPIDSSERVICEMANAGER_H

@class NSString;
@protocol HDSPSource, HDSPIDSServiceDelegate, HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPSleepActionObserver, HDSPIDSService;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPIDSServiceManager : NSObject <HDSPSource, HDSPIDSServiceDelegate, HDSPNotificationObserver, HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPSleepActionObserver>



@property (readonly, nonatomic) NSObject<HDSPIDSService> *cloudService; // ivar: _cloudService
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HDSPIDSService> *localService; // ivar: _localService
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;


+(id)_allowedMessageClasses;
+(void)_sendMessage:(id)arg0 onService:(id)arg1 ;
-(BOOL)_shouldHandleMessageFromService:(id)arg0 ;
-(BOOL)_shouldSendCloudMessage:(id)arg0 ;
-(BOOL)_shouldSyncAlarmMessageFromSource:(NSUInteger)arg0 ;
-(BOOL)_shouldSyncMessage;
-(BOOL)_shouldSyncSleepModeWithReason:(NSUInteger)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 localService:(id)arg1 cloudService:(id)arg2 ;
-(id)notificationListener:(id)arg0 didReceiveNotificationWithName:(id)arg1 ;
-(void)_handleConfirmWakeUpMessage:(id)arg0 ;
-(void)_handleDismissGoodMorningMessage:(id)arg0 ;
-(void)_handleNotifiedForEarlyWakeUpMessage:(id)arg0 ;
-(void)_handleReceivedMessage:(id)arg0 ;
-(void)_handleSetSleepModeMessage:(id)arg0 ;
-(void)_handleSleepAlarmDismissedMessage:(id)arg0 ;
-(void)_handleSleepAlarmSnoozedMessage:(id)arg0 ;
-(void)_handleTestMessage:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)goodMorningWasDismissed;
-(void)sendMessage:(id)arg0 ;
-(void)sendNotifiedForEarlyWakeUpMessage;
-(void)sendTestIDSMessage;
-(void)service:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)wakeNotificationWasConfirmed;
-(void)wakeUpAlarmWasDismissedFromSource:(NSUInteger)arg0 ;
-(void)wakeUpAlarmWasSnoozedFromSource:(NSUInteger)arg0 ;


@end


#endif