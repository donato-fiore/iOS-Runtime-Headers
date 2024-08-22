// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPDEVICECONTROLLERXPCPROXYHANDLE_H
#define CHIPDEVICECONTROLLERXPCPROXYHANDLE_H

@class NSXPCConnection;
@protocol CHIPDeviceControllerServerProtocol;

#import <Foundation/Foundation.h>


@interface CHIPDeviceControllerXPCProxyHandle : NSObject

@property (readonly, nonatomic, getter=proxy) NSObject<CHIPDeviceControllerServerProtocol> *proxy;
@property (readonly, weak, nonatomic) NSXPCConnection *xpcConnection; // ivar: _xpcConnection


-(id)initWithXPCConnection:(id)arg0 ;
-(void)dealloc;


@end


#endif