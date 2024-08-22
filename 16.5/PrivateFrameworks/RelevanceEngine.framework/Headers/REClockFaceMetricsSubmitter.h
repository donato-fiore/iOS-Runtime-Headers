// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RECLOCKFACEMETRICSSUBMITTER_H
#define RECLOCKFACEMETRICSSUBMITTER_H

@class NSString;
@protocol RERelevanceEngineMetricsRecorder;

#import <Foundation/Foundation.h>


@interface REClockFaceMetricsSubmitter : NSObject <RERelevanceEngineMetricsRecorder>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_runningInClockFace;
-(BOOL)_runningInTest;
-(BOOL)_shouldRecordMetrics;
-(void)recordCallibrationCurveMetrics:(id)arg0 forInteraction:(id)arg1 ;
-(void)recordTrainingMetrics:(id)arg0 forInteraction:(id)arg1 ;


@end


#endif