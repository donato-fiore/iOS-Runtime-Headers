// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMVISIONPIPELINECONTEXT_H
#define AXMVISIONPIPELINECONTEXT_H

@class NSDictionary, NSMutableArray, AXBookendMetric, VNSceneObservation, NSMutableOrderedSet, NSNumber, NSArray, NSError, NSMutableSet, AXMetricSession, VNImageRequestHandler;
@protocol NSSecureCoding, OS_dispatch_queue, NSCopying, AXMetricContainer;

#import <Foundation/Foundation.h>

#import "AXMPipelineContextInput.h"
#import "AXMVisionAnalysisOptions.h"
#import "AXMVisionResult.h"
#import "AXMSequenceRequestManager.h"

@interface AXMVisionPipelineContext : NSObject <NSSecureCoding>

 {
    AXMPipelineContextInput *_sourceInput;
    NSDictionary *_sourceParameters;
    BOOL _sourceProvidesOwnResults;
    NSMutableArray *_resultHandlers;
    AXBookendMetric *_piplelineMetric;
    VNSceneObservation *_sceneObservation;
    NSObject<OS_dispatch_queue> *_sceneObservationQueue;
    NSMutableArray *_detectedSceneClassifications;
    NSMutableOrderedSet *_auxiliaryDetectors;
}


@property (retain, nonatomic) AXMVisionAnalysisOptions *analysisOptions; // ivar: _analysisOptions
@property (retain, nonatomic) NSNumber *appliedImageOrientation; // ivar: _appliedImageOrientation
@property (retain, nonatomic) NSObject<NSCopying> *cacheKey; // ivar: _cacheKey
@property (retain, nonatomic) NSArray *effectiveTextDetectionLocales; // ivar: _effectiveTextDetectionLocales
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableSet *evaluatedFeatureTypes; // ivar: _evaluatedFeatureTypes
@property (nonatomic) BOOL evaluationExclusivelyUsesVisionFramework; // ivar: _evaluationExclusivelyUsesVisionFramework
@property (retain, nonatomic) NSMutableArray *features; // ivar: _features
@property (nonatomic) NSInteger imageRegistrationState; // ivar: _imageRegistrationState
@property (retain, nonatomic) AXMetricSession *metricSession; // ivar: _metricSession
@property (readonly, nonatomic) NSObject<AXMetricContainer> *pipelineMetric;
@property (retain, nonatomic) AXMVisionResult *result; // ivar: _result
@property (readonly, nonatomic) NSArray *resultHandlers;
@property (readonly, nonatomic) NSArray *sceneLabelsForOCRDocumentTypeDetection;
@property (nonatomic) NSUInteger sequenceID; // ivar: _sequenceID
@property (retain, nonatomic) AXMSequenceRequestManager *sequenceRequestManager; // ivar: _sequenceRequestManager
@property (nonatomic) BOOL shouldCallCompletionHandlersForEmptyResultSet; // ivar: _shouldCallCompletionHandlersForEmptyResultSet
@property (nonatomic) BOOL shouldCallCompletionHandlersForEngineBusyError; // ivar: _shouldCallCompletionHandlersForEngineBusyError
@property (nonatomic) BOOL shouldProcessRemotely; // ivar: _shouldProcessRemotely
@property (readonly, nonatomic) CGSize size;
@property (readonly, nonatomic) AXMPipelineContextInput *sourceInput;
@property (readonly, nonatomic) BOOL sourceProvidesResults;
@property (retain, nonatomic) NSObject<NSSecureCoding> *userContext; // ivar: _userContext
@property (retain, nonatomic) VNImageRequestHandler *visionImageRequestHandler; // ivar: _visionImageRequestHandler
@property (readonly, nonatomic) BOOL visionImageRequestHandlerIsLoaded;


+(BOOL)supportsSecureCoding;
+(id)contextWithSourceParameters:(id)arg0 options:(id)arg1 ;
-(BOOL)_addSignificantEventFeatureGateIfNeededToFeature:(id)arg0 category:(id)arg1 minimumConfidence:(CGFloat)arg2 ;
-(id)_makeRequestHandlerForInput:(id)arg0 options:(id)arg1 ;
-(id)auxiliaryDetectors;
-(id)description;
-(id)generateFileNameForImageWithPrefix:(id)arg0 extension:(id)arg1 ;
-(id)generateImageRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSourceParameters:(id)arg0 options:(id)arg1 ;
-(id)sceneObservation;
-(id)visionImageRequestHandlerWithOptions:(id)arg0 ;
-(void)_commonInitWithDiagnosticsEnabled:(BOOL)arg0 ;
-(void)addAuxiliaryDetector:(id)arg0 ;
-(void)addEvaluatedFeatureType:(NSUInteger)arg0 ;
-(void)addResultHandler:(id)arg0 ;
-(void)addResultHandlers:(id)arg0 ;
-(void)addSceneLabelForOCRDocumentTypeDetection:(id)arg0 ;
-(void)appendFeature:(id)arg0 ;
-(void)createSceneObservationIfNilWithBlock:(id)arg0 ;
-(void)didFinishProcessingContext;
-(void)encodeWithCoder:(id)arg0 ;
-(void)errorOccurred:(id)arg0 ;
-(void)produceImage:(id)arg0 ;
-(void)removeAllAuxiliaryDetectors;
-(void)setEquivalenceToken:(id)arg0 ;
-(void)willBeginProcessingContext;


@end


#endif