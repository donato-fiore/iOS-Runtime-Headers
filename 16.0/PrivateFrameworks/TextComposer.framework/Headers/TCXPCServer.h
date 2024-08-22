// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCXPCSERVER_H
#define TCXPCSERVER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TCTextServer.h"

@interface TCXPCServer : NSObject <NSXPCListenerDelegate>

 {
    TCTextServer *_server;
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithTextServer:(id)arg0 ;
-(void)invalidate;
-(void)run;


@end


#endif