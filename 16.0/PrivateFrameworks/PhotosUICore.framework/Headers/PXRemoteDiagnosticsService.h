// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXREMOTEDIAGNOSTICSSERVICE_H
#define PXREMOTEDIAGNOSTICSSERVICE_H

@class NSXPCListener, NSString;
@protocol NSXPCListenerDelegate, OS_dispatch_queue, PXDiagnosticsAgent;

#import <Foundation/Foundation.h>


@interface PXRemoteDiagnosticsService : NSObject <NSXPCListenerDelegate>

 {
    NSXPCListener *_listener;
    NSObject<OS_dispatch_queue> *_diagnosticsQueue;
}


@property (retain, nonatomic) NSObject<PXDiagnosticsAgent> *agent; // ivar: _agent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)startServerOnInternalDevicesWithAgentClass:(Class)arg0 ;
-(BOOL)listener:(id)arg0 shouldAcceptNewConnection:(id)arg1 ;
-(id)init;
-(void)_startListening;


@end


#endif