// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCCOMPUTEDEVICEMANAGER_H
#define TCCOMPUTEDEVICEMANAGER_H

@protocol NSObject;

#import <Foundation/Foundation.h>

#import "TCComputeDevice.h"

@interface TCComputeDeviceManager : NSObject {
    id<NSObject> *_deviceObserver;
    BOOL _forceCPU;
}


@property (retain) TCComputeDevice *defaultDevice; // ivar: _defaultDevice
@property (retain) TCComputeDevice *pipelineDevicePrimary; // ivar: _pipelineDevicePrimary
@property (retain) TCComputeDevice *pipelineDeviceSecondary; // ivar: _pipelineDeviceSecondary


+(id)sharedInstance;
-(id)initSingleton;
-(id)initWithDevices:(id)arg0 forceCPU:(BOOL)arg1 ;
-(void)dealloc;
-(void)selectDevices:(id)arg0 group1:(id)arg1 group2:(id)arg2 ;
-(void)setDevices:(id)arg0 ;


@end


#endif