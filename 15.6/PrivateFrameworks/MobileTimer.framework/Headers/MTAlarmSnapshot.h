// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTALARMSNAPSHOT_H
#define MTALARMSNAPSHOT_H

@class NSString;
@protocol MTAlarmObserver;


#import "MTSnapshotScheduler.h"
#import "MTAlarmStorage.h"

@interface MTAlarmSnapshot : MTSnapshotScheduler <MTAlarmObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) MTAlarmStorage *storage; // ivar: _storage
@property (readonly) Class superclass;


+(BOOL)shouldScheduleSnapshotForAlarms:(id)arg0 ;
-(id)initWithStorage:(id)arg0 ;
-(void)source:(id)arg0 didAddAlarms:(id)arg1 ;
-(void)source:(id)arg0 didChangeNextAlarm:(id)arg1 ;
-(void)source:(id)arg0 didDismissAlarm:(id)arg1 dismissAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didFireAlarm:(id)arg1 triggerType:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didRemoveAlarms:(id)arg1 ;
-(void)source:(id)arg0 didSnoozeAlarm:(id)arg1 snoozeAction:(NSUInteger)arg2 ;
-(void)source:(id)arg0 didUpdateAlarms:(id)arg1 ;


@end


#endif