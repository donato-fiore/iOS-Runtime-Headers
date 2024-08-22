// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRDEVICECONTROLLERXPCPROXYHANDLE_H
#define MTRDEVICECONTROLLERXPCPROXYHANDLE_H

@class NSXPCConnection;
@protocol MTRDeviceControllerServerProtocol;

#import <Foundation/Foundation.h>


@interface MTRDeviceControllerXPCProxyHandle : NSObject

@property (readonly, nonatomic, getter=proxy) NSObject<MTRDeviceControllerServerProtocol> *proxy;
@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithXPCConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif