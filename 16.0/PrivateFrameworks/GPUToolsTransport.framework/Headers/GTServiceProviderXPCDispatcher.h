// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTSERVICEPROVIDERXPCDISPATCHER_H
#define GTSERVICEPROVIDERXPCDISPATCHER_H

@class NSMutableDictionary;
@protocol GTServiceProviderXPCDispatcher, GTServiceProviderDelegate, GTServiceProvider, GTXPCConnection;


#import "GTXPCDispatcher.h"

@interface GTServiceProviderXPCDispatcher : GTXPCDispatcher <GTServiceProviderXPCDispatcher, GTServiceProviderDelegate>

 {
    id<GTServiceProvider> *_serviceProvider;
    id<GTXPCConnection> *_notifyConnection;
    NSMutableDictionary *_registeredConnections;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 notifyConnection:(id)arg2 ;
-(void)allServices:(id)arg0 replyConnection:(id)arg1 ;
-(void)notifyServiceListChanged:(id)arg0 ;
-(void)registerService_forProcess_:(id)arg0 replyConnection:(id)arg1 ;
-(void)setConnections:(id)arg0 ;
-(void)setDelegate_:(id)arg0 replyConnection:(id)arg1 ;
-(void)waitForService_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif