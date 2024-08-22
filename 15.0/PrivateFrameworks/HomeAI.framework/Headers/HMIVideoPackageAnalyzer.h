// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIVIDEOPACKAGEANALYZER_H
#define HMIVIDEOPACKAGEANALYZER_H

@class NSArray, NSString, NSNumber, NSMutableArray, CIFilter;
@protocol HMIVideoPackageAnalyzerDelegate, HMIVideoFrameSamplerDelegate, HMFLogging, HMIAggregateImage;


#import "HMIVideoAnalyzerProcessingNode.h"
#import "HMIPackageCandidateDetectorConfiguration.h"
#import "HMIPackageCandidateDetector.h"
#import "HMIPackageClassifier.h"
#import "HMICameraVideoFrameAnalyzerSignificantActivity.h"
#import "HMIVideoFrameIntervalSampler.h"

@interface HMIVideoPackageAnalyzer : HMIVideoAnalyzerProcessingNode <HMIVideoPackageAnalyzerDelegate, HMIVideoFrameSamplerDelegate, HMFLogging>



@property (readonly) NSObject<HMIAggregateImage> *aggregateImage; // ivar: _aggregateImage
@property ? aggregateImageTimeStamp; // ivar: _aggregateImageTimeStamp
@property (retain) HMIPackageCandidateDetectorConfiguration *candidateConfig; // ivar: _candidateConfig
@property (retain) HMIPackageCandidateDetector *candidateDetector; // ivar: _candidateDetector
@property (retain) NSArray *currentBoxes; // ivar: _currentBoxes
@property int currentFrameIndex; // ivar: _currentFrameIndex
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMIVideoPackageAnalyzerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) ? detectionAnalysisInterval; // ivar: _detectionAnalysisInterval
@property (readonly) int detectionFps; // ivar: _detectionFps
@property (readonly) NSUInteger hash;
@property (readonly) NSNumber *highConfidence; // ivar: _highConfidence
@property ? lastDetectionAnalysisTimeStamp; // ivar: _lastDetectionAnalysisTimeStamp
@property ? lastSeenGoodReferenceImageTimeStamp; // ivar: _lastSeenGoodReferenceImageTimeStamp
@property (readonly) NSNumber *lowConfidence; // ivar: _lowConfidence
@property (readonly) NSNumber *mediumConfidence; // ivar: _mediumConfidence
@property (readonly) NSMutableArray *motionDetections; // ivar: _motionDetections
@property (readonly) NSMutableArray *motionTimeStamps; // ivar: _motionTimeStamps
@property (readonly) ? motionValidInterval; // ivar: _motionValidInterval
@property int numberOfDetectedPackagesInSession; // ivar: _numberOfDetectedPackagesInSession
@property (readonly) HMIPackageClassifier *packageClassifier; // ivar: _packageClassifier
@property (readonly) NSInteger packageClassifierMode; // ivar: _packageClassifierMode
@property (readonly) HMICameraVideoFrameAnalyzerSignificantActivity *packageDetector; // ivar: _packageDetector
@property (readonly) CGFloat prerollLengthSeconds; // ivar: _prerollLengthSeconds
@property (readonly) HMIVideoFrameIntervalSampler *sampler; // ivar: _sampler
@property (retain) CIFilter *scaleFilter; // ivar: _scaleFilter
@property (readonly) Class superclass;


+(id)eventConfidenceThresholdHigh;
+(id)eventConfidenceThresholdLow;
+(id)eventConfidenceThresholdMedium;
+(id)logCategory;
-(id)classifyPackagesFromCandidates:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)detectPackagesFromCandidates:(id)arg0 pixelBuffer:(struct __CVBuffer *)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithDetectionFps:(float)arg0 prerollLengthSeconds:(CGFloat)arg1 configuration:(id)arg2 ;
-(id)updatedBoxCandidatesWithRawBoxes:(id)arg0 timeStamp:(struct ? )arg1 ;
-(void)expireMotionDetectionsAtTimeStamp:(struct ? )arg0 ;
-(void)frameSampler:(id)arg0 didSampleFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)handleMotionDetection:(id)arg0 inFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)handleSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)resetReferenceImage;


@end


#endif