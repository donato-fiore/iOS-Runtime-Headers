// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOCLOCKALARMOBSERVER_H
#define SOCLOCKALARMOBSERVER_H

@class AFInstanceContext, NSHashTable, AFClockAlarmSnapshot, AFClockItemStorage, NSMutableOrderedSet, NSUUID, NSString;
@protocol AFClockItemStorageDelegate, AFInvalidating, OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "SOClockAlarmManager.h"

@interface SOClockAlarmObserver : NSObject <AFClockItemStorageDelegate, AFInvalidating>

 {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
    NSHashTable *_listeners;
    SOClockAlarmManager *_alarmManager;
    AFClockAlarmSnapshot *_alarmSnapshot;
    NSObject<OS_dispatch_group> *_alarmSnapshotGroup;
    NSInteger _alarmSnapshotGroupDepth;
    AFClockItemStorage *_alarmStorage;
    NSMutableOrderedSet *_notifiedFiringAlarmIDs;
    NSUUID *_alarmsChangedToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(id)_alarmSnapshot;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(void)_beginGroup;
-(void)_consolidateNotifiedFiringAlarms;
-(void)_endGroup;
-(void)_enumerateListenersUsingBlock:(id)arg0 ;
-(void)_fetchAlarmsForReason:(id)arg0 completion:(id)arg1 ;
-(void)_handleFetchAlarmsForReason:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_handleFetchAlarmsForReason:(id)arg0 result:(id)arg1 completion:(id)arg2 ;
-(void)_reset;
-(void)_setUp;
-(void)_tearDown;
-(void)addListener:(id)arg0 ;
-(void)alarmFired:(id)arg0 ;
-(void)alarmsAdded:(id)arg0 ;
-(void)alarmsChanged:(id)arg0 ;
-(void)alarmsRemoved:(id)arg0 ;
-(void)alarmsUpdated:(id)arg0 ;
-(void)clockItemStorageDidUpdate:(id)arg0 insertedItemIDs:(id)arg1 updatedItemIDs:(id)arg2 deletedItemIDs:(id)arg3 ;
-(void)dealloc;
-(void)firingAlarmChanged:(id)arg0 ;
-(void)firingAlarmDismissed:(id)arg0 ;
-(void)getAlarmSnapshotWithCompletion:(id)arg0 ;
-(void)getFiringAlarmIDsWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)removeListener:(id)arg0 ;
-(void)stateReset:(id)arg0 ;


@end


#endif