// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARIMAGEDETECTIONTECHNIQUE_H
#define ARIMAGEDETECTIONTECHNIQUE_H

@class NSArray, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;


#import "ARImageBasedTechnique.h"
#import "ARImageDetectionResultData.h"
#import "ARWorldTrackingPoseData.h"
#import "ARODTHandleManager.h"

@interface ARImageDetectionTechnique : ARImageBasedTechnique {
    NSArray *_referenceImages;
    NSObject<OS_dispatch_queue> *_processDataQueue;
    NSObject<OS_dispatch_semaphore> *_loadingSemaphore;
    NSObject<OS_dispatch_semaphore> *_dataSemaphore;
    NSObject<OS_dispatch_semaphore> *_detectionSemaphore;
    ARImageDetectionResultData *_referenceImageData;
    BOOL _finishedLoadingImages;
    BOOL _tracking;
    BOOL _deterministicMode;
    NSInteger _maximumNumberOfTrackedImages;
    BOOL _continuousDetection;
    shared_ptr<arkit::KeyMapBuffer<const void *, std::vector<unsigned char>>> _poseBuffer;
    BOOL _needsWorldTrackingPoseData;
}


@property (retain) ARWorldTrackingPoseData *currentWorldTrackingPose; // ivar: _currentWorldTrackingPose
@property (nonatomic) BOOL enableAutomaticImageScaleEstimation; // ivar: _enableAutomaticImageScaleEstimation
@property (readonly, nonatomic) BOOL finishedLoadingImages;
@property (readonly) ARODTHandleManager *odtTHandleManger; // ivar: _odtTHandleManger
@property (readonly) NSDictionary *referenceImageMap; // ivar: _referenceImageMap


+(BOOL)_redetectionRequiredForContext:(id)arg0 ;
+(BOOL)producesResultDataForAnchorOfClass:(Class)arg0 ;
-(BOOL)deterministicMode;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)syncWithProcessedImage;
-(CGFloat)requiredTimeInterval;
-(NSInteger)captureBehavior;
-(NSUInteger)requiredSensorDataTypes;
-(id)_addReferenceImagesAppleCV3D;
-(id)_trackImagesWithImageData:(id)arg0 timeBudget:(CGFloat)arg1 ;
-(id)initWithReferenceImages:(id)arg0 ;
-(id)initWithReferenceImages:(id)arg0 maximumNumberOfTrackedImages:(NSInteger)arg1 ;
-(id)initWithReferenceImages:(id)arg0 maximumNumberOfTrackedImages:(NSInteger)arg1 continuousDetection:(BOOL)arg2 processingQueue:(id)arg3 ;
-(id)initWithReferenceImages:(id)arg0 maximumNumberOfTrackedImages:(NSInteger)arg1 processingQueue:(id)arg2 ;
-(id)predictAtTimeStamp:(CGFloat)arg0 timeBudget:(CGFloat)arg1 predictedWorldTrackingPose:(id)arg2 ;
-(id)processData:(id)arg0 ;
-(id)processResultData:(id)arg0 timestamp:(CGFloat)arg1 context:(id)arg2 ;
-(void)_enqueueImageForTrackingNonBlocking:(id)arg0 ;
-(void)_enqueueImageForTrackingSynced:(id)arg0 ;
-(void)_loadReferenceImages;
-(void)_loadReferenceImagesInBackground;
-(void)prepare:(BOOL)arg0 ;
-(void)setPowerUsage:(NSUInteger)arg0 ;


@end


#endif