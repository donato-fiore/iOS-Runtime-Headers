// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERSTATECACHECONTAINER_H
#define MTRCLUSTERSTATECACHECONTAINER_H

@class NSNumber;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "MTRBaseDevice.h"
#import "MTRDeviceControllerXPCConnection.h"

@interface MTRClusterStateCacheContainer : NSObject

@property (retain, nonatomic) MTRBaseDevice *baseDevice; // ivar: _baseDevice
@property *void cppClusterStateCache; // ivar: _cppClusterStateCache
@property (copy, nonatomic) NSNumber *deviceID; // ivar: _deviceID
@property BOOL shouldUseXPC; // ivar: _shouldUseXPC
@property (weak, nonatomic) MTRDeviceControllerXPCConnection *xpcConnection; // ivar: _xpcConnection
@property (retain, nonatomic) NSObject<NSCopying> *xpcControllerID; // ivar: _xpcControllerID


-(id)init;
-(void)readAttributesWithEndpointID:(id)arg0 clusterID:(id)arg1 attributeID:(id)arg2 queue:(id)arg3 completion:(id)arg4 ;
-(void)setXPCConnection:(id)arg0 controllerID:(id)arg1 deviceID:(id)arg2 ;


@end


#endif