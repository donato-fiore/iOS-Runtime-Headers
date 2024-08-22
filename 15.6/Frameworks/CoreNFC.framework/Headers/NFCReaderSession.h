// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFCREADERSESSION_H
#define NFCREADERSESSION_H

@class NSString, NSNumber;
@protocol NFReaderSessionCallbacks, NFCHardwareManagerCallbacks, NFCSessionCallbacks, NFCReaderSession, OS_dispatch_queue, NFReaderSessionInterface><NSXPCProxyCreating, NFTag, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface NFCReaderSession : NSObject <NFReaderSessionCallbacks, NFCHardwareManagerCallbacks, NFCSessionCallbacks, NFCReaderSession>

 {
    id *_delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    NSObject<NFReaderSessionInterface><NSXPCProxyCreating> *_proxy;
    NSInteger _sessionState;
    BOOL _delegateQueueStarted;
    NSInteger _invalidationCode;
    id<NFTag> *_currentTag;
    NSObject<OS_dispatch_group> *_sessionStartInProgress;
    NSString *_alertMessage;
}


@property (copy, nonatomic) NSString *alertMessage;
@property (readonly, nonatomic) NSObject<NFTag> *currentTag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id *delegate;
@property (readonly, nonatomic) NSInteger delegateType; // ivar: _delegateType
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (nonatomic) NSUInteger pollMethod; // ivar: _pollMethod
@property (readonly, retain, nonatomic) NSObject<NFReaderSessionInterface><NSXPCProxyCreating> *readerProxy;
@property (readonly, nonatomic, getter=isReady) BOOL ready;
@property (nonatomic) NSUInteger sessionConfig; // ivar: _sessionConfig
@property (readonly, nonatomic) NSNumber *sessionId; // ivar: _sessionId
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionQueue;
@property (readonly) Class superclass;


+(BOOL)featureAvailable:(NSUInteger)arg0 ;
+(BOOL)readingAvailable;
-(BOOL)_connectTag:(id)arg0 error:(*id)arg1 ;
-(BOOL)checkPresenceWithError:(*id)arg0 ;
-(BOOL)connectTag:(id)arg0 error:(*id)arg1 ;
-(BOOL)disconnectTagWithError:(*id)arg0 ;
-(BOOL)validateDelegate:(id)arg0 expectedType:(NSInteger)arg1 ;
-(BOOL)writeNdefMessage:(id)arg0 error:(*id)arg1 ;
-(id)_convertMessageToInternal:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 queue:(id)arg1 pollMethod:(NSUInteger)arg2 ;
-(id)initWithDelegate:(id)arg0 sessionDelegateType:(NSInteger)arg1 queue:(id)arg2 pollMethod:(NSUInteger)arg3 sessionConfig:(NSUInteger)arg4 ;
-(id)ndefStatus:(*NSInteger)arg0 maxMessageLength:(*NSUInteger)arg1 ;
-(id)readNdefMessageWithError:(*id)arg0 ;
-(id)transceive:(id)arg0 tagUpdate:(*id)arg1 error:(*id)arg2 ;
-(id)writeLockNdef;
-(void)_callbackDidBecomeActive;
-(void)_callbackDidInvalidateWithError:(id)arg0 ;
-(void)_invalidateSessionAndActivateCallbackWithCode:(NSInteger)arg0 ;
-(void)_invalidateSessionWithCode:(NSInteger)arg0 ;
-(void)_invalidateSessionWithCode:(NSInteger)arg0 message:(id)arg1 finalUIState:(NSInteger)arg2 activateCallback:(BOOL)arg3 ;
-(void)_restartPollingWithCompletionHandler:(id)arg0 ;
-(void)_resumeDelegateQueue;
-(void)_startPollingWithMethod:(NSUInteger)arg0 sessionConfig:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)_stopPollingWithCompletionHandler:(id)arg0 ;
-(void)beginSession;
-(void)beginSessionWithConfig:(id)arg0 ;
-(void)cleanupNFCHardwareManagerRegistration;
-(void)connectTag:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)didDetectExternalReaderWithNotification:(id)arg0 ;
-(void)didDetectNDEFMessages:(id)arg0 fromTags:(id)arg1 connectedTagIndex:(NSUInteger)arg2 updateUICallback:(id)arg3 ;
-(void)didDetectTags:(id)arg0 connectedTagIndex:(NSUInteger)arg1 ;
-(void)didInvalidate;
-(void)didStartSession:(id)arg0 ;
-(void)didTerminate:(id)arg0 ;
-(void)didUIControllerInvalidate:(id)arg0 ;
-(void)handleSessionResumed;
-(void)handleSessionSuspended:(id)arg0 ;
-(void)hardwareFailedToLoad;
-(void)invalidateSession;
-(void)invalidateSessionWithErrorMessage:(id)arg0 ;
-(void)invalidateSessionWithReason:(NSInteger)arg0 ;
-(void)restartPolling;
-(void)submitBlockOnDelegateQueue:(id)arg0 ;
-(void)submitBlockOnSessionQueue:(id)arg0 ;
-(void)submitBlockOnSessionQueueWithDelay:(NSUInteger)arg0 block:(id)arg1 ;


@end


#endif