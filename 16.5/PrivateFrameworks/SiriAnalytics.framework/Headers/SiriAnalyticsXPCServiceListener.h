// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIANALYTICSXPCSERVICELISTENER_H
#define SIRIANALYTICSXPCSERVICELISTENER_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, SiriAnalyticsXPCConnectionHandlerDelegate;

#import <Foundation/Foundation.h>


@interface SiriAnalyticsXPCServiceListener : NSObject <NSXPCListenerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    id<SiriAnalyticsXPCConnectionHandlerDelegate> *_delegate;
    NSXPCListener *_listener;
    NSString *_entitlementsKey;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)initWithMachServiceName:(id)arg0 entitlementsKey:(id)arg1 queue:(id)arg2 delegate:(id)arg3 ;


@end


#endif