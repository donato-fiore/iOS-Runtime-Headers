// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICCLOUDTHROTTLINGLEVEL_H
#define ICCLOUDTHROTTLINGLEVEL_H


#import <Foundation/Foundation.h>


@interface ICCloudThrottlingLevel : NSObject

@property (readonly, nonatomic) CGFloat batchInterval; // ivar: _batchInterval
@property (readonly, nonatomic) CGFloat maximumBatchIntervalFactor; // ivar: _maximumBatchIntervalFactor
@property (readonly, nonatomic) NSUInteger numberOfBatches; // ivar: _numberOfBatches


-(id)debugDescription;
-(id)description;
-(id)init;
-(id)initWithBatchInterval:(CGFloat)arg0 maximumBatchIntervalFactor:(CGFloat)arg1 numberOfBatches:(NSUInteger)arg2 ;


@end


#endif