// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FIGCAPTUREDEFERREDPROCESSINGENGINE_H
#define FIGCAPTUREDEFERREDPROCESSINGENGINE_H

@class NSString, NSSet, NSDictionary;
@protocol BWGraphStatusDelegate, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "BWGraph.h"
#import "BWDeferredProcessingSourceNode.h"
#import "FigCaptureDeferredProcessingJob.h"

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_transaction> *_graphTransaction;
    NSString *_currentPortType;
    BOOL _currentIntelligentDistortionCorrectionEnabled;
    BOOL _currentGeomtetricDistortionCorrectionEnabled;
    BOOL _currentDemosaicedRawEnabled;
    int _currentDeepZoomVersion;
    BWGraph *_graph;
    BOOL _graphRunning;
    BWDeferredProcessingSourceNode *_sourceNode;
    FigCaptureDeferredProcessingJob *_job;
    BOOL _interactiveQoS;
    NSInteger _graphPrepareDurationNS;
    NSSet *_allSensorIDStrings;
    NSDictionary *_defaultSensorIDsByPortType;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedProcessingEngine;
+(void)initialize;
-(BOOL)_reuseCurrentGraphForJob:(id)arg0 ;
-(id)init;
-(void)_cleanupFromJob;
-(void)_createGraphAndRunJobWhenStarted;
-(void)_handleJobCompletion:(int)arg0 ;
-(void)_handleProcessedStillImage:(struct opaqueCMSampleBuffer *)arg0 error:(int)arg1 settings:(id)arg2 ;
-(void)_releaseGraph;
-(void)_reportCoreAnalyticsDataWithError:(int)arg0 container:(id)arg1 ;
-(void)_runJob;
-(void)dealloc;
-(void)executeJob:(id)arg0 ;
-(void)graph:(id)arg0 didFinishStartingWithError:(int)arg1 ;
-(void)graphDidPrepareNodes:(id)arg0 ;
-(void)releaseResources;


@end


#endif