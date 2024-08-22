// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMCONTEXT_H
#define _HMCONTEXT_H

@class NSString, HMFMessageDispatcher;
@protocol HMFLogging, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDelegateCaller.h"
#import "HMPendingRequests.h"
#import "HMXPCClient.h"

@interface _HMContext : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) HMDelegateCaller *delegateCaller; // ivar: _delegateCaller
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, copy) NSString *name; // ivar: _name
@property (readonly, nonatomic) HMPendingRequests *pendingRequests; // ivar: _pendingRequests
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) HMXPCClient *xpcClient; // ivar: _xpcClient


+(id)contextWithName:(id)arg0 ;
+(id)contextWithName:(id)arg0 xpcClient:(id)arg1 ;
+(id)contextWithName:(id)arg0 xpcClient:(id)arg1 delegateCaller:(id)arg2 ;
+(id)logCategory;
-(id)init;
-(id)initWithName:(id)arg0 pendingRequests:(id)arg1 delegateCaller:(id)arg2 messageDispatcher:(id)arg3 xpcClient:(id)arg4 ;
-(id)logIdentifier;
-(id)subcontextWithName:(id)arg0 ;


@end


#endif