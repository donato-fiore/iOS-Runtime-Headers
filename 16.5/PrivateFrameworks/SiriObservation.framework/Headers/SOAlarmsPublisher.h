// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SOALARMSPUBLISHER_H
#define SOALARMSPUBLISHER_H

@class NSHashTable, MTAlarmManager, NSMutableOrderedSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "SOAlarmsSnapshot.h"

@interface SOAlarmsPublisher : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSHashTable *_subscribers;
    MTAlarmManager *_alarmManager;
    SOAlarmsSnapshot *_alarmsSnapshot;
    NSMutableOrderedSet *_dismissedAlarms;
}


@property (readonly, nonatomic) NSString *typeName; // ivar: _typeName


-(id)init;
-(void)_createNewSnapshotWithCompletion:(id)arg0 ;
-(void)_notifySubscribersOfEvent:(NSInteger)arg0 ;
-(void)_startObserving;
-(void)addSubscriber:(id)arg0 ;
-(void)alarmFired:(id)arg0 ;
-(void)alarmsAdded:(id)arg0 ;
-(void)alarmsRemoved:(id)arg0 ;
-(void)alarmsUpdated:(id)arg0 ;
-(void)dealloc;
-(void)firingAlarmChanged:(id)arg0 ;
-(void)firingAlarmDismissed:(id)arg0 ;
-(void)getCurrentSnapshotWithCompletion:(id)arg0 ;
-(void)removeSubscriber:(id)arg0 ;
-(void)stateReset:(id)arg0 ;


@end


#endif