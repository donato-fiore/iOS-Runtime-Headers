// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ABBURDENRESULT_H
#define ABBURDENRESULT_H

@class NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface ABBurdenResult : NSObject

@property (retain, nonatomic) NSNumber *burdenPercentage; // ivar: _burdenPercentage
@property (retain, nonatomic) NSDictionary *metricsForCoreAnalytics; // ivar: _metricsForCoreAnalytics
@property (nonatomic) NSUInteger unavailabilityReason; // ivar: _unavailabilityReason


-(id)init;


@end


#endif