// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXAIRPODSETTINGSMANAGER_H
#define AXAIRPODSETTINGSMANAGER_H

@class NSPointerArray, AXDispatchTimer, NSMutableSet, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AXAirPodSettingsManager : NSObject {
    NSPointerArray *_deviceListeners;
    *BTSessionImpl _session;
    *BTLocalDeviceImpl _localDevice;
    *BTAccessoryManagerImpl _accessoryManager;
    NSObject<OS_dispatch_queue> *_queue;
    AXDispatchTimer *_delayTimer;
    NSMutableSet *_deviceMap;
}


@property (readonly, nonatomic) NSArray *pairedAirPods;


+(id)sharedInstance;
-(BOOL)noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)arg0 ;
-(BOOL)nps_noiseCancellationEnabledWithOneUnitForDeviceAddress:(id)arg0 ;
-(float)holdDurationForDeviceAddress:(id)arg0 ;
-(float)nps_holdDurationForDeviceAddress:(id)arg0 ;
-(float)nps_tapSpeedForDeviceAddress:(id)arg0 ;
-(float)nps_toneVolumeForDeviceAddress:(id)arg0 ;
-(float)tapSpeedForDeviceAddress:(id)arg0 ;
-(id)_nps_airPodsDictionaryForPreference:(id)arg0 ;
-(id)_productIdentifierForBTDevice:(id)arg0 ;
-(id)accessibilityDomainAccessor;
-(id)disambiguationString;
-(id)initSharedInstance;
-(id)titleForSettings;
-(unsigned int)toneVolumeForDeviceAddress:(id)arg0 ;
-(void)_accessoryEventForManager:(struct BTAccessoryManagerImpl *)arg0 event:(int)arg1 device:(struct BTDeviceImpl *)arg2 state:(int)arg3 ;
-(void)_applySettings;
-(void)_applySettingsForAddress:(id)arg0 ;
-(void)_beginDetach;
-(void)_didConnectWithSession:(struct BTSessionImpl *)arg0 ;
-(void)_didDisconnect;
-(void)_nps_updateAirPodsDictionaryForPreference:(id)arg0 deviceAddress:(id)arg1 value:(id)arg2 ;
-(void)_probeAccessories;
-(void)_retrieveSettingsForAddress:(id)arg0 ;
-(void)_retrieveSettingsFromNewDevices:(id)arg0 ;
-(void)_serviceEventForDevice:(struct BTDeviceImpl *)arg0 serviceMask:(unsigned int)arg1 eventType:(int)arg2 specificEvent:(unsigned int)arg3 result:(int)arg4 ;
-(void)_sessionEventForSession:(struct BTSessionImpl *)arg0 event:(int)arg1 result:(int)arg2 ;
-(void)dealloc;
-(void)nps_setHoldDuration:(float)arg0 forDeviceAddress:(id)arg1 ;
-(void)nps_setNoiseCancellationEnabledWithOneUnit:(BOOL)arg0 forDeviceAddress:(id)arg1 ;
-(void)nps_setTapSpeed:(float)arg0 forDeviceAddress:(id)arg1 ;
-(void)nps_setToneVolume:(float)arg0 forDeviceAddress:(id)arg1 ;
-(void)setHoldDuration:(float)arg0 forDeviceAddress:(id)arg1 ;
-(void)setNoiseCancellationEnabledWithOneUnit:(BOOL)arg0 forDeviceAddress:(id)arg1 ;
-(void)setTapSpeed:(float)arg0 forDeviceAddress:(id)arg1 ;
-(void)setToneVolume:(unsigned int)arg0 forDeviceAddress:(id)arg1 ;
-(void)start;


@end


#endif