// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PAACCESSLOGGER_H
#define PAACCESSLOGGER_H

@class NSString, NSXPCConnection;
@protocol PANotificationProtocol, PAAccessLoggerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PAAccessLoggerState.h"
#import "PACoalescingIntervalTracker.h"

@interface PAAccessLogger : NSObject <PANotificationProtocol>

 {
    os_unfair_lock_s _lock;
    PAAccessLoggerState *_state;
    NSString *_enablementChangedNotificationName;
    int _enablementChangedNotificationToken;
}


@property (retain) PACoalescingIntervalTracker *coalescingIntervalTracker; // ivar: _coalescingIntervalTracker
@property (readonly, weak, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<PAAccessLoggerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BOOL loggingEnabled;
@property NSInteger maxRetryCount; // ivar: _maxRetryCount
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;


+(id)sharedInstance;
+(void)initialize;
-(id)beginIntervalForAccess:(id)arg0 ;
-(id)initWithConnection:(id)arg0 queue:(id)arg1 ;
-(id)initWithConnection:(id)arg0 queue:(id)arg1 enablementChangedNotificationName:(id)arg2 ;
-(id)initWithQueue:(id)arg0 ;
-(struct ResyncStateResult )resyncState;
-(void)dealloc;
-(void)endIntervalWithSlot:(id)arg0 timestampAdjustment:(CGFloat)arg1 ;
-(void)ensureEnablementChangedNotificationRegistered;
-(void)handleConnectionInterrupted;
-(void)handleConnectionInvalidated;
-(void)lockedInvalidateState;
-(void)lockedNotifyDidSetLoggingEnabled:(BOOL)arg0 ;
-(void)log:(id)arg0 ;
-(void)log:(id)arg0 reason:(NSInteger)arg1 ;
-(void)notifyDidLogAccess:(id)arg0 failedWithError:(id)arg1 ;
-(void)withLockedState:(id)arg0 ;


@end


#endif