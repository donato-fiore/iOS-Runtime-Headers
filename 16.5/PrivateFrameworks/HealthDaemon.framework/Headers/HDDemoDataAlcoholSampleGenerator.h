// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDDEMODATAALCOHOLSAMPLEGENERATOR_H
#define HDDEMODATAALCOHOLSAMPLEGENERATOR_H



#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataAlcoholSampleGenerator : HDDemoDataBaseSampleGenerator

@property (nonatomic) CGFloat nextCheckInTime; // ivar: _nextCheckInTime


+(BOOL)supportsSecureCoding;
-(BOOL)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 foodSampleGenerator:(id)arg4 statisticsSampleGenerator:(id)arg5 bodySampleGenerator:(id)arg6 objectCollection:(id)arg7 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;
-(void)setupWithDemoDataGenerator:(id)arg0 ;


@end


#endif