// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC18HEALTHPLATFORMCORE35RELEVANCEENGINEMETRICSBLOCKRECORDER_H
#define _TTC18HEALTHPLATFORMCORE35RELEVANCEENGINEMETRICSBLOCKRECORDER_H

@protocol RERelevanceEngineMetricsRecorder;

#import <Foundation/Foundation.h>


@interface _TtC18HealthPlatformCore35RelevanceEngineMetricsBlockRecorder : NSObject <RERelevanceEngineMetricsRecorder>

 {
    ? callback;
}




-(BOOL)ignoreValidMetricCheck;
-(id)init;
-(void)recordTrainingMetrics:(id)arg0 forInteraction:(id)arg1 ;


@end


#endif