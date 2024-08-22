// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTURLACCESSPROVIDERXPCDISPATCHER_H
#define GTURLACCESSPROVIDERXPCDISPATCHER_H

@protocol GTURLAccessProviderXPCDispatcher, GTURLAccessProvider;


#import "GTXPCDispatcher.h"

@interface GTURLAccessProviderXPCDispatcher : GTXPCDispatcher <GTURLAccessProviderXPCDispatcher>

 {
    id<GTURLAccessProvider> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)makeURL_:(id)arg0 replyConnection:(id)arg1 ;
-(void)securityScopedURLFromSandboxID_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)transferIdentifier_fromDevice_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)urlForPath_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif