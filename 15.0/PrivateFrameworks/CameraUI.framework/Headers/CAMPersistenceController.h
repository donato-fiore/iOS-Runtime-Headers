// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CAMPERSISTENCECONTROLLER_H
#define CAMPERSISTENCECONTROLLER_H

@class NSMapTable, NSMutableDictionary, NSMutableArray, NSString;
@protocol CAMStillImagePersistenceCoordinatorDelegate, CAMVideoPersistenceCoordinationDelegate, CAMCaptureService, OS_dispatch_queue, CAMPersistenceResultDelegate;

#import <Foundation/Foundation.h>

#import "CAMBurstController.h"
#import "CAMIrisVideoController.h"
#import "CAMThumbnailGenerator.h"
#import "CAMLocationController.h"
#import "CAMPowerController.h"
#import "CAMProtectionController.h"

@interface CAMPersistenceController : NSObject <CAMStillImagePersistenceCoordinatorDelegate, CAMVideoPersistenceCoordinationDelegate, CAMCaptureService>

 {
    ? _resultDelegateFlags;
}


@property (readonly, nonatomic) CAMBurstController *_burstController; // ivar: __burstController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_coordinationQueue; // ivar: __coordinationQueue
@property (readonly, nonatomic) NSMapTable *_coordinationQueueGroupsByIdentifier; // ivar: __coordinationQueueGroupsByIdentifier
@property (readonly, nonatomic) NSMutableDictionary *_coordinationQueue_stillImagePersistenceCoordinators; // ivar: __coordinationQueue_stillImagePersistenceCoordinators
@property (readonly, nonatomic) NSMutableDictionary *_coordinationQueue_videoPersistenceCoordinators; // ivar: __coordinationQueue_videoPersistenceCoordinators
@property (readonly, nonatomic) CAMIrisVideoController *_irisVideoController; // ivar: __irisVideoController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_localPersistenceQueue; // ivar: __localPersistenceQueue
@property (readonly, nonatomic) CAMThumbnailGenerator *_localPersistenceThumbnailGenerator; // ivar: __localPersistenceThumbnailGenerator
@property (readonly, nonatomic) CAMLocationController *_locationController; // ivar: __locationController
@property (readonly, nonatomic) NSMutableArray *_pendingLocalPersistenceWrappers; // ivar: _pendingLocalPersistenceWrappers
@property (readonly, nonatomic) NSMutableArray *_pendingRemotePersistenceWrappers; // ivar: _pendingRemotePersistenceWrappers
@property (readonly, nonatomic) CAMPowerController *_powerController; // ivar: __powerController
@property (readonly, nonatomic) CAMProtectionController *_protectionController; // ivar: __protectionController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remotePersistenceQueue; // ivar: __remotePersistenceQueue
@property (readonly, nonatomic) CAMThumbnailGenerator *_remotePersistenceThumbnailGenerator; // ivar: __remotePersistenceThumbnailGenerator
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_resultDelegateIsolationQueue; // ivar: __resultDelegateIsolationQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CAMPersistenceResultDelegate> *resultDelegate; // ivar: _resultDelegate
@property (readonly, nonatomic) BOOL resultDelegateRespondsToDidCompleteAllLocalPersistenceForRequest;
@property (readonly) Class superclass;


