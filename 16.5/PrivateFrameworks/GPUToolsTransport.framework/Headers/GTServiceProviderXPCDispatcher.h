// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTSERVICEPROVIDERXPCDISPATCHER_H
#define GTSERVICEPROVIDERXPCDISPATCHER_H

@class NSMutableDictionary;
@protocol GTServiceProviderXPCDispatcher, GTServiceProvider;


#import "GTXPCDispatcher.h"

@interface GTServiceProviderXPCDispatcher : GTXPCDispatcher <GTServiceProviderXPCDispatcher>

 {
    id<GTServiceProvider> *_serviceProvider;
    NSMutableDictionary *_registeredConnections;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)allServices:(id)arg0 replyConnection:(id)arg1 ;
-(void)deregisterObserver_:(id)arg0 replyConnection:(id)arg1 ;
-(void)deregisterService_:(id)arg0 replyConnection:(id)arg1 ;
-(void)registerObserver_:(id)arg0 replyConnection:(id)arg1 ;
-(void)registerService_forProcess_:(id)arg0 replyConnection:(id)arg1 ;
-(void)setConnections:(id)arg0 ;
-(void)waitForService_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)waitForService_error_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif