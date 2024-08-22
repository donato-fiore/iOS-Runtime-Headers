// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTCC14SIRIKITRUNTIME25SHAREDFLOWPLUGINXPCSERVER8LISTENER_H
#define _TTCC14SIRIKITRUNTIME25SHAREDFLOWPLUGINXPCSERVER8LISTENER_H

@protocol NSXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface _TtCC14SiriKitRuntime25SharedFlowPluginXPCServer8Listener : NSObject <NSXPCListenerDelegate>

 {
    ? sharedFlowPluginService;
    ? listener;
}




-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;


@end


#endif