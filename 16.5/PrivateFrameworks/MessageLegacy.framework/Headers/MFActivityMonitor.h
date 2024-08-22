// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFACTIVITYMONITOR_H
#define MFACTIVITYMONITOR_H

@class EFPriorityDesignator, NSThread, NSString, NSMutableSet;
@protocol EFCancelable;


#import "MFInvocationQueue.h"
#import "MFError.h"
#import "MFMailboxUid.h"

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable>

 {
    NSThread *_runningThread;
    NSString *_taskName;
    NSString *_displayName;
    NSString *_statusMessage;
    NSString *_descriptionString;
    MFInvocationQueue *_ourQueue;
    CGFloat _percentDone;
    BOOL _key;
    BOOL _canCancel;
    BOOL _shouldCancel;
    BOOL _isActive;
    BOOL _changeCount;
    id *_delegate;
    id *_target;
    MFError *_error;
    NSUInteger _expectedLength;
    NSUInteger _maxCount;
    NSUInteger _currentCount;
    CGFloat _currentItemPercentDone;
    BOOL _supportsPerItemProgress;
    CGFloat _lastTime;
    CGFloat _startTime;
    NSUInteger _gotNewMessagesState;
    NSUInteger _bytesRead;
    NSUInteger _bytesWritten;
    NSMutableSet *_reasons;
    NSMutableSet *_associatedCancelables;
}


@property (nonatomic) BOOL canBeCancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRemoteSearch; // ivar: _isRemoteSearch
@property (retain) MFMailboxUid *mailbox; // ivar: _mailbox
@property (nonatomic) BOOL shouldCancel;
@property (readonly) Class superclass;


+(id)currentMonitor;
+(void)destroyMonitor;
-(BOOL)_lockedAddActivityTarget:(id)arg0 ;
-(BOOL)hasReason:(id)arg0 ;
-(BOOL)isActive;
-(CGFloat)percentDone;
-(CGFloat)startTime;
-(NSUInteger)bytesRead;
-(NSUInteger)bytesWritten;
-(NSUInteger)expectedLength;
-(NSUInteger)gotNewMessagesState;
-(id)_ntsThrottledUserInfoDict;
-(id)activityTarget;
-(id)activityTargets;
-(id)displayName;
-(id)error;
-(id)init;
-(id)primaryTarget;
-(id)reasons;
-(id)statusMessage;
-(id)taskName;
-(id)userInfoForNotification;
-(int)acquireExclusiveAccessKey;
-(int)changeCount;
-(void)_cancelAssociatedCancelables;
-(void)_didChange;
-(void)addActivityTarget:(id)arg0 ;
-(void)addActivityTargets:(id)arg0 ;
-(void)addCancelable:(id)arg0 ;
-(void)addReason:(id)arg0 ;
-(void)cancel;
-(void)cancelMessage;
-(void)dealloc;
-(void)finishedActivity:(id)arg0 ;
-(void)notifyConnectionEstablished;
-(void)postActivityFinished:(id)arg0 ;
-(void)postActivityStarting;
-(void)postDidChangeWithUserInfo:(id)arg0 ;
-(void)recordBytesRead:(NSUInteger)arg0 ;
-(void)recordBytesWritten:(NSUInteger)arg0 ;
-(void)relinquishExclusiveAccessKey:(int)arg0 ;
-(void)removeActivityTarget:(id)arg0 ;
-(void)removeCancelable:(id)arg0 ;
-(void)reset;
-(void)resetConnectionStats;
-(void)setActivityTarget:(id)arg0 ;
-(void)setCurrentCount:(NSUInteger)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setDisplayName:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(void)setError:(id)arg0 ;
-(void)setExpectedLength:(NSUInteger)arg0 ;
-(void)setGotNewMessagesState:(NSUInteger)arg0 ;
-(void)setInvocationQueue:(id)arg0 ;
-(void)setMaxCount:(NSUInteger)arg0 ;
-(void)setPercentDone:(CGFloat)arg0 ;
-(void)setPercentDone:(CGFloat)arg0 withKey:(int)arg1 ;
-(void)setPercentDoneOfCurrentItem:(CGFloat)arg0 ;
-(void)setPrimaryTarget:(id)arg0 ;
-(void)setStatusMessage:(id)arg0 ;
-(void)setStatusMessage:(id)arg0 percentDone:(CGFloat)arg1 ;
-(void)setStatusMessage:(id)arg0 percentDone:(CGFloat)arg1 withKey:(int)arg2 ;
-(void)setStatusMessage:(id)arg0 withKey:(int)arg1 ;
-(void)setSupportsPerItemProgress:(BOOL)arg0 ;
-(void)setTaskName:(id)arg0 ;
-(void)startActivity;


@end


#endif