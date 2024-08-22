// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDCLIENTCONNECTION_H
#define BKHIDCLIENTCONNECTION_H

@class BSCompoundAssertion, NSString, BSProcessDeathWatcher;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>


@interface BKHIDClientConnection : NSObject <BSInvalidatable>

 {
    *__IOHIDEventSystemConnection _connection;
    os_unfair_lock_s _lock;
    BSCompoundAssertion *_observerAssertion;
    atomic_flag _invalid;
}


@property (readonly, copy, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (retain, nonatomic) BSProcessDeathWatcher *processDeathWatcher; // ivar: _processDeathWatcher
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int task; // ivar: _task
@property (readonly, nonatomic) NSInteger versionedPID; // ivar: _versionedPID


+(id)connectionWithConnection:(struct __IOHIDEventSystemConnection *)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)addDisconnectionObserverBlock:(id)arg0 ;
-(id)initWithConnection:(struct __IOHIDEventSystemConnection *)arg0 ;
-(struct __IOHIDEventSystemConnection *)connection;
-(void)dealloc;
-(void)invalidate;


@end


#endif