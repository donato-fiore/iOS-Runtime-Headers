// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDSPAIREDDEVICESTATEMONITOR_H
#define DNDSPAIREDDEVICESTATEMONITOR_H

@class IDSService, DNDAccountFeatureSupport, NSSet, NSString;
@protocol IDSServiceDelegate, DNDSSysdiagnoseDataProvider, OS_dispatch_source, OS_dispatch_queue, DNDSPairedDeviceStateMonitorDelegate;

#import <Foundation/Foundation.h>

#import "DNDSPairedDevice.h"

@interface DNDSPairedDeviceStateMonitor : NSObject <IDSServiceDelegate, DNDSSysdiagnoseDataProvider>

 {
    NSObject<OS_dispatch_source> *_coalescingTimer;
    NSObject<OS_dispatch_queue> *_queue;
    IDSService *_localService;
    IDSService *_cloudService;
    int _pairedDeviceDidChangeNotificationToken;
}


@property (readonly, copy, nonatomic) DNDAccountFeatureSupport *accountFeatureSupport;
@property (copy) NSSet *cloudDevices; // ivar: _cloudDevices
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<DNDSPairedDeviceStateMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) DNDSPairedDevice *pairedDevice; // ivar: _pairedDevice
@property (copy) DNDSPairedDevice *previousPairedDevice; // ivar: _previousPairedDevice
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;


-(id)_getCurrentPairedDevice;
-(id)initWithLocalIDSService:(id)arg0 cloudIDSService:(id)arg1 ;
-(id)pairedDeviceForDeviceIdentifier:(id)arg0 ;
-(id)sysdiagnoseDataForDate:(id)arg0 redacted:(BOOL)arg1 ;
-(void)_beginMonitoringForChanges;
-(void)_endMonitoringForChanges;
-(void)_pairedDeviceStateChanged:(id)arg0 ;
-(void)_queue_informDelegatesOfPairedStateChange;
-(void)_queue_updateCloudDevices;
-(void)_queue_updatePairedState;
-(void)dealloc;
-(void)resume;
-(void)service:(id)arg0 devicesChanged:(id)arg1 ;
-(void)service:(id)arg0 nearbyDevicesChanged:(id)arg1 ;


@end


#endif