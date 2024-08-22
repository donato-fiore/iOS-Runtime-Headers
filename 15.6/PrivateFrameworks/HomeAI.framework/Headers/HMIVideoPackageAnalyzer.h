// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMIVIDEOPACKAGEANALYZER_H
#define HMIVIDEOPACKAGEANALYZER_H

@class NSString, NSNumber;
@protocol HMIVideoPackageAnalyzerDelegate, HMIVideoFrameSamplerDelegate, HMFLogging;


#import "HMIVideoAnalyzerProcessingNode.h"
#import "HMIBackgroundEstimator.h"
#import "HMICameraVideoFrameAnalyzerSignificantActivity.h"
#import "HMIVideoFrame.h"
#import "HMIHTMLReport.h"
#import "HMIVideoFrameIntervalSampler.h"

@interface HMIVideoPackageAnalyzer : HMIVideoAnalyzerProcessingNode <HMIVideoPackageAnalyzerDelegate, HMIVideoFrameSamplerDelegate, HMFLogging>



@property (readonly) HMIBackgroundEstimator *backgroundEstimator; // ivar: _backgroundEstimator
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoPackageAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) ? detectionAnalysisInterval; // ivar: _detectionAnalysisInterval
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *highConfidence; // ivar: _highConfidence
@property ? lastDetectionAnalysisTimeStamp; // ivar: _lastDetectionAnalysisTimeStamp
@property (readonly) NSNumber *mediumConfidence; // ivar: _mediumConfidence
@property int numberOfDetectedPackagesInSession; // ivar: _numberOfDetectedPackagesInSession
@property (readonly) NSInteger packageClassifierMode; // ivar: _packageClassifierMode
@property (readonly) HMICameraVideoFrameAnalyzerSignificantActivity *packageDetector; // ivar: _packageDetector
@property (retain) HMIVideoFrame *referenceFrame; // ivar: _referenceFrame
@property (readonly) HMIHTMLReport *report; // ivar: _report
@property (readonly) HMIVideoFrameIntervalSampler *sampler; // ivar: _sampler
@property (readonly) Class superclass;


+(id)eventConfidenceThresholdHigh;
+(id)eventConfidenceThresholdMedium;
+(id)logCategory;
-(id)eventsFromRegionOfInterest:(struct CGRect )arg0 frame:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGRect )regionOfInterestFromEvents:(id)arg0 frameSize:(struct CGSize )arg1 ;
-(void)frameSampler:(id)arg0 didSampleFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)handleMotionDetection:(id)arg0 inFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;


@end


#endif