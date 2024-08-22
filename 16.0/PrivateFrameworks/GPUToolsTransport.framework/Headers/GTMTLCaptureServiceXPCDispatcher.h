// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTMTLCAPTURESERVICEXPCDISPATCHER_H
#define GTMTLCAPTURESERVICEXPCDISPATCHER_H

@protocol GTMTLCaptureServiceXPCDispatcher, GTMTLCaptureServiceDelegate, GTMTLCaptureService, GTXPCConnection;


#import "GTXPCDispatcher.h"
#import "GTURLAccessProviderXPCProxy.h"

@interface GTMTLCaptureServiceXPCDispatcher : GTXPCDispatcher <GTMTLCaptureServiceXPCDispatcher, GTMTLCaptureServiceDelegate>

 {
    id<GTMTLCaptureService> *_implInstance;
    id<GTXPCConnection> *_notifyConnection;
    GTURLAccessProviderXPCProxy *_urlService;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 notifyConnection:(id)arg2 ;
-(void)allCaptureObjects:(id)arg0 replyConnection:(id)arg1 ;
-(void)notifyCAMetalLayerListChanged:(id)arg0 ;
-(void)notifyCaptureProgress:(NSUInteger)arg0 ;
-(void)notifyMTLCaptureScopeListChanged:(id)arg0 ;
-(void)notifyMTLCommandQueueListChanged:(id)arg0 ;
-(void)notifyMTLDeviceListChanged:(id)arg0 ;
-(void)notifyUnsupportedFenum:(id)arg0 ;
-(void)setDelegate_:(id)arg0 replyConnection:(id)arg1 ;
-(void)setupWithDescriptor_:(id)arg0 replyConnection:(id)arg1 ;
-(void)signalInterposeSemaphore:(id)arg0 replyConnection:(id)arg1 ;
-(void)startWithCompletedHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)stop:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif