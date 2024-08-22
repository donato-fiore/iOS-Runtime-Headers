// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDEVICEFIRSTUNLOCK_H
#define CNDEVICEFIRSTUNLOCK_H

@class NSMutableDictionary, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "CNFuture.h"
#import "CNUnfairLock.h"

@interface CNDeviceFirstUnlock : NSObject

@property (retain, nonatomic) CNFuture *firstUnlockFuture; // ivar: _firstUnlockFuture
@property (retain, nonatomic) CNUnfairLock *handlersLock; // ivar: _handlersLock
@property (readonly, nonatomic) BOOL isUnlockedSinceBoot;
@property (retain, nonatomic) NSMutableDictionary *unlockHandlers; // ivar: _unlockHandlers
@property (retain, nonatomic) NSOperationQueue *workQueue; // ivar: _workQueue


+(id)sharedInstance;
-(NSInteger)countOfUnlockHandlers;
-(id)init;
-(void)addUnlockHandlerWithIdentifier:(id)arg0 block:(id)arg1 ;
-(void)dealloc;
-(void)removeUnlockHandlerWithIdentifier:(id)arg0 ;
-(void)waitForAllOperationsToFinish;
-(void)withHandlersLock_addHandlerWithIdentifier:(id)arg0 block:(id)arg1 ;
-(void)withHandlersLock_cancelExistingOperationWithIdentifier:(id)arg0 ;
-(void)withHandlersLock_registerForDeviceFirstUnlock;


@end


#endif