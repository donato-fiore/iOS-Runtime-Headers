// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATAMINDFULNESSSAMPLEGENERATOR_H
#define HDDEMODATAMINDFULNESSSAMPLEGENERATOR_H



#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataMindfulnessSampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL _didGenerateMindfulnessMinute;
    CGFloat _nextMindfulSessionSampleTime;
}


@property (readonly, nonatomic) BOOL didGenerateMindfulnessMinute;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif