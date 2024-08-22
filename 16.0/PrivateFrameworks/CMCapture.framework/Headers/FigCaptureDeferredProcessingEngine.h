// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FIGCAPTUREDEFERREDPROCESSINGENGINE_H
#define FIGCAPTUREDEFERREDPROCESSINGENGINE_H

@class NSString, NSSet, NSDictionary;
@protocol BWGraphStatusDelegate, OS_dispatch_queue, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "BWDeferredPipelineParameters.h"
#import "BWStillImageSettings.h"
#import "BWGraph.h"
#import "BWDeferredProcessingSourceNode.h"
#import "FigCaptureDeferredProcessingJob.h"

@interface FigCaptureDeferredProcessingEngine : NSObject <BWGraphStatusDelegate>

 {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_os_transaction> *_graphTransaction;
    NSString *_currentPortType;
    BWDeferredPipelineParameters *_currentPipelineParameters;
    BOOL _currentDemosaicedRawEnabled;
    BWStillImageSettings *_currentSettings;
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
-(id)init;
-(void)dealloc;
-(void)executeJob:(id)arg0 ;
-(void)graph:(id)arg0 didFinishStartingWithError:(int)arg1 ;
-(void)graphDidPrepareNodes:(id)arg0 ;
-(void)releaseResources;


@end


#endif