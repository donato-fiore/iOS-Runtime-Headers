// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMICAMERAVIDEOFRAMEANALYZERSIGNIFICANTACTIVITY_H
#define HMICAMERAVIDEOFRAMEANALYZERSIGNIFICANTACTIVITY_H

@class HMFObject, NSString, NSDictionary, NSOperationQueue, NSMapTable, HMFOSTransaction;
@protocol HMICameraVideoFrameAnalyzer, HMFLogging;


#import "HMIVideoAnalyzerConfiguration.h"
#import "HMIFaceClassifierVIP.h"
#import "HMISessionEntityManager.h"
#import "HMISignificantActivityFcosDetector.h"
#import "HMITorsoClassifier.h"

@interface HMICameraVideoFrameAnalyzerSignificantActivity : HMFObject <HMICameraVideoFrameAnalyzer, HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly) HMIVideoAnalyzerConfiguration *analyzerConfiguration; // ivar: _analyzerConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMIFaceClassifierVIP *faceClassifier; // ivar: _faceClassifier
@property (readonly) NSUInteger hash;
@property (readonly) NSDictionary *highConfidenceThresholds; // ivar: _highConfidenceThresholds
@property (readonly) CGSize inputDimensions;
@property (readonly) NSDictionary *mediumConfidenceThresholds; // ivar: _mediumConfidenceThresholds
@property (readonly) NSOperationQueue *regionOfInterestOperationQueue; // ivar: _regionOfInterestOperationQueue
@property (readonly) NSMapTable *regionOfInterestOperations; // ivar: _regionOfInterestOperations
@property (readonly) HMISessionEntityManager *sessionEntityManager; // ivar: _sessionEntityManager
@property (readonly) HMISignificantActivityFcosDetector *significantActivityFcosDetector; // ivar: _significantActivityFcosDetector
@property (readonly) Class superclass;
@property (readonly) HMITorsoClassifier *torsoClassifier; // ivar: _torsoClassifier
@property (retain, nonatomic) HMFOSTransaction *transaction; // ivar: _transaction


+(id)classHierarchyMap;
+(id)desLabelIndexForEventClass:(Class)arg0 ;
+(id)labelIndexForEventClass:(Class)arg0 ;
+(id)logCategory;
-(NSInteger)_rankForEventClass:(Class)arg0 ;
-(id)_analyzerEventsFromObjectDetections:(id)arg0 ;
-(id)_createStationaryEventFromEvent:(id)arg0 ;
-(id)_eventsWithClassificationsFromEvents:(id)arg0 videoFrame:(id)arg1 regionOfInterest:(struct CGRect )arg2 homeUUID:(id)arg3 enableTorsoRecognition:(BOOL)arg4 ;
-(id)_eventsWithSessionEntitiesFromEvents:(id)arg0 videoFrame:(id)arg1 homeUUID:(id)arg2 ;
-(id)_filterEvents:(id)arg0 targetEventClasses:(id)arg1 ;
-(id)_predictEventsFromCropPixelBuffer:(struct __CVBuffer *)arg0 cropRect:(struct CGRect )arg1 imageSize:(struct CGSize )arg2 error:(*id)arg3 ;
-(id)_simulatedEventForEventClass:(Class)arg0 ;
-(id)_targetEventsSetFromTargetEventTypes:(NSInteger)arg0 enableFaceClassification:(BOOL)arg1 enableTorsoRecognition:(BOOL)arg2 ;
-(id)analyze:(id)arg0 targetEventTypes:(NSInteger)arg1 enableFaceClassification:(BOOL)arg2 homeUUID:(id)arg3 error:(*id)arg4 ;
-(id)analyzePixelBuffer:(struct __CVBuffer *)arg0 regionOfInterest:(struct CGRect )arg1 error:(*id)arg2 ;
-(id)eventsWithFaceEventsFromTorsoEventsFromEvents:(id)arg0 homeUUID:(id)arg1 ;
-(id)flushAndGetAnalysisStateUpdateForHome:(id)arg0 enableFaceClassification:(BOOL)arg1 ;
-(id)initWithMediumConfidenceThresholds:(id)arg0 highConfidenceThresholds:(id)arg1 analyzerConfiguration:(id)arg2 error:(*id)arg3 ;
-(void)_ensureSessionEntityManagerWithFrameDimensions:(struct CGSize )arg0 ;
-(void)handleMotionDetection:(id)arg0 inFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)preAnalyze:(id)arg0 ;
-(void)saveDESRecordVideoFrame:(id)arg0 analyzerEvents:(id)arg1 regionOfInterest:(struct CGRect )arg2 ;


@end


#endif