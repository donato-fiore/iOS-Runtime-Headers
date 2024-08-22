// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDDEMODATAOTHERANDADDITIONALSAMPLEGENERATOR_H
#define HDDEMODATAOTHERANDADDITIONALSAMPLEGENERATOR_H



#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataOtherAndAdditionalSampleGenerator : HDDemoDataBaseSampleGenerator {
    CGFloat _nextToothbrushingSampleTime;
    CGFloat _nextHandwashingSampleTime;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateSamplesForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;


@end


#endif