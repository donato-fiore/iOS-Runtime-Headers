// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMXPCCLIENTCONNECTIONPROXY_H
#define HMXPCCLIENTCONNECTIONPROXY_H

@class HMFMessageTransport, NSString;
@protocol HMXPCClientMessageHandling;


#import "HMXPCClient.h"

@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCClientMessageHandling>



@property (weak) HMXPCClient *client; // ivar: _client
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *refreshHandler; // ivar: _refreshHandler
@property (readonly) Class superclass;


-(id)initWithRefreshHandler:(id)arg0 ;
-(void)fetchUserInfo:(id)arg0 ;
-(void)handleMessage:(id)arg0 ;
-(void)handleMessage:(id)arg0 responseHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif