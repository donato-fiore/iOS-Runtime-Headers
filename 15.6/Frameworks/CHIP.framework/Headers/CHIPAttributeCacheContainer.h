// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPATTRIBUTECACHECONTAINER_H
#define CHIPATTRIBUTECACHECONTAINER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CHIPDeviceControllerXPCConnection.h"

@interface CHIPAttributeCacheContainer : NSObject

@property *void cppAttributeCache; // ivar: _cppAttributeCache
@property (nonatomic) NSUInteger deviceId; // ivar: _deviceId
@property BOOL shouldUseXPC; // ivar: _shouldUseXPC
@property (weak, nonatomic) CHIPDeviceControllerXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<NSCopying> *xpcControllerId; // ivar: _xpcControllerId


-(id)init;
-(void)readAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 clientQueue:(id)arg3 completion:(id)arg4 ;
-(void)setXPCConnection:(id)arg0 controllerId:(id)arg1 deviceId:(NSUInteger)arg2 ;


@end


#endif