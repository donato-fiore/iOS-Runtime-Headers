// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _SYDEVICEMONITOR_H
#define _SYDEVICEMONITOR_H

@class NSMutableSet, NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _SYDeviceMonitor : NSObject {
    NSMutableSet *_devices;
    NSUUID *_currentTargetDeviceUUID;
    NSObject<OS_dispatch_queue> *_syncQ;
}




+(id)sharedInstance;
-(id)allDevices;
-(id)currentTargetableDevice;
-(id)deviceForNRDevice:(id)arg0 ;
-(id)deviceForPairingID:(id)arg0 ;
-(id)init;
-(void)_clearDeviceList;
-(void)_deviceDidBecomeActive:(id)arg0 ;
-(void)_deviceDidBecomeInactive:(id)arg0 ;
-(void)_rebuildDeviceList;
-(void)addNRDevice:(id)arg0 ;
-(void)deviceBecameTargetable:(id)arg0 ;
-(void)removeNRDevice:(id)arg0 ;


@end


#endif