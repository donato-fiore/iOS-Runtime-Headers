// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HDSPSLEEPSCHEDULEMODELVALIDATIONRESULT_H
#define HDSPSLEEPSCHEDULEMODELVALIDATIONRESULT_H

@class NSError, HKSPSleepEventTimelineResults;

#import <Foundation/Foundation.h>


@interface HDSPSleepScheduleModelValidationResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) BOOL success; // ivar: _success
@property (readonly, nonatomic) HKSPSleepEventTimelineResults *timelineResults; // ivar: _timelineResults


+(id)emptyFailureWithError:(id)arg0 ;
-(id)initWithSuccess:(BOOL)arg0 timelineResults:(id)arg1 error:(id)arg2 ;


@end


#endif