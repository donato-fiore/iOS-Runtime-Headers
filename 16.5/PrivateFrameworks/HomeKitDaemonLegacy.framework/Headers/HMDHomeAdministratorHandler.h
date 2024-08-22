// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEADMINISTRATORHANDLER_H
#define HMDHOMEADMINISTRATORHANDLER_H

@class HMFMessageDispatcher, NSOperationQueue, NSMapTable, NSString;
@protocol HMFLogging;


#import "HMDHome.h"

@interface HMDHomeAdministratorHandler : HMFMessageDispatcher <HMFLogging>

 {
    os_unfair_lock_s _lock;
    NSOperationQueue *_queue;
    NSMapTable *_receivers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMFMessageDispatcher *dispatcher; // ivar: _dispatcher
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) BOOL shouldRelayMessages;
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithHome:(id)arg0 ;
-(id)initWithHome:(id)arg0 dispatcher:(id)arg1 ;
-(id)initWithTransport:(id)arg0 ;
-(id)logIdentifier;
-(id)operationForMessage:(id)arg0 error:(*id)arg1 ;
-(id)syncOperationManager;
-(void)addOperation:(id)arg0 ;
-(void)deregisterReceiver:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)registerForMessage:(id)arg0 receiver:(id)arg1 policies:(id)arg2 messageHandler:(id)arg3 ;
-(void)registerForMessage:(id)arg0 receiver:(id)arg1 policies:(id)arg2 selector:(SEL)arg3 ;


@end


#endif