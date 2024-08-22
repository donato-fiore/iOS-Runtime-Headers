// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOFRAMEANALYZER_H
#define HMIVIDEOFRAMEANALYZER_H

@class NSString;
@protocol HMIVideoFrameSamplerDelegate, HMFLogging, HMICameraVideoFrameAnalyzer, HMIVideoFrameAnalyzerDelegate;


#import "HMIVideoAnalyzerProcessingNode.h"
#import "MovingAverage.h"
#import "HMIVideoFrameSampler.h"

@interface HMIVideoFrameAnalyzer : HMIVideoAnalyzerProcessingNode <HMIVideoFrameSamplerDelegate, HMFLogging>

 {
    MovingAverage *_analysisTime;
}


@property (readonly) CGFloat averageAnalysisTime;
@property (readonly) NSObject<HMICameraVideoFrameAnalyzer> *cameraVideoFrameAnalyzer; // ivar: _cameraVideoFrameAnalyzer
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoFrameAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain) HMIVideoFrameSampler *frameSampler; // ivar: _frameSampler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 motionDetections:(id)arg1 motionScore:(CGFloat)arg2 ;
-(id)initWithConfiguration:(id)arg0 ;
-(void)flush;
-(void)frameSampler:(id)arg0 didSampleFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif