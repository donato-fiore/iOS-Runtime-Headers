// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DIXPCMANAGER_H
#define DIXPCMANAGER_H

@class OS_dispatch_queue, NSXPCConnection;
@protocol DIXPCManagerDelegate;

#import <Foundation/Foundation.h>

#import "DIClientContext.h"

@interface DIXPCManager : NSObject {
    ? needsCheckIn;
    ? dispatcher;
    ? isConnectionValid;
    ? _connection;
    ? logger;
    ? notifyRegisterToken;
    ? checkInObservers;
    ? lock;
}


@property (nonatomic, readonly) DIClientContext *clientContext; // ivar: clientContext
@property (nonatomic, weak) OS_dispatch_queue *clientQueue; // ivar: clientQueue
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (nonatomic, weak) NSObject<DIXPCManagerDelegate> *delegate; // ivar: delegate


-(id)init;
-(id)initWithClientContext:(id)arg0 dispatcher:(id)arg1 clientQueue:(id)arg2 ;
-(void)addCheckInObserver:(id)arg0 ;
-(void)dealloc;


@end


#endif