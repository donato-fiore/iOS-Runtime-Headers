// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFCLOCKTIMERSNAPSHOTMUTATION_H
#define _AFCLOCKTIMERSNAPSHOTMUTATION_H

@class NSDate, NSDictionary, NSOrderedSet, NSString;
@protocol AFClockTimerSnapshotMutating;

#import <Foundation/Foundation.h>

#import "AFClockTimerSnapshot.h"

@interface _AFClockTimerSnapshotMutation : NSObject <AFClockTimerSnapshotMutating>

 {
    AFClockTimerSnapshot *_baseModel;
    NSUInteger _generation;
    NSDate *_date;
    NSDictionary *_timersByID;
    NSOrderedSet *_notifiedFiringTimerIDs;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setDate:(id)arg0 ;
-(void)setGeneration:(NSUInteger)arg0 ;
-(void)setNotifiedFiringTimerIDs:(id)arg0 ;
-(void)setTimersByID:(id)arg0 ;


@end


#endif