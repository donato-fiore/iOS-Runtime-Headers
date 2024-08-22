// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLTIMEESTIMATEACCURACYTRACKER_H
#define WLTIMEESTIMATEACCURACYTRACKER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface WLTimeEstimateAccuracyTracker : NSObject {
    NSUInteger _thresholdBelowLastSample;
}


@property (retain, nonatomic) NSArray *samples; // ivar: _samples
@property (retain, nonatomic) NSArray *thresholds; // ivar: _thresholds


-(NSUInteger)_indexOfThresholdGreaterThanOrEqualToEstimate:(NSUInteger)arg0 ;
-(NSUInteger)_thresholdAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(void)didCalculateTimeEstimate:(NSUInteger)arg0 atDate:(id)arg1 associatedObject:(id)arg2 ;
-(void)estimatesDidResolveAtDate:(id)arg0 block:(id)arg1 ;


@end


#endif