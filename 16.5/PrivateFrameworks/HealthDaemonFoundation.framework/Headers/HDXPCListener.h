// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDXPCLISTENER_H
#define HDXPCLISTENER_H

@class NSXPCListener, NSMapTable, NSArray, NSString, NSXPCListenerEndpoint;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, HDXPCListenerClientProvider, HDXPCListenerDelegate;

#import <Foundation/Foundation.h>


@interface HDXPCListener : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_underlyingListener;
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSMapTable *_exportedObjectsByClient;
}


@property (readonly, copy) NSArray *allClients;
@property (weak, nonatomic) NSObject<HDXPCListenerClientProvider> *clientProvider; // ivar: _clientProvider
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDXPCListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSXPCListenerEndpoint *endpoint;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *label; // ivar: _label
@property (readonly) Class superclass;


+(id)serviceListener;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(id)initWithLabel:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 ;
-(id)initWithUnderlyingListener:(id)arg0 label:(id)arg1 ;
-(void)_handleConnectionInvalidationForClient:(id)arg0 exportedObject:(id)arg1 ;
-(void)_handleInterruptionWithClient:(id)arg0 exportedObject:(id)arg1 ;
-(void)_handleInvalidationWithClient:(id)arg0 exportedObject:(id)arg1 ;
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setConnectionQueue:(id)arg0 ;
-(void)setQueue:(id)arg0 ;


@end


#endif