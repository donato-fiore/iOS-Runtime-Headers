// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMXPCCLIENTCONNECTIONPROXY_H
#define HMXPCCLIENTCONNECTIONPROXY_H

@class HMFMessageTransport, NSString, NSDictionary;
@protocol HMXPCClientMessageHandling;



@interface HMXPCClientConnectionProxy : HMFMessageTransport <HMXPCClientMessageHandling>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) id *refreshHandler; // ivar: _refreshHandler
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo; // ivar: _userInfo


-(id)initWithUserInfo:(id)arg0 refreshHandler:(id)arg1 ;
-(void)fetchUserInfo:(id)arg0 ;
-(void)handleMessage:(id)arg0 ;
-(void)handleMessage:(id)arg0 responseHandler:(id)arg1 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif