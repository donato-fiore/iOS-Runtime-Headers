// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPROVIDERSERVER_H
#define NEPROVIDERSERVER_H

@class NSMutableArray, NSString;
@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>

#import "NEExtensionProviderContext.h"

@interface NEProviderServer : NSObject <NSXPCListenerDelegate>

 {
    NSMutableArray *_listeners;
    NSMutableArray *_contexts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NEExtensionProviderContext *firstContext;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedServer;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(void)generateProviderEndpointInfoInMessage:(id)arg0 extensionPoint:(id)arg1 ;
-(void)removeProviderContext:(id)arg0 ;
-(void)start;


@end


#endif