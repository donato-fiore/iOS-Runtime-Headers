// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTMTLCAPTURESERVICEXPCPROXY_H
#define GTMTLCAPTURESERVICEXPCPROXY_H

@class NSSet, NSMutableDictionary;
@protocol GTMTLCaptureService, OS_os_log;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"
#import "GTURLAccessProviderXPCProxy.h"

@interface GTMTLCaptureServiceXPCProxy : NSObject <GTMTLCaptureService>

 {
    NSObject<OS_os_log> *_log;
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
    GTURLAccessProviderXPCProxy *_urlService;
    NSMutableDictionary *_observerIdToPort;
}




-(BOOL)highlight:(NSUInteger)arg0 ;
-(BOOL)respondsToSelector:(SEL)arg0 ;
-(NSUInteger)registerObserver:(id)arg0 ;
-(id)allCaptureObjects;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)abort;
-(void)deregisterObserver:(NSUInteger)arg0 ;
-(void)resume;
-(void)startWithDescriptor:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;


@end


#endif