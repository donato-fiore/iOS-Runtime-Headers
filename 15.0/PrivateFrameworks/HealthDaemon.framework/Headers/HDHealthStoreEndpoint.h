// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDHEALTHSTOREENDPOINT_H
#define HDHEALTHSTOREENDPOINT_H

@class HDXPCClient, NSString, HKProfileIdentifier;
@protocol HDHealthStoreEndpointInterface, _HKXPCExportable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HDDaemon.h"
#import "HDHealthStoreServer.h"

@interface HDHealthStoreEndpoint : NSObject <HDHealthStoreEndpointInterface, _HKXPCExportable>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
}


@property (readonly, nonatomic) HDXPCClient *client; // ivar: _client
@property (readonly, weak, nonatomic) HDDaemon *daemon; // ivar: _daemon
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKProfileIdentifier *profileIdentifier;
@property (readonly, nonatomic) HDHealthStoreServer *server; // ivar: _server
@property (readonly) Class superclass;


+(id)endpointWithClient:(id)arg0 healthDaemon:(id)arg1 ;
-(id)exportedInterface;
-(id)initWithClient:(id)arg0 daemon:(id)arg1 ;
-(id)remoteInterface;
-(void)connectionConfigured;
-(void)connectionInvalidated;
-(void)invalidate;
-(void)remote_serverForConfiguration:(id)arg0 completion:(id)arg1 ;


@end


#endif