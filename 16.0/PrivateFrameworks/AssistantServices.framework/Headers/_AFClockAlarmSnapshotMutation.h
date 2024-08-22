// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFCLOCKALARMSNAPSHOTMUTATION_H
#define _AFCLOCKALARMSNAPSHOTMUTATION_H

@class NSDate, NSDictionary, NSOrderedSet, NSString;
@protocol AFClockAlarmSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFClockAlarmSnapshot.h"

@interface _AFClockAlarmSnapshotMutation : NSObject <AFClockAlarmSnapshotMutating>

 {
    AFClockAlarmSnapshot *_base;
    NSUInteger _generation;
    NSDate *_date;
    NSDictionary *_alarmsByID;
    NSOrderedSet *_notifiedFiringAlarmIDs;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDirty;
-(NSUInteger)getGeneration;
-(id)getAlarmsByID;
-(id)getDate;
-(id)getNotifiedFiringAlarmIDs;
-(id)initWithBase:(id)arg0 ;
-(void)setAlarmsByID:(id)arg0 ;
-(void)setDate:(id)arg0 ;
-(void)setGeneration:(NSUInteger)arg0 ;
-(void)setNotifiedFiringAlarmIDs:(id)arg0 ;


@end


#endif