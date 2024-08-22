// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SOALARMSSNAPSHOTMUTATION_H
#define _SOALARMSSNAPSHOTMUTATION_H

@class NSDate, NSDictionary, NSOrderedSet, NSString;
@protocol SOAlarmsSnapshotMutating;

#import <Foundation/Foundation.h>

#import "SOAlarmsSnapshot.h"

@interface _SOAlarmsSnapshotMutation : NSObject <SOAlarmsSnapshotMutating>

 {
    SOAlarmsSnapshot *_base;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_firingAlarmIDs;
    NSOrderedSet *_dismissedAlarmIDs;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(id)getAlarmsByID;
-(id)getDate;
-(id)getDismissedAlarmIDs;
-(id)getFiringAlarmIDs;
-(id)initWithBase:(id)arg0 ;
-(void)setAlarmsByID:(id)arg0 ;
-(void)setDate:(id)arg0 ;
-(void)setDismissedAlarmIDs:(id)arg0 ;
-(void)setFiringAlarmIDs:(id)arg0 ;


@end


#endif