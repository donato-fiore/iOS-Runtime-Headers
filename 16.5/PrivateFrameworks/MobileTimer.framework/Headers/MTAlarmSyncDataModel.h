// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTALARMSYNCDATAMODEL_H
#define MTALARMSYNCDATAMODEL_H

@class NSString;
@protocol MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate, OS_dispatch_queue, NAScheduler;

#import <Foundation/Foundation.h>

#import "MTAlarmStorage.h"
#import "MTMetrics.h"
#import "MTSyncServiceManager.h"

@interface MTAlarmSyncDataModel : NSObject <MTSource, MTAlarmObserver, MTSyncDataModel, MTAgentDiagnosticDelegate>



@property (retain, nonatomic) MTAlarmStorage *alarmStorage; // ivar: _alarmStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer
@property (readonly) Class superclass;
@property (retain, nonatomic) MTMetrics *syncMetrics; // ivar: _syncMetrics
@property (retain, nonatomic) MTSyncServiceManager *syncServiceManager; // ivar: _syncServiceManager


+(id)defaultBlock:(SEL)arg0 ;
-(BOOL)isFromOtherDevice;
-(id)dataFileName;
-(id)gatherDiagnostics;
-(id)initWithAlarmStorage:(id)arg0 syncMetrics:(id)arg1 ;
// -(id)initWithAlarmStorage:(id)arg0 syncMetrics:(id)arg1 syncServiceManagerBlock:(id)arg2 serializer:(unk)arg3 serialQueue:(id)arg4  ;
-(id)sourceIdentifier;
-(void)_performAction:(id)arg0 ;
-(void)_performDismiss:(id)arg0 ;
-(void)_performSnooze:(id)arg0 ;
-(void)_setupSyncManagerWithBlock:(id)arg0 ;
-(void)applyChange:(id)arg0 ;
-(void)printDiagnostics;
-(void)resetDataStore;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;
-(void)startSyncServices;
-(void)stopSyncServices;


@end


#endif