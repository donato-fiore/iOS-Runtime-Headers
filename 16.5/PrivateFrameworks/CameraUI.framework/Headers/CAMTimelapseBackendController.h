// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMTIMELAPSEBACKENDCONTROLLER_H
#define CAMTIMELAPSEBACKENDCONTROLLER_H

@class BKSApplicationStateMonitor, NSMutableArray, NSMutableDictionary, NSString;
@protocol CAMVideoCaptureRequestDelegate, CAMNebulaDaemonTimelapseProtocol, CAMPersistenceResultDelegate, CAMTimelapseMovieWriterProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CAMTimelapseState.h"
#import "CAMNebulaKeepAliveController.h"
#import "CAMPersistenceController.h"

@interface CAMTimelapseBackendController : NSObject <CAMVideoCaptureRequestDelegate, CAMNebulaDaemonTimelapseProtocol, CAMPersistenceResultDelegate>



@property (readonly, nonatomic) BKSApplicationStateMonitor *_applicationStateMonitor; // ivar: __applicationStateMonitor
@property (nonatomic, getter=_isCapturing, setter=_setCapturing:) BOOL _capturing; // ivar: __capturing
@property (retain, nonatomic, setter=_setCurrentState:) CAMTimelapseState *_currentState; // ivar: __currentState
@property (readonly, nonatomic) CAMNebulaKeepAliveController *_keepAliveController; // ivar: __keepAliveController
@property (readonly, nonatomic) NSObject<CAMTimelapseMovieWriterProtocol> *_movieWriter; // ivar: __movieWriter
@property (readonly, nonatomic) int _notifyRegisterTokenResumeIO; // ivar: __notifyRegisterTokenResumeIO
@property (readonly, nonatomic) int _notifyRegisterTokenSuspendIO; // ivar: __notifyRegisterTokenSuspendIO
@property (readonly, nonatomic) BOOL _oldMovieWriterEnabled; // ivar: __oldMovieWriterEnabled
@property (readonly, nonatomic) CAMPersistenceController *_persistenceController; // ivar: __persistenceController
@property (readonly, nonatomic) NSMutableArray *_sessionContexts; // ivar: __sessionContexts
@property (readonly, nonatomic) NSMutableDictionary *_transactionForPersistenceUUID; // ivar: __transactionForPersistenceUUID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_workQueue; // ivar: __workQueue
@property (readonly, nonatomic) BOOL _writingMovie; // ivar: __writingMovie
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_deleteItemAtPath:(id)arg0 ;
-(BOOL)_isCameraRunning;
-(BOOL)_scheduleDelayedMovieWriteIfNeededForTimelapseUUID:(id)arg0 ;
-(BOOL)_shouldSaveLastTimelapseDataForDebugging;
-(id)_getOrCreateSessionContextForTimelapseUUID:(id)arg0 ;
-(id)init;
-(id)initWithPersistenceController:(id)arg0 keepAliveController:(id)arg1 ;
-(int)_pidForApplication:(id)arg0 ;
-(struct CGAffineTransform )_frameTransformForState:(id)arg0 ;
-(void)_createPlaceholderAssetForState:(id)arg0 ;
-(void)_dispatchToMainQueueWithBlock:(id)arg0 ;
-(void)_dispatchToWorkQueueAfterDelay:(CGFloat)arg0 withBlock:(id)arg1 ;
-(void)_dispatchToWorkQueueWithBlock:(id)arg0 ;
-(void)_movieWrittenToFilePath:(id)arg0 duration:(struct ? )arg1 metadata:(id)arg2 state:(id)arg3 ;
-(void)_notifyAssetsdOfIncomingMovieAtPath:(id)arg0 duration:(struct ? )arg1 metadata:(id)arg2 state:(id)arg3 ;
-(void)_performPendingWork;
-(void)_permanentlyFailTimelapseUUID:(id)arg0 withState:(id)arg1 ;
-(void)_reserveDummyFileForTimelapseUUID:(id)arg0 firstImageFilePath:(id)arg1 useHEVC:(BOOL)arg2 ;
-(void)_saveTimelapseDirectoryForDebuggingTimelapseUUID:(id)arg0 ;
-(void)_updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg0 ;
-(void)_updateSessionContext:(id)arg0 withState:(id)arg1 ;
-(void)_writeMovieForSessionContext:(id)arg0 ;
-(void)dealloc;
-(void)finishCaptureForTimelapseWithUUID:(id)arg0 ;
-(void)handleClientConnection:(id)arg0 ;
-(void)handleClientDisconnection;
-(void)persistenceController:(id)arg0 didGenerateVideoLocalPersistenceResult:(id)arg1 forCaptureResult:(id)arg2 fromRequest:(id)arg3 ;
-(void)resumeTimelapseWithUUID:(id)arg0 ;
-(void)startTimelapseWithUUID:(id)arg0 ;
-(void)stopTimelapseWithUUID:(id)arg0 ;
-(void)updatePendingWorkFromDiskForceEndLastSession:(BOOL)arg0 ;
-(void)updateTimelapseWithUUID:(id)arg0 ;
-(void)videoRequestDidCompleteRemotePersistence:(id)arg0 withResponse:(id)arg1 error:(id)arg2 ;


@end


#endif