+(id)_pathForIncomingDirectory;
+(id)clientVideoMetadataForLocation:(id)arg0 withCreationDate:(id)arg1 ;
+(id)clientVideoMetadataForRequest:(id)arg0 withCreationDate:(id)arg1 isEV0ForHDR:(BOOL)arg2 livePhotoIdentifierOverride:(id)arg3 ;
+(id)delimiterForIncomingAssetFilenames;
+(id)spatialOverCapturePathForPath:(id)arg0 ;
+(id)uniqueIncomingPathForAssetWithUUID:(id)arg0 captureTime:(CGFloat)arg1 extension:(id)arg2 ;
+(id)uniquePathForAssetWithUUID:(id)arg0 captureTime:(CGFloat)arg1 extension:(id)arg2 usingIncomingDirectory:(BOOL)arg3 ;
+(id)videoMetadataDateFormatter;
-(BOOL)_writeDataToURL:(id)arg0 withData:(id)arg1 duringBurst:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_writeJPEGToURL:(id)arg0 withData:(id)arg1 thumbnail:(id)arg2 properties:(id)arg3 duringBurst:(BOOL)arg4 error:(*id)arg5 ;
-(id)_adjustmentsDataForCinematicVideo;
-(id)_adjustmentsDataForRequest:(id)arg0 captureDimensions:(struct ? )arg1 portraitMetadata:(id)arg2 ;
-(id)_coordinationGroupForIdentifier:(id)arg0 ;
-(id)_createMetadataForPhysicallyOrientedImage:(id)arg0 ;
-(id)_ensureCoordinationGroupForIdentifier:(id)arg0 ;
-(id)_extensionForUniformType:(id)arg0 ;
-(id)_jobDictionaryForStillImageLocalResult:(id)arg0 filteredLocalResult:(id)arg1 spatialOverCaptureLocalResult:(id)arg2 fromRequest:(id)arg3 ;
-(id)_jobDictionaryForTimelapsePlaceholderResult:(id)arg0 ;
-(id)_jobDictionaryForVideoLocalResult:(id)arg0 spatialOverCaptureLocalResult:(id)arg1 fromRequest:(id)arg2 ;
-(id)_persistStillImageCaptureSurfaceResult:(id)arg0 withRequest:(id)arg1 ;
-(id)_persistVideoCaptureResult:(id)arg0 withRequest:(id)arg1 ;
-(id)_physicallyRotatedJPEGDataFromCapturePhoto:(id)arg0 ;
-(id)_spatialOverCaptureIdentifierForVideoURL:(id)arg0 ;
-(id)_stillPersistenceUUIDForRequest:(id)arg0 withVideoResult:(id)arg1 ;
-(id)_uniformTypeForStillImageRequest:(id)arg0 result:(id)arg1 ;
-(id)_videoPersistenceUUIDForRequest:(id)arg0 withResult:(id)arg1 ;
-(id)_xmpEncodedDiagnosticDataFromDictionary:(id)arg0 ;
-(id)init;
-(id)initWithLocationController:(id)arg0 burstController:(id)arg1 protectionController:(id)arg2 powerController:(id)arg3 irisVideoController:(id)arg4 ;
-(struct CGAffineTransform )_affineTransformForRotationDegrees:(int)arg0 mirrored:(BOOL)arg1 ;
-(struct __CFWriteStream *)_createOpenWriteStreamWithURL:(id)arg0 forBurst:(BOOL)arg1 ;
-(unsigned int)_stillImageLocalPowerAssertionReasonForCoordinationInfo:(id)arg0 ;
-(unsigned int)_videoLocalPowerAssertionReasonForCoordinationInfo:(id)arg0 ;
-(unsigned int)_videoRemotePowerAssertionReasonForCoordinationInfo:(id)arg0 ;
-(void)_coordinateRemotePersistenceForStillImageLocalResult:(id)arg0 coordinationInfo:(id)arg1 request:(id)arg2 ;
-(void)_coordinateRemotePersistenceForVideoLocalResult:(id)arg0 coordinationInfo:(id)arg1 request:(id)arg2 ;
-(void)_dispatchRemotePersistenceForLocalPersistenceResult:(id)arg0 filteredLocalResult:(id)arg1 spatialOverCaptureLocalResult:(id)arg2 request:(id)arg3 powerAssertionReason:(unsigned int)arg4 loggingIdentifier:(id)arg5 ;
-(void)_dispatchRemotePersistenceForLocalVideoPersistenceResult:(id)arg0 spatialOverCaptureLocalVideoResult:(id)arg1 request:(id)arg2 powerAssertionReason:(unsigned int)arg3 loggingIdentifier:(id)arg4 ;
// -(void)_handleCompletedStillImageJobForRequest:(id)arg0 withReply:(id)arg1 fromBatchOfSize:(NSUInteger)arg2 completionHandler:(id)arg3 error:(unk)arg4  ;
// -(void)_handleCompletedVideoJobForRequest:(id)arg0 withReply:(id)arg1 completionHandler:(id)arg2 error:(unk)arg3  ;
-(void)_handleStillImagePersistenceForRequest:(id)arg0 withResult:(id)arg1 ;
-(void)_handleVideoPersistenceForRequest:(id)arg0 withResult:(id)arg1 ;
-(void)_locallyPersistStillImageResult:(id)arg0 forRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_locallyPersistVideoCaptureResult:(id)arg0 forRequest:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_mainThread_handleApplicationDidEnterBackground:(id)arg0 ;
-(void)_notifyDelegateOfCompletedStillImageLocalPersistenceForRequest:(id)arg0 withResult:(id)arg1 ;
-(void)_notifyDelegateOfCompletedStillImageRemotePersistenceForRequest:(id)arg0 withReply:(id)arg1 fromBatchOfSize:(NSUInteger)arg2 error:(id)arg3 ;
-(void)_notifyDelegateOfCompletedVideoLocalPersistenceForRequest:(id)arg0 withResult:(id)arg1 ;
-(void)_notifyDelegateOfCompletedVideoRemotePersistenceForRequest:(id)arg0 withReply:(id)arg1 error:(id)arg2 ;
-(void)_remotelyPersistStillImageJob:(id)arg0 forRequest:(id)arg1 loggingIdentifier:(id)arg2 completionHandler:(id)arg3 ;
// -(void)_remotelyPersistVideoJob:(id)arg0 forRequest:(id)arg1 loggingIdentifier:(id)arg2 withSendHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)_removeCoordinationGroupForIdentifier:(id)arg0 ;
-(void)dealloc;
-(void)emptyLocalPersistenceStorageWithTimeout:(CGFloat)arg0 completionHandler:(id)arg1 ;
-(void)panoramaRequest:(id)arg0 didCompleteCaptureWithResult:(id)arg1 ;
-(void)performDeferredRemotePersistenceWithCompletionHandler:(id)arg0 ;
-(void)persistBurstWithIdentifier:(id)arg0 result:(id)arg1 completionHandler:(id)arg2 ;
-(void)persistPlaceholderTimelapseVideoWithResult:(id)arg0 completionHandler:(id)arg1 ;
-(void)stillImagePersistenceCoordinator:(id)arg0 requestsRemotePersistenceForLocalPersistenceResult:(id)arg1 filteredLocalResult:(id)arg2 spatialOverCaptureLocalResult:(id)arg3 request:(id)arg4 powerAssertionReason:(unsigned int)arg5 ;
-(void)stillImagePersistenceCoordinator:(id)arg0 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg1 request:(id)arg2 ;
-(void)stillImageRequest:(id)arg0 didCompleteStillImageCaptureWithResult:(id)arg1 ;
-(void)stillImageRequest:(id)arg0 didCompleteVideoCaptureWithResult:(id)arg1 ;
-(void)stillImageRequestDidCompleteCapture:(id)arg0 error:(id)arg1 ;
-(void)videoPersistenceCoordinator:(id)arg0 requestsRemotePersistenceForLocalPersistenceResult:(id)arg1 spatialOverCaptureResult:(id)arg2 captureRequest:(id)arg3 powerAssertionReason:(unsigned int)arg4 ;
-(void)videoPersistenceCoordinator:(id)arg0 requestsTimeoutScheduledForDeferredRemotePersistenceForCoordinationInfo:(id)arg1 request:(id)arg2 ;
-(void)videoRequest:(id)arg0 didCompleteCaptureWithResult:(id)arg1 ;


@end


#endif