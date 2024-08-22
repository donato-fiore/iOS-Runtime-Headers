// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OZFXPLUGTIMINGAPI_H
#define OZFXPLUGTIMINGAPI_H

@class NSString;
@protocol FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, FxTimingInfo_Private, PROAPIObject;

#import <Foundation/Foundation.h>


@interface OZFxPlugTimingAPI : NSObject <FxTimingAPI, FxTimingAPI_v2, FxTimingAPI_v3, FxTimingInfo_Private, PROAPIObject>

 {
    *void _plugin;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(*void)scene;
-(*void)sceneSettings;
-(?)copyFxTimetoFxTime;
-(?)durationFxTimeForEffect;
-(?)durationFxTimeOfInputAToTransition;
-(?)durationFxTimeOfInputBToTransition;
-(?)durationFxTimeOfInputToFilter;
-(?)durationFxTimeofImageParm;
-(?)frameDuration;
-(?)imageFxTime:(?)arg0 forParmIdfromTimelineTime;
-(?)inPointFxTimeOfTimelineForEffect;
-(?)inputAFxTimefromTimelineTime;
-(?)inputBFxTimefromTimelineTime;
-(?)inputFxTimefromTimelineTime;
-(?)invalidTime;
-(?)outPointFxTimeOfTimelineForEffect;
-(?)sampleDuration;
-(?)startFxTimeForEffect;
-(?)startFxTimeOfInputAToTransition;
-(?)startFxTimeOfInputBToTransition;
-(?)startFxTimeOfInputToFilter;
-(?)startFxTimeofImageParam;
-(?)timelineFxTime:(?)arg0 fromImageTimeforParmId;
-(?)timelineFxTimefromInputATime;
-(?)timelineFxTimefromInputBTime;
-(?)timelineFxTimefromInputTime;
-(?)zeroTime;
-(BOOL)conformsToProtocol:(id)arg0 version:(unsigned int)arg1 ;
-(CGFloat)durationForEffect:(id)arg0 ;
-(CGFloat)durationOfImageParm:(unsigned int)arg0 forEffect:(id)arg1 ;
-(CGFloat)durationOfInputAToTransition:(id)arg0 ;
-(CGFloat)durationOfInputBToTransition:(id)arg0 ;
-(CGFloat)durationOfInputToFilter:(id)arg0 ;
-(CGFloat)imageTimeForParmId:(unsigned int)arg0 forEffect:(id)arg1 fromTimelineTime:(CGFloat)arg2 ;
-(CGFloat)inPointOfTimelineForEffect:(id)arg0 ;
-(CGFloat)inputATimeForTransition:(id)arg0 fromTimelineTime:(CGFloat)arg1 ;
-(CGFloat)inputBTimeForTransition:(id)arg0 fromTimelineTime:(CGFloat)arg1 ;
-(CGFloat)inputTimeForFilter:(id)arg0 fromTimelineTime:(CGFloat)arg1 ;
-(CGFloat)outPointOfTimelineForEffect:(id)arg0 ;
-(CGFloat)startTimeForEffect:(id)arg0 ;
-(CGFloat)startTimeOfImageParm:(unsigned int)arg0 forEffect:(id)arg1 ;
-(CGFloat)startTimeOfInputAToTransition:(id)arg0 ;
-(CGFloat)startTimeOfInputBToTransition:(id)arg0 ;
-(CGFloat)startTimeOfInputToFilter:(id)arg0 ;
-(CGFloat)timelineDurationForEffect:(id)arg0 ;
-(CGFloat)timelineTimeFromImageTime:(CGFloat)arg0 forParmId:(unsigned int)arg1 forEffect:(id)arg2 ;
-(CGFloat)timelineTimeFromInputATime:(CGFloat)arg0 forTransition:(id)arg1 ;
-(CGFloat)timelineTimeFromInputBTime:(CGFloat)arg0 forTransition:(id)arg1 ;
-(CGFloat)timelineTimeFromInputTime:(CGFloat)arg0 forFilter:(id)arg1 ;
-(CGFloat)transitionTimeFractionAtTime:(CGFloat)arg0 ;
-(NSUInteger)fieldOrderForImageParm:(unsigned int)arg0 forEffect:(id)arg1 ;
-(NSUInteger)fieldOrderForInputAToTransition:(id)arg0 ;
-(NSUInteger)fieldOrderForInputBToTransition:(id)arg0 ;
-(NSUInteger)fieldOrderForInputToFilter:(id)arg0 ;
-(NSUInteger)timelineFpsDenominatorForEffect:(id)arg0 ;
-(NSUInteger)timelineFpsNumeratorForEffect:(id)arg0 ;
-(id)initWithPlugin:(*void)arg0 ;
-(struct ? )timeOffsetForImageParameter:(unsigned int)arg0 ;


@end


#endif