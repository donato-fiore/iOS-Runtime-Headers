// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCXPCCLIENTSHARED_H
#define VCXPCCLIENTSHARED_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;


#import "AVConferenceXPCClient.h"

@interface VCXPCClientShared : AVConferenceXPCClient {
    NSObject<OS_dispatch_queue> *_registeredBlocksQueue;
}


@property (readonly, nonatomic) NSMutableDictionary *registeredUUIDServiceBlocks; // ivar: _registeredUUIDServiceBlocks


-(id)init;
-(void)dealloc;
-(void)deregisterFromNotifications;
-(void)deregisterWithUUID:(id)arg0 service:(char *)arg1 ;
-(void)registerBlockWithUUID:(id)arg0 service:(char *)arg1 block:(id)arg2 ;


@end


#endif