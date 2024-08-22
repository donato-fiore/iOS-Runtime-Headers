// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __NSCFTCPIOSTREAMTASK_H
#define __NSCFTCPIOSTREAMTASK_H

@class NSMutableArray, NSData;
@protocol OS_dispatch_queue;


#import "NSURLSessionTask.h"
#import "CFNetworkTimer.h"
#import "__NSCFURLLocalStreamTaskWorkWrite.h"
#import "__NSCFURLLocalStreamTaskWorkRead.h"

@interface __NSCFTCPIOStreamTask : NSURLSessionTask {
    id *_disavow;
    shared_ptr<TCPIO_EstablishBase> _establish;
    shared_ptr<TransportConnectionObjCPP> _ios;
    unsigned char _captureStreamsUponCompletion;
    unsigned char _secure;
    shared_ptr<HTTPProtocol> _httpProtocol;
    NSMutableArray *_pendingWork;
    NSMutableArray *_completedSuspendedWork;
    BOOL _doingWorkOnThisQueue;
    int _connectionState;
    BOOL _goneSecure;
    BOOL _streamsCaptured;
    ? _readError;
    BOOL _readInProgress;
    BOOL _readClosed;
    ? _writeError;
    BOOL _writeEOF;
    BOOL _writeInProgress;
    BOOL _writeClosed;
    BOOL _receivedServerTrustChallenge;
    BOOL _receivedEof;
    CFNetworkTimer *_writeTimer;
    CFNetworkTimer *_readTimer;
    __NSCFURLLocalStreamTaskWorkWrite *_currentWriteTask;
    __NSCFURLLocalStreamTaskWorkRead *_currentReadTask;
    NSObject<OS_dispatch_queue> *_workQueueForStreamTask;
}


@property (copy) NSData *_initialDataPayload; // ivar: __initialDataPayload


-(?)_onqueue_setTransportConnection;
-(?)initWithTask:(?)arg0 connection:(?)arg1 extraBytesdisavow;
-(BOOL)_onqueue_sendSessionChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(BOOL)_onqueue_usingProxy;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(BOOL)shouldDoWorkConsideringTlsState;
-(id)_onqueue_errorOrCancelError;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHost:(id)arg0 port:(NSInteger)arg1 taskGroup:(id)arg2 disavow:(id)arg3 ;
-(id)workQueue;
-(void)_onSessionQueue_cleanupAndBreakCycles;
-(void)_onSessionQueue_disavow;
// -(void)_onqueue_addBlockOp:(id)arg0 description:(unk)arg1  ;
// -(void)_onqueue_addBlockOp:(id)arg0 description:(unk)arg1 shouldWaitForTls:(char *)arg2  ;
-(void)_onqueue_adjustLoadingPoolPriority;
-(void)_onqueue_adjustPoolPriority;
-(void)_onqueue_callbackCompletedWork;
-(void)_onqueue_cancel;
-(void)_onqueue_captureStreams;
-(void)_onqueue_checkForCompletion;
-(void)_onqueue_cleanUpConnectionEstablishmentState;
-(void)_onqueue_closeRead;
-(void)_onqueue_closeWrite;
-(void)_onqueue_connectionEstablishedWithError:(struct ? )arg0 callbackReferent:(id)arg1 ;
-(void)_onqueue_dealWithSessionClientCertAuth:(NSInteger)arg0 credential:(id)arg1 completionHandler:(id)arg2 ;
-(void)_onqueue_dealWithSessionTrustAuth:(NSInteger)arg0 credential:(id)arg1 completionHandler:(id)arg2 ;
-(void)_onqueue_ioTick;
-(void)_onqueue_needClientCert:(id)arg0 completionHandler:(id)arg1 ;
-(void)_onqueue_needServerTrust:(id)arg0 completionHandler:(id)arg1 ;
-(void)_onqueue_postConnectConfiguration:(id)arg0 parameters:(id)arg1 completionHandler:(id)arg2 ;
-(void)_onqueue_preConnectionConfiguration:(id)arg0 parameters:(id)arg1 completionHandler:(id)arg2 ;
-(void)_onqueue_processReadWork:(id)arg0 ;
-(void)_onqueue_processWriteWork:(id)arg0 ;
-(void)_onqueue_resume;
-(void)_onqueue_startSecureConnection;
-(void)_onqueue_stopSecureConnection;
-(void)_onqueue_suspend;
-(void)_onqueue_timeoutOccured;
-(void)_onqueue_tlsCompletion;
-(void)_onqueue_tlsDisabled;
-(void)_task_onqueue_didFinish;
-(void)cancel;
-(void)captureStreams;
-(void)closeRead;
-(void)closeWrite;
-(void)copyStreamProperty:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)readDataOfMinLength:(NSUInteger)arg0 maxLength:(NSUInteger)arg1 timeout:(CGFloat)arg2 completionHandler:(id)arg3 ;
-(void)startSecureConnection;
-(void)stopSecureConnection;
-(void)writeData:(id)arg0 timeout:(CGFloat)arg1 completionHandler:(id)arg2 ;


@end


#endif