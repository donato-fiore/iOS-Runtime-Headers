// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSAGGREGATELOGGER_H
#define ATXNOTIFICATIONSAGGREGATELOGGER_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface ATXNotificationsAggregateLogger : NSObject {
    PETScalarEventTracker *_rttSelectionTracker;
    PETScalarEventTracker *_rttFromTracker;
}




+(id)rtFromMapping;
+(id)rtOutcomesMapping;
+(id)sharedInstance;
+(id)stringForRTFrom:(NSUInteger)arg0 ;
+(id)stringForRTOutcome:(NSUInteger)arg0 ;
-(id)init;
-(void)logRealTimeTuningCountFrom:(NSUInteger)arg0 ;
-(void)logRealTimeTuningOutcome:(NSUInteger)arg0 ;


@end


#endif