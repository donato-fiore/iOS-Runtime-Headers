// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NNMKINITIALSYNCPROGRESSTRACKER_H
#define NNMKINITIALSYNCPROGRESSTRACKER_H

@class NSMutableSet;
@protocol NNMKInitialSyncProgressTrackerDelegate, OS_dispatch_queue, NNMKSyncStateManager;

#import <Foundation/Foundation.h>


@interface NNMKInitialSyncProgressTracker : NSObject

@property (weak, nonatomic) NSObject<NNMKInitialSyncProgressTrackerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // ivar: _executionQueue
@property (retain, nonatomic) NSMutableSet *initialSyncMessageIdsOfContentToAck; // ivar: _initialSyncMessageIdsOfContentToAck
@property (retain, nonatomic) NSMutableSet *initialSyncMessageIdsToSyncContent; // ivar: _initialSyncMessageIdsToSyncContent
@property (nonatomic) NSUInteger initialSyncMessagesCount; // ivar: _initialSyncMessagesCount
@property (nonatomic) CGFloat initialSyncProgress; // ivar: _initialSyncProgress
@property (readonly, nonatomic) BOOL isTrackingInitialSync;
@property (nonatomic) BOOL isWaitingForAccounts; // ivar: _isWaitingForAccounts
@property (nonatomic) BOOL isWaitingForMessageContent; // ivar: _isWaitingForMessageContent
@property (nonatomic) BOOL isWaitingForMessageHeaders; // ivar: _isWaitingForMessageHeaders
@property (retain, nonatomic) NSObject<NNMKSyncStateManager> *syncStateManager; // ivar: _syncStateManager
@property (nonatomic) BOOL timeoutCanceledForAccounts; // ivar: _timeoutCanceledForAccounts
@property (nonatomic) BOOL timeoutCanceledForMessageContent; // ivar: _timeoutCanceledForMessageContent
@property (nonatomic) BOOL timeoutCanceledForMessageHeaders; // ivar: _timeoutCanceledForMessageHeaders
@property (nonatomic) BOOL trackingInitialSync; // ivar: _trackingInitialSync


+(CGFloat)syncTimeout;
-(void)_handleInitialSyncCompleted;
-(void)cancelTimeout;
-(void)finishedSendingInitialSyncContentToPairedDevice;
-(void)incrementProgressBy:(CGFloat)arg0 ;
-(void)initialSyncTimedOut;
-(void)resetFlags;
-(void)startSyncTimeoutForAccounts;
-(void)startSyncTimeoutForMessageContent;
-(void)startSyncTimeoutForMessageHeaders;
-(void)startTrackingInitialSync;
-(void)syncCompleted;
-(void)syncFailedWithError:(id)arg0 ;
-(void)updateProgressWithAccountsArrivedInPairedDevice;
-(void)updateProgressWithAccountsSent;
-(void)updateProgressWithContentCompletelySyncedForMessageId:(id)arg0 ;
-(void)updateProgressWithMessageContentArrivedInPairedDevice:(id)arg0 ;
-(void)updateProgressWithMessageContentDownloadFailed:(id)arg0 ;
-(void)updateProgressWithMessageHeadersArrivedInPairedDevice;
-(void)updateProgressWithMessageHeadersSent:(id)arg0 ;


@end


#endif