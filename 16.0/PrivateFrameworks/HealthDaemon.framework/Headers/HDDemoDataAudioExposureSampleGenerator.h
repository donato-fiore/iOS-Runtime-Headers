// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDEMODATAAUDIOEXPOSURESAMPLEGENERATOR_H
#define HDDEMODATAAUDIOEXPOSURESAMPLEGENERATOR_H

@class NSDate;


#import "HDDemoDataBaseSampleGenerator.h"

@interface HDDemoDataAudioExposureSampleGenerator : HDDemoDataBaseSampleGenerator {
    BOOL _didGenerateEnvironmentalAudioExposureSamples;
    BOOL _didGenerateHeadphoneAudioExposureSamples;
    CGFloat _nextEnvironmentalAudioExposureSampleTime;
    NSDate *_lastEnvironmentalSampleEndDate;
    CGFloat _nextHeadphoneAudioExposureSampleTime;
    NSDate *_lastHeadphoneSampleEndDate;
}




+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)generateObjectsForDemoPerson:(id)arg0 fromTime:(CGFloat)arg1 toTime:(CGFloat)arg2 currentDate:(id)arg3 objectCollection:(id)arg4 ;


@end


#endif