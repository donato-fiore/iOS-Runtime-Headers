// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRATTRIBUTECACHECONTAINER_H
#define MTRATTRIBUTECACHECONTAINER_H

@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRDeviceControllerXPCConnection.h"

@interface MTRAttributeCacheContainer : NSObject

@property *void cppAttributeCache; // ivar: _cppAttributeCache
@property (nonatomic) NSUInteger deviceId; // ivar: _deviceId
@property BOOL shouldUseXPC; // ivar: _shouldUseXPC
@property (weak, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<NSCopying> *xpcControllerId; // ivar: _xpcControllerId


-(id)init;
-(void)readAttributeWithEndpointId:(id)arg0 clusterId:(id)arg1 attributeId:(id)arg2 clientQueue:(id)arg3 completion:(id)arg4 ;
-(void)setXPCConnection:(id)arg0 controllerId:(id)arg1 deviceId:(NSUInteger)arg2 ;


@end


#endif