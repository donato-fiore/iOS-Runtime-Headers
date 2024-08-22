// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIAINVOKEAUTHENTICATIONCOORDINATOR_H
#define AMSMEDIAINVOKEAUTHENTICATIONCOORDINATOR_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "AMSPromise.h"

@interface AMSMediaInvokeAuthenticationCoordinator : NSObject

@property (retain, nonatomic) AMSPromise *inflightAuthPromise; // ivar: _inflightAuthPromise
@property (readonly, nonatomic) NSMutableArray *invokeAuthQueue; // ivar: _invokeAuthQueue
@property (readonly, nonatomic) os_unfair_lock_s queueLock; // ivar: _queueLock


+(id)sharedInstance;
-(id)addToQueueAndPerformAuthFromResponseIfNeeded:(id)arg0 taskInfo:(id)arg1 ;
-(id)init;
-(id)performAuthFromResponse:(id)arg0 taskInfo:(id)arg1 ;
-(void)_finishQueueWithAuthResult:(id)arg0 queuedObjects:(id)arg1 ;
-(void)updateQueueIfNeeded;


@end


#endif