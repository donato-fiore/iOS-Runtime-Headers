// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CESRAUDIOSAMPLINGPOLICY_H
#define CESRAUDIOSAMPLINGPOLICY_H

@class NSNumber;

#import <Foundation/Foundation.h>

#import "CESRSamplingDimension.h"

@interface CESRAudioSamplingPolicy : NSObject

@property (readonly, nonatomic) NSInteger numDimension; // ivar: _numDimension
@property (readonly, copy, nonatomic) CESRSamplingDimension *ruleDimension; // ivar: _ruleDimension
@property (readonly, copy, nonatomic) NSNumber *samplingRate; // ivar: _samplingRate


-(BOOL)isMatchedSamplingDimension:(id)arg0 ;
-(id)description;
-(id)initWithRuleDimension:(id)arg0 samplingRate:(id)arg1 numDimension:(NSInteger)arg2 ;


@end


#endif