// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLCAPTURESERVICEXPCDISPATCHER_H
#define GTMTLCAPTURESERVICEXPCDISPATCHER_H

@protocol GTMTLCaptureServiceXPCDispatcher, GTMTLCaptureService;


#import "GTXPCDispatcher.h"
#import "GTURLAccessProviderXPCProxy.h"

@interface GTMTLCaptureServiceXPCDispatcher : GTXPCDispatcher <GTMTLCaptureServiceXPCDispatcher>

 {
    id<GTMTLCaptureService> *_implInstance;
    GTURLAccessProviderXPCProxy *_urlService;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 notifyConnection:(id)arg2 ;
-(void)allCaptureObjects:(id)arg0 replyConnection:(id)arg1 ;
-(void)deregisterObserver_:(id)arg0 replyConnection:(id)arg1 ;
-(void)highlight_:(id)arg0 replyConnection:(id)arg1 ;
-(void)registerObserver_:(id)arg0 replyConnection:(id)arg1 ;
-(void)startWithDescriptor_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)stop:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif