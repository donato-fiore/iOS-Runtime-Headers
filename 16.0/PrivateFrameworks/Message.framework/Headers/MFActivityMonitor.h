// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFACTIVITYMONITOR_H
#define MFACTIVITYMONITOR_H

@class EFPriorityDesignator, NSThread, NSString, NSMutableSet;
@protocol EFCancelable;


#import "MFError.h"
#import "MFMailboxUid.h"

@interface MFActivityMonitor : EFPriorityDesignator <EFCancelable>

 {
    NSThread *_runningThread;
    NSString *_displayName;
    NSString *_statusMessage;
    CGFloat _percentDone;
    BOOL _key;
    BOOL _canCancel;
    BOOL _shouldCancel;
    BOOL _isActive;
    MFError *_error;
    NSUInteger _expectedLength;
    NSUInteger _maxCount;
    NSUInteger _currentCount;
    CGFloat _lastTime;
    CGFloat _startTime;
    NSUInteger _gotNewMessagesState;
    NSUInteger _bytesRead;
    NSUInteger _bytesWritten;
    NSMutableSet *_reasons;
    NSMutableSet *_associatedCancelables;
}


@property (readonly, nonatomic) NSUInteger bytesRead;
@property (readonly, nonatomic) NSUInteger bytesWritten;
@property (nonatomic) BOOL canBeCancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) MFError *error;
@property (nonatomic) NSUInteger expectedLength;
@property (nonatomic) NSUInteger gotNewMessagesState;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRemoteSearch; // ivar: _isRemoteSearch
@property (retain) MFMailboxUid *mailbox; // ivar: _mailbox
@property (nonatomic) CGFloat percentDone;
@property (nonatomic) BOOL shouldCancel;
@property (readonly, nonatomic) CGFloat startTime;
@property (copy) id *startedFetch; // ivar: _startedFetch
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger transportType; // ivar: _transportType


+(id)currentMonitor;
+(id)pushNewMonitor;
+(void)destroyMonitor;
-(BOOL)isActive;
-(id)_ntsThrottledUserInfoDict;
-(id)init;
-(id)reasons;
-(id)userInfoForNotification;
-(int)acquireExclusiveAccessKey;
-(void)_cancelAssociatedCancelables;
-(void)_didChange;
-(void)addCancelable:(id)arg0 ;
-(void)addReason:(id)arg0 ;
-(void)cancel;
-(void)cancelMessage;
-(void)finishedActivity:(id)arg0 ;
-(void)postActivityFinished:(id)arg0 ;
-(void)postActivityStarting;
-(void)postDidChangeWithUserInfo:(id)arg0 ;
-(void)recordBytesRead:(NSUInteger)arg0 ;
-(void)recordBytesWritten:(NSUInteger)arg0 ;
-(void)recordTransportType:(NSInteger)arg0 ;
-(void)relinquishExclusiveAccessKey:(int)arg0 ;
-(void)removeCancelable:(id)arg0 ;
-(void)reset;
-(void)resetConnectionStats;
-(void)setCurrentCount:(NSUInteger)arg0 ;
-(void)setDisplayName:(id)arg0 ;
-(void)setDisplayName:(id)arg0 maxCount:(NSUInteger)arg1 ;
-(void)setStatusMessage:(id)arg0 percentDone:(CGFloat)arg1 ;
-(void)setStatusMessage:(id)arg0 percentDone:(CGFloat)arg1 withKey:(int)arg2 ;
-(void)setStatusMessage:(id)arg0 withKey:(int)arg1 ;
-(void)startActivity;


@end


#endif