// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AROBJECTDETECTIONTECHNIQUE_H
#define AROBJECTDETECTIONTECHNIQUE_H

@class NSArray, NSDictionary;
@protocol OS_dispatch_semaphore, OS_dispatch_queue;


#import "ARImageBasedTechnique.h"
#import "ARObjectDetectionResultData.h"
#import "ARODTHandleManager.h"
#import "ARWorldTrackingPoseData.h"

@interface ARObjectDetectionTechnique : ARImageBasedTechnique {
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_queue> *_loadObjectsQueue;
    ARObjectDetectionResultData *_latestResultData;
    ARODTHandleManager *_odtHandleManager;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    BOOL _deterministicMode;
}


@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose; // ivar: _currentWorldTrackingPose
@property (readonly, nonatomic) NSArray *detectionObjects; // ivar: _detectionObjects
@property BOOL finishedLoadingObjects; // ivar: _finishedLoadingObjects
@property (readonly) NSDictionary *referenceObjecteMap; // ivar: _referenceObjecteMap


+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)requiredTimeInterval;
-(id)initWithDetectionObjects:(id)arg0 ;
-(id)processData:(id)arg0 ;
-(id)processResultData:(id)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;
-(void)_enqueueObjectForDetectionNonBlocking:(id)arg0 ;
-(void)_loadReferenceObjects;
-(void)prepare:(BOOL)arg0 ;


@end


#endif