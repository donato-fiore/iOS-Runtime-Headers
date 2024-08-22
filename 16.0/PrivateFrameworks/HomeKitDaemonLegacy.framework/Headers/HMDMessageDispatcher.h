// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDMESSAGEDISPATCHER_H
#define HMDMESSAGEDISPATCHER_H

@class HMFMessageDispatcher, NSMutableDictionary;


#import "HMDXPCMessageTransport.h"
#import "HMDHomeManager.h"
#import "HMDMessageFilterChain.h"
#import "HMDSecureRemoteMessageFilter.h"
#import "HMDSecureRemoteMessageTransport.h"

@interface HMDMessageDispatcher : HMFMessageDispatcher

@property (readonly, nonatomic) HMDXPCMessageTransport *XPCTransport; // ivar: _XPCTransport
@property (weak, nonatomic) HMDHomeManager *homeManager; // ivar: _homeManager
@property (readonly, nonatomic) HMDMessageFilterChain *messageFilterChain; // ivar: _messageFilterChain
@property (retain, nonatomic) NSMutableDictionary *remoteGateways; // ivar: _remoteGateways
@property (retain, nonatomic) HMDSecureRemoteMessageFilter *secureRemoteMessageFilter; // ivar: _secureRemoteMessageFilter
@property (readonly, nonatomic) HMDSecureRemoteMessageTransport *secureRemoteTransport; // ivar: _secureRemoteTransport


+(id)defaultDispatcher;
+(id)destinationWithTarget:(id)arg0 userID:(id)arg1 destination:(id)arg2 multicast:(BOOL)arg3 ;
+(id)destinationWithTarget:(id)arg0 userID:(id)arg1 destination:(id)arg2 multicast:(BOOL)arg3 accountRegistry:(id)arg4 ;
+(id)logCategory;
-(id)filterClasses;
-(id)httpMessageTransport;
-(id)initWithXPCTransport:(id)arg0 secureRemoteTransport:(id)arg1 messageFilterChain:(id)arg2 ;
-(id)prepareAnswerForRequestedCapabilities:(id)arg0 ;
-(id)remoteAccessDeviceForHome:(id)arg0 ;
-(id)residentCommunicationHandlerForHome:(id)arg0 ;
-(id)sendMessageExpectingResponse:(id)arg0 ;
-(void)_setRemoteAccessDevice:(id)arg0 forHome:(id)arg1 sendNotification:(BOOL)arg2 ;
-(void)configureHTTPTransport:(id)arg0 ;
-(void)configureHomeManager:(id)arg0 ;
-(void)dealloc;
-(void)disableMessageServer;
-(void)dispatchMessage:(id)arg0 ;
-(void)electDeviceForHH1User:(id)arg0 destination:(id)arg1 deviceCapabilities:(id)arg2 responseTimeout:(CGFloat)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5 ;
-(void)enableMessageServer;
-(void)handleSecureSessionError:(id)arg0 ;
-(void)removeHome:(id)arg0 ;
-(void)reset;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendSecureMessage:(id)arg0 target:(id)arg1 userID:(id)arg2 destination:(id)arg3 responseQueue:(id)arg4 responseHandler:(id)arg5 ;
-(void)setCompanionDevice:(id)arg0 forHome:(id)arg1 ;
-(void)setRemoteAccessDevice:(id)arg0 forHome:(id)arg1 ;
-(void)updateHome:(id)arg0 configurationVersion:(NSInteger)arg1 ;


@end


#endif