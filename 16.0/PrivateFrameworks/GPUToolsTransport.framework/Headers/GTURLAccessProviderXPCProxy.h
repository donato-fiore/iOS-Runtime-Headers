// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTURLACCESSPROVIDERXPCPROXY_H
#define GTURLACCESSPROVIDERXPCPROXY_H

@class NSSet;
@protocol GTURLAccessProvider, GTXPCConnection;

#import <Foundation/Foundation.h>


@interface GTURLAccessProviderXPCProxy : NSObject <GTURLAccessProvider>

 {
    id<GTXPCConnection> *_connection;
    NSSet *_ignoreMethods;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(id)makeURL:(id)arg0 ;
-(void)securityScopedURLFromSandboxID:(id)arg0 completionHandler:(id)arg1 ;
-(void)transferIdentifier:(id)arg0 fromDevice:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif