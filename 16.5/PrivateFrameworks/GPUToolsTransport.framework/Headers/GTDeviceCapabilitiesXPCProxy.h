// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTDEVICECAPABILITIESXPCPROXY_H
#define GTDEVICECAPABILITIESXPCPROXY_H

@class NSSet;
@protocol GTDeviceCapabilities;

#import <Foundation/Foundation.h>

#import "GTServiceConnection.h"

@interface GTDeviceCapabilitiesXPCProxy : NSObject <GTDeviceCapabilities>

 {
    GTServiceConnection *_connection;
    NSSet *_ignoreMethods;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)daemonDeviceCapabilities;
-(id)gpuToolsVersionQuery;
-(id)inferiorEnvironment:(id)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;


@end


#endif