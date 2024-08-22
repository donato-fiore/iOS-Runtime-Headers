// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDBACKGROUNDTASK_H
#define HDBACKGROUNDTASK_H

@class NSDate, NSDictionary;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface HDBackgroundTask : NSObject {
    NSObject<OS_xpc_object> *_job;
}


@property (nonatomic) BOOL allowsPowerOptimizedScheduling;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) BOOL shiftsDatesWithSystemClockChanges;
@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDictionary *userContext;


-(BOOL)taskExpired;
-(BOOL)taskSatisfied;
-(BOOL)taskValid;
-(id)description;
-(id)init;


@end


#endif