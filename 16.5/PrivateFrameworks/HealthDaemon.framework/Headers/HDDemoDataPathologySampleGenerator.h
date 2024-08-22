// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAPATHOLOGYSAMPLEGENERATOR_H
#define HDDEMODATAPATHOLOGYSAMPLEGENERATOR_H

@class NSMutableDictionary;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataPathologySampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL _forcePEFR;
    NSMutableDictionary *_nextSpirometrySampleTimes;
    CGFloat _nextAsthmaAttackSampleTime;
    CGFloat _nextAsthmaAttackEndTime;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif