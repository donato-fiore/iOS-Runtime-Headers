// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CAMNEBULAIRISBACKENDCONTROLLER_H
#define CAMNEBULAIRISBACKENDCONTROLLER_H

@class AVAssetExportSession, BKSApplicationStateMonitor, NSMutableDictionary, NSHashTable, NSMutableArray, NSString;
@protocol CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonIrisProtocol, CAMPersistenceResultDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CAMNebulaKeepAliveController.h"
#import "CAMPersistenceController.h"

@interface CAMNebulaIrisBackendController : NSObject <CAMStillImageCaptureRequestDelegate, CAMNebulaDaemonIrisProtocol, CAMPersistenceResultDelegate>

 {
    BOOL __IOWorkSuspended;
}


@property (nonatomic, getter=_coordinationQueue_isIOWorkSuspended, setter=_coordinationQueue_setIOWorkSuspended:) BOOL _IOWorkSuspended;
@property (retain, nonatomic, setter=_setActiveExportSession:) AVAssetExportSession *_activeExportSession; // ivar: __activeExportSession
@property (readonly, nonatomic) BKSApplicationStateMonitor *_applicationStateMonitor; // ivar: __applicationStateMonitor
@property (readonly, nonatomic) NSMutableDictionary *_bundleIdentifiersByVideoPersistenceUUID; // ivar: __bundleIdentifiersByVideoPersistenceUUID
@property (readonly, nonatomic) NSHashTable *_clientConnections; // ivar: __clientConnections
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_coordinationQueue; // ivar: __coordinationQueue
@property (nonatomic, getter=_coordinationQueue_isCrashRecoveryNeeded, setter=_coordinationQueue_setCrashRecoveryNeeded:) BOOL _crashRecoveryNeeded; // ivar: __crashRecoveryNeeded
@property (readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController; // ivar: __keepAliveController
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_linkWorkQueue; // ivar: __linkWorkQueue
@property (readonly, nonatomic) int _notifyRegisterTokenResumeIO; // ivar: __notifyRegisterTokenResumeIO
@property (readonly, nonatomic) int _notifyRegisterTokenSuspendIO; // ivar: __notifyRegisterTokenSuspendIO
@property (readonly, nonatomic) NSMutableArray *_pendingExportVideoJobs; // ivar: __pendingExportVideoJobs
@property (readonly, nonatomic) NSMutableDictionary *_pendingOrInFlightJobsByUniqueIdentifier; // ivar: __pendingOrInFlightJobsByUniqueIdentifier
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController; // ivar: __persistenceController
@property (nonatomic, getter=_coordinationQueue_shouldCheckMarkerFileForIOWorkSuspension, setter=_coordinationQueue_setShouldCheckMarkerFileForIOWorkSuspension:) BOOL _shouldCheckMarkerFileForIOWorkSuspension; // ivar: __shouldCheckMarkerFileForIOWorkSuspension
@property (readonly, nonatomic) NSMutableDictionary *_transactionForPersistenceUUID; // ivar: __transactionForPersistenceUUID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_extractIrisPropertiesFromAVAsset:(id)arg0 stillImageDisplayTime:(struct ? *)arg1 irisIdentifier:(*id)arg2 ;
-(BOOL)_removeItemAtURL:(id)arg0 ;
-(BOOL)_removeItemAtURL:(id)arg0 maxAttempts:(NSInteger)arg1 ;
-(NSUInteger)_coordinationQueue_failureCountForVideoURL:(id)arg0 ;
-(id)_uniqueIdentifierForJob:(id)arg0 ;
-(id)_videoJobFromURL:(id)arg0 ;
-(id)init;
-(id)initWithPersistenceController:(id)arg0 keepAliveController:(id)arg1 ;
-(void)_coordinationQueue_didCompleteExportJob:(id)arg0 ;
-(void)_coordinationQueue_didPermanentlyFinishJob:(id)arg0 ;
-(void)_coordinationQueue_enqueueAndTrackNewJob:(id)arg0 ;
-(void)_coordinationQueue_enqueueJobs:(id)arg0 ;
-(void)_coordinationQueue_setFailureCount:(NSUInteger)arg0 forVideoURL:(id)arg1 ;
-(void)_dispatchToCoordinationQueueAfterDelay:(CGFloat)arg0 withBlock:(id)arg1 ;
-(void)_dispatchToCoordinationQueueWithBlock:(id)arg0 ;
-(void)_dispatchToLinkWorkQueueAfterDelay:(CGFloat)arg0 withBlock:(id)arg1 ;
-(void)_dispatchToLinkWorkQueueWithBlock:(id)arg0 ;
-(void)_dispatchToMainQueueWithBlock:(id)arg0 ;
-(void)_dispatchToQueue:(id)arg0 afterDelay:(CGFloat)arg1 withBlock:(id)arg2 ;
-(void)_dispatchToQueue:(id)arg0 withBlock:(id)arg1 ;
-(void)_linkWorkQueue_linkAndPersistSelfContainedVideo:(id)arg0 ;
-(void)dealloc;
-(void)enqueueIrisVideoJobs:(id)arg0 ;
-(void)handleClientConnection:(id)arg0 ;
-(void)handleClientDisconnection:(id)arg0 ;
-(void)performIrisCrashRecovery;
-(void)performIrisCrashRecoveryForceFileSystemCheck:(BOOL)arg0 ;
-(void)persistenceController:(id)arg0 didGenerateVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)stillImageRequestDidCompleteVideoRemotePersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;


@end


#endif