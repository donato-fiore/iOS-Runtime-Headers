// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMEXERCISEMINUTE_H
#define CMEXERCISEMINUTE_H


#import <Foundation/Foundation.h>

#import "CMExerciseMinuteInternal.h"

@interface CMExerciseMinute : NSObject

@property (readonly, nonatomic) CMExerciseMinuteInternal *_internal; // ivar: _internal


+(BOOL)isExerciseMinuteAvailable;
+(id)maxExerciseMinuteDataEntries;
-(id)init;
-(void)dealloc;
-(void)queryExerciseMinutesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)startUpdatesFromRecord:(id)arg0 handler:(id)arg1 ;
-(void)startUpdatesWithHandler:(id)arg0 ;
-(void)stopUpdates;


@end


#endif