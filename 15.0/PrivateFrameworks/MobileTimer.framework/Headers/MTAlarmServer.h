// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTALARMSERVER_H
#define MTALARMSERVER_H

@class NSString;
@protocol MTAlarmServer, MTAlarmObserver, MTAgentDiagnosticDelegate, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTXPCConnectionListenerProvider.h"
#import "MTAlarmStorage.h"

@interface MTAlarmServer : NSObject <MTAlarmServer, MTAlarmObserver, MTAgentDiagnosticDelegate>



@property (readonly, nonatomic) MTXPCConnectionListenerProvider *connectionListenerProvider; // ivar: _connectionListenerProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly, nonatomic) MTAlarmStorage *storage; // ivar: _storage
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSystemReady) BOOL systemReady; // ivar: _systemReady


+(BOOL)_notifyClientsForTriggerType:(NSUInteger)arg0 ;
-(id)_systemNotReadyError;
-(id)gatherDiagnostics;
-(id)initWithStorage:(id)arg0 ;
-(id)initWithStorage:(id)arg0 connectionListenerProvider:(id)arg1 ;
-(void)addAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)checkIn;
-(void)dismissAlarmWithIdentifier:(id)arg0 dismissAction:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)getAlarmsWithCompletion:(id)arg0 ;
-(void)handleSystemReady;
-(void)nextSleepAlarmWithCompletion:(id)arg0 ;
-(void)printDiagnostics;
-(void)removeAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)resetSleepAlarmSnoozeStateWithCompletion:(id)arg0 ;
-(void)snoozeAlarmWithIdentifier:(id)arg0 snoozeAction:(NSUInteger)arg1 withCompletion:(id)arg2 ;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)updateAlarm:(id)arg0 withCompletion:(id)arg1 ;
-(void)updateSleepAlarmsWithCompletion:(id)arg0 ;


@end


#endif