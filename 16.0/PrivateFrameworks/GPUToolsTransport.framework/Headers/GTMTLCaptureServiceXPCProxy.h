// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTMTLCAPTURESERVICEXPCPROXY_H
#define GTMTLCAPTURESERVICEXPCPROXY_H

@class NSSet;
@protocol GTMTLCaptureService;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"
#import "GTURLAccessProviderXPCProxy.h"

@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService>

 {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    GTURLAccessProviderXPCProxy *_urlService;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)allCaptureObjects;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)abort;
-(void)dealloc;
-(void)resume;
-(void)setDelegate:(id)arg0 ;
-(void)setupWithDescriptor:(id)arg0 ;
-(void)signalInterposeSemaphore;
-(void)startWithCompletedHandler:(id)arg0 ;
-(void)stop;


@end


#endif