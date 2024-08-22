// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WCSESSION_H
#define WCSESSION_H

@class NSDictionary, NSOperationQueue, NSMutableSet, NSMutableDictionary, NSString, NSArray, NSMutableArray, NSURL;
@protocol WCXPCManagerDelegate, WCSessionDelegate;

#import <Foundation/Foundation.h>

#import "WCSessionUserInfoTransfer.h"
#import "WCQueueManager.h"

@interface WCSession : NSObject <WCXPCManagerDelegate>

 {
    BOOL _reachableForced;
}


@property (nonatomic) NSInteger activationState; // ivar: _activationState
@property (copy, nonatomic) NSDictionary *applicationContext; // ivar: _applicationContext
@property (readonly) NSOperationQueue *backgroundWorkOperationQueue; // ivar: _backgroundWorkOperationQueue
@property (nonatomic, getter=isCompanionAppInstalled) BOOL companionAppInstalled; // ivar: _companionAppInstalled
@property (nonatomic, getter=isComplicationEnabled) BOOL complicationEnabled; // ivar: _complicationEnabled
@property (nonatomic) BOOL connectionWasInterrupted; // ivar: _connectionWasInterrupted
@property (retain) WCSessionUserInfoTransfer *currentComplicationUserInfoTransfer; // ivar: _currentComplicationUserInfoTransfer
@property (retain) NSMutableSet *currentMessageIdentifiersAwaitingReply; // ivar: _currentMessageIdentifiersAwaitingReply
@property (readonly) NSMutableDictionary *currentMessages; // ivar: _currentMessages
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WCSessionDelegate> *delegate; // ivar: _delegate
@property (readonly) NSOperationQueue *delegateOperationQueue; // ivar: _delegateOperationQueue
@property (nonatomic) BOOL delegateSupportsActiveDeviceSwitch; // ivar: _delegateSupportsActiveDeviceSwitch
@property (nonatomic) BOOL delegateSupportsAsyncActivate; // ivar: _delegateSupportsAsyncActivate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCompletedInitialActivation; // ivar: _hasCompletedInitialActivation
@property (nonatomic) BOOL hasContentPending; // ivar: _hasContentPending
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL iOSDeviceNeedsUnlockAfterRebootForReachability; // ivar: _iOSDeviceNeedsUnlockAfterRebootForReachability
@property (retain, nonatomic) NSMutableDictionary *internalOutstandingFileTransfers; // ivar: _internalOutstandingFileTransfers
@property (retain, nonatomic) NSMutableDictionary *internalOutstandingUserInfoTransfers; // ivar: _internalOutstandingUserInfoTransfers
@property (readonly, copy, nonatomic) NSArray *outstandingFileTransfers;
@property (readonly, copy, nonatomic) NSArray *outstandingUserInfoTransfers;
@property (nonatomic, getter=isPaired) BOOL paired; // ivar: _paired
@property (copy, nonatomic) NSString *pairingID; // ivar: _pairingID
@property (retain) WCQueueManager *queueManager; // ivar: _queueManager
@property (nonatomic, getter=isReachable) BOOL reachable; // ivar: _reachable
@property (copy, nonatomic) NSDictionary *receivedApplicationContext; // ivar: _receivedApplicationContext
@property (nonatomic) NSUInteger remainingComplicationUserInfoTransfers; // ivar: _remainingComplicationUserInfoTransfers
@property (readonly) Class superclass;
@property (retain) NSMutableArray *switchTasksQueue; // ivar: _switchTasksQueue
@property (nonatomic, getter=isWatchAppInstalled) BOOL watchAppInstalled; // ivar: _watchAppInstalled
@property (retain, nonatomic) NSURL *watchDirectoryURL; // ivar: _watchDirectoryURL
@property (readonly) NSOperationQueue *workOperationQueue; // ivar: _workOperationQueue


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)isSupported;
+(id)defaultSession;
-(BOOL)didPairingIDChange:(id)arg0 ;
-(BOOL)didWatchURLChange:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)logAndTestIfUnactivatedOrMissingDelegate;
-(BOOL)supportsActiveDeviceSwitch;
-(BOOL)updateApplicationContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)verifySessionFile:(id)arg0 ;
-(NSUInteger)roundValue:(NSUInteger)arg0 toSignificantFigures:(int)arg1 ;
-(id)_init;
-(id)createAndStartTimerOnWorkQueueWithHandler:(id)arg0 ;
-(id)currentPairingID;
-(id)errorIfNotReachable;
-(id)errorIfPreconditionsNotSatisfied;
-(id)fileSizeFromURL:(id)arg0 ;
-(id)init;
-(id)onqueue_addOutstandingUserInfoTransfer:(id)arg0 ;
-(id)transferCurrentComplicationUserInfo:(id)arg0 ;
-(id)transferFile:(id)arg0 metadata:(id)arg1 ;
-(id)transferUserInfo:(id)arg0 ;
-(void)_onqueue_notifyOfMessageError:(id)arg0 messageID:(id)arg1 withErrorHandler:(id)arg2 ;
-(void)_onqueue_sendResponseError:(id)arg0 identifier:(id)arg1 dictionaryMessage:(BOOL)arg2 ;
-(void)activateSession;
-(void)cancelFileTransfer:(id)arg0 ;
-(void)cancelUserInfo:(id)arg0 ;
-(void)dealloc;
-(void)didSessionStateChange:(id)arg0 withChangeHandler:(id)arg1 ;
-(void)handleActiveDeviceSwitchStarted;
-(void)handleApplicationContextWithPairingID:(id)arg0 ;
-(void)handleFileResultWithPairingID:(id)arg0 ;
-(void)handleIncomingFileWithPairingID:(id)arg0 ;
-(void)handleIncomingUserInfoWithPairingID:(id)arg0 ;
-(void)handleMessageSendingAllowed;
-(void)handleRequest:(id)arg0 ;
-(void)handleResponse:(id)arg0 ;
-(void)handleSentMessageWithIdentifier:(id)arg0 error:(id)arg1 ;
-(void)handleSessionStateChanged:(id)arg0 ;
-(void)handleUserInfoResultWithPairingID:(id)arg0 ;
-(void)notifyOfFileError:(id)arg0 withFileTransfer:(id)arg1 ;
-(void)notifyOfUserInfoError:(id)arg0 withUserInfoTransfer:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)onDelegateQueueIfTriggeringKVO_updateSessionState:(id)arg0 triggerKVO:(BOOL)arg1 ;
-(void)onqueue_addOutstandingFileTransfer:(id)arg0 ;
-(void)onqueue_cancelFileTransfer:(id)arg0 ;
-(void)onqueue_cancelMessagesIfAppropriate;
-(void)onqueue_cancelTransfersIfAppropriate;
-(void)onqueue_cancelUserInfo:(id)arg0 ;
-(void)onqueue_completeSwitchTask:(id)arg0 withSessionState:(id)arg1 ;
-(void)onqueue_createProgressForFileTransfer:(id)arg0 ;
-(void)onqueue_dequeueContent;
-(void)onqueue_handleDataMessageRequest:(id)arg0 withPairingID:(id)arg1 ;
-(void)onqueue_handleDictionaryMessageRequest:(id)arg0 withPairingID:(id)arg1 ;
-(void)onqueue_handleMessageCompletionWithError:(id)arg0 withMessageID:(id)arg1 ;
-(void)onqueue_handleProgressFinishedForFileTransfer:(id)arg0 ;
-(void)onqueue_handleResponseData:(id)arg0 record:(id)arg1 withPairingID:(id)arg2 ;
-(void)onqueue_handleResponseDictionary:(id)arg0 record:(id)arg1 withPairingID:(id)arg2 ;
-(void)onqueue_handleUpdateSessionState:(id)arg0 ;
-(void)onqueue_loadAppContexts;
-(void)onqueue_loadFileTransferProgress;
-(void)onqueue_loadOutstandingFileTransfers;
-(void)onqueue_loadOutstandingUserInfoTransfers;
-(void)onqueue_loadPersistedContent;
-(void)onqueue_notifyOfFileError:(id)arg0 withFileTransfer:(id)arg1 ;
-(void)onqueue_notifyOfUserInfoError:(id)arg0 withUserInfoTransfer:(id)arg1 ;
-(void)onqueue_removeOutstandingFileTransfer:(id)arg0 ;
-(void)onqueue_removeOutstandingUserInfoTransfer:(id)arg0 ;
-(void)onqueue_removeProgressForFileTransfer:(id)arg0 ;
// -(void)onqueue_sendMessageData:(id)arg0 replyHandler:(id)arg1 errorHandler:(unk)arg2 dictionaryMessage:(id)arg3  ;
-(void)onqueue_sendResponseData:(id)arg0 identifier:(id)arg1 dictionaryMessage:(BOOL)arg2 ;
-(void)onqueue_sendResponseDictionary:(id)arg0 identifier:(id)arg1 ;
-(void)onqueue_startNextDeviceSwitch;
-(void)onqueue_transferUserInfo:(id)arg0 withUserInfo:(id)arg1 ;
-(void)onqueue_updateClientProgressForFileTransfer:(id)arg0 ;
-(void)onqueue_updateProgressForFileTransfer:(id)arg0 progress:(id)arg1 ;
-(void)reportFileTransfer:(id)arg0 ;
// -(void)sendMessage:(id)arg0 replyHandler:(id)arg1 errorHandler:(unk)arg2  ;
// -(void)sendMessageData:(id)arg0 replyHandler:(id)arg1 errorHandler:(unk)arg2  ;
-(void)storeAppContext:(id)arg0 withAppContextData:(id)arg1 ;
-(void)storeReceivedAppContext:(id)arg0 withAppContextData:(id)arg1 ;
-(void)updatePairingID:(id)arg0 ;
-(void)xpcConnectionInterrupted;
-(void)xpcConnectionRestoredWithState:(id)arg0 ;


@end


#endif