// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTDEVICECAPABILITIESXPCDISPATCHER_H
#define GTDEVICECAPABILITIESXPCDISPATCHER_H

@protocol GTDeviceCapabilitiesXPCDispatcher, GTDeviceCapabilities;


#import "GTXPCDispatcher.h"

@interface GTDeviceCapabilitiesXPCDispatcher : GTXPCDispatcher <GTDeviceCapabilitiesXPCDispatcher>

 {
    id<GTDeviceCapabilities> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)daemonDeviceCapabilities:(id)arg0 replyConnection:(id)arg1 ;
-(void)gpuToolsVersionQuery:(id)arg0 replyConnection:(id)arg1 ;
-(void)inferiorEnvironment_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif