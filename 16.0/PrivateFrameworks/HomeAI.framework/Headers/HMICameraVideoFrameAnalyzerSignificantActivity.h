// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMICAMERAVIDEOFRAMEANALYZERSIGNIFICANTACTIVITY_H
#define HMICAMERAVIDEOFRAMEANALYZERSIGNIFICANTACTIVITY_H

@class HMFObject, NSMutableArray, NSString, NSDictionary, HMFOSTransaction;
@protocol HMICameraVideoFrameAnalyzer, HMFLogging;


#import "HMIVideoAnalyzerConfiguration.h"
#import "HMIFaceClassifierVIP.h"
#import "HMISessionEntityManager.h"
#import "HMISignificantActivityFcosDetector.h"
#import "HMITorsoClassifier.h"

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMICameraVideoFrameAnalyzer, HMFLogging>



@property (readonly) HMIVideoAnalyzerConfiguration *analyzerConfiguration; // ivar: _analyzerConfiguration
@property (readonly) NSMutableArray *backgroundEvents; // ivar: _backgroundEvents
@property ? backgroundTimeStamp; // ivar: _backgroundTimeStamp
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceClassifierVIP *faceClassifier; // ivar: _faceClassifier
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *highConfidenceThresholds; // ivar: _highConfidenceThresholds
@property (readonly) CGSize inputDimensions;
@property (readonly) NSDictionary *mediumConfidenceThresholds; // ivar: _mediumConfidenceThresholds
@property (readonly) HMISessionEntityManager *sessionEntityManager; // ivar: _sessionEntityManager
@property (readonly) HMISignificantActivityFcosDetector *significantActivityFcosDetector; // ivar: _significantActivityFcosDetector
@property (readonly) Class superclass;
@property (readonly) HMITorsoClassifier *torsoClassifier; // ivar: _torsoClassifier
@property (retain, nonatomic) HMFOSTransaction *transaction; // ivar: _transaction


+(id)classHierarchyMap;
+(id)desLabelIndexForEventClass:(Class)arg0 ;
+(id)labelIndexForEventClass:(Class)arg0 ;
+(id)logCategory;
-(id)_analyzerEventsFromObjectDetections:(id)arg0 ;
-(id)_eventsWithClassificationsFromEvents:(id)arg0 videoFrame:(id)arg1 regionOfInterest:(struct CGRect )arg2 homeUUID:(id)arg3 ;
-(id)_eventsWithSessionEntitiesFromEvents:(id)arg0 regionOfInterest:(struct CGRect )arg1 timeStamp:(struct ? )arg2 homeUUID:(id)arg3 ;
-(id)_filterPackageEvents:(id)arg0 backgroundEvents:(id)arg1 ;
-(id)_predictEventsFromCropPixelBuffer:(struct __CVBuffer *)arg0 cropRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 error:(*id)arg3 ;
-(id)_simulatedEventForEventClass:(Class)arg0 ;
-(id)_targetEventsSetFromEventTriggers:(NSInteger)arg0 enableFaceClassification:(BOOL)arg1 enableTorsoRecognition:(BOOL)arg2 ;
-(id)analyzeBackgroundFrame:(id)arg0 packageEvents:(id)arg1 newBackgroundEvents:(id)arg2 regionOfInterest:(struct CGRect )arg3 ;
-(id)analyzeFrame:(id)arg0 regionOfInterest:(struct CGRect )arg1 ;
-(id)analyzePixelBuffer:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect )arg1 error:(*id)arg2 ;
-(id)eventsWithFaceEventsFromTorsoEventsFromEvents:(id)arg0 homeUUID:(id)arg1 ;
-(id)flushAndGetAnalysisStateUpdateForHome:(id)arg0 enableFaceClassification:(BOOL)arg1 ;
-(id)getAnalyzerEvents:(id)arg0 eventTriggers:(NSInteger)arg1 enableFaceClassification:(BOOL)arg2 enableTorsoRecognition:(BOOL)arg3 ;
-(id)getPackageEvents:(id)arg0 foregroundEvents:(id)arg1 newBackgroundEvents:(id)arg2 backgroundTimeStamp:(struct ? )arg3 ;
-(id)initWithMediumConfidenceThresholds:(id)arg0 highConfidenceThresholds:(id)arg1 analyzerConfiguration:(id)arg2 error:(*id)arg3 ;
-(id)recognizeEvents:(id)arg0 frame:(id)arg1 regionOfInterest:(struct CGRect )arg2 homeUUID:(id)arg3 ;
-(struct CGRect )regionOfInterestForMotionDetections:(id)arg0 foregroundEvents:(id)arg1 frameSize:(struct CGSize )arg2 ;


@end


#endif