// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _HDWORKOUTCONDENSATIONCONFIGURATION_H
#define _HDWORKOUTCONDENSATIONCONFIGURATION_H


#import <Foundation/Foundation.h>

#import "HDProfile.h"
#import "HDSQLitePredicate.h"
#import "_HDWorkoutCondenserAnalyticsAccumulator.h"

@interface _HDWorkoutCondensationConfiguration : NSObject {
    HDProfile *_profile;
    HDSQLitePredicate *_predicate;
    CGFloat _minimumWorkoutDuration;
    NSInteger _minimumSeriesSize;
    NSInteger _maximumSeriesSize;
    NSInteger _deletedSampleThreshold;
    _HDWorkoutCondenserAnalyticsAccumulator *_analyticsAccumulator;
}






@end


#endif