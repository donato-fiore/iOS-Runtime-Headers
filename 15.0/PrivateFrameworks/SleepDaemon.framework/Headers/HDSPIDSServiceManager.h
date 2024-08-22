// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDSPIDSSERVICEMANAGER_H
#define HDSPIDSSERVICEMANAGER_H

@class NSString;
@protocol HDSPSource, HDSPIDSServiceDelegate, HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPSleepActionObserver, HDSPIDSService;

#import <Foundation/Foundation.h>

#import "HDSPEnvironment.h"

@interface HDSPIDSServiceManager : NSObject <HDSPSource, HDSPIDSServiceDelegate, HDSPEnvironmentAware, HDSPSleepModeObserver, HDSPSleepActionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dontNotify;
@property (readonly, nonatomic) BOOL dontSync;
@property (readonly, weak, nonatomic) HDSPEnvironment *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HDSPIDSService> *localService; // ivar: _localService
@property (readonly, nonatomic) NSString *sourceIdentifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HDSPSource> *targetSource;


+(id)_allowedMessageClasses;
+(void)_sendMessage:(id)arg0 onService:(id)arg1 ;
-(BOOL)_shouldSyncMessage;
-(BOOL)_shouldSyncSleepModeWithReason:(NSUInteger)arg0 ;
-(id)initWithEnvironment:(id)arg0 ;
-(id)initWithEnvironment:(id)arg0 localService:(id)arg1 ;
-(void)_handleConfirmWakeUpMessage:(id)arg0 ;
-(void)_handleDismissGoodMorningMessage:(id)arg0 ;
-(void)_handleNotifiedForEarlyWakeUpMessage:(id)arg0 ;
-(void)_handleReceivedMessage:(id)arg0 ;
-(void)_handleSetSleepModeMessage:(id)arg0 ;
-(void)environmentDidBecomeReady:(id)arg0 ;
-(void)environmentWillBecomeReady:(id)arg0 ;
-(void)goodMorningWasDismissed;
-(void)sendMessage:(id)arg0 ;
-(void)sendNotifiedForEarlyWakeUpMessage;
-(void)service:(id)arg0 didReceiveMessage:(id)arg1 ;
-(void)sleepModeDidChange:(NSInteger)arg0 previousMode:(NSInteger)arg1 reason:(NSUInteger)arg2 ;
-(void)wakeNotificationWasConfirmed;


@end


#endif