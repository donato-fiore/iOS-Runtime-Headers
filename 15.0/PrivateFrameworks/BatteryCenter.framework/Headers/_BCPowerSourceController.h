// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _BCPOWERSOURCECONTROLLER_H
#define _BCPOWERSOURCECONTROLLER_H

@class NSMapTable, NSArray, NSString;
@protocol BCBatteryDeviceObservable, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _BCPowerSourceController : NSObject <BCBatteryDeviceObservable>

 {
    int _powerSourceBatteryChangeNotifyToken;
    int _powerSourceTimeRemainingNotifyToken;
    int _accPowerSourceNotifyToken;
    int _accPowerSourceTimeRemainingNotifyToken;
    int _accAttachNotifyToken;
    int _lowPowerModeNotifyToken;
    BOOL _lowPowerModeActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSMapTable *_observersToQueues;
}


@property (readonly, copy, nonatomic) NSArray *connectedDevices;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)initialize;
-(BOOL)_isDevicePartOfPair:(id)arg0 ;
-(BOOL)_isLowPowerModeActive;
-(BOOL)_shouldCoalesceDevices:(id)arg0 minimumPercentCharge:(*NSInteger)arg1 ;
-(BOOL)_shouldConsiderDeviceWithPowerSourceDescription:(id)arg0 ;
-(NSInteger)_lowBatteryLevelForCurrentDevice;
-(NSInteger)_lowBatteryLevelForVendor:(NSInteger)arg0 accessoryCategory:(NSUInteger)arg1 transportType:(NSInteger)arg2 ;
-(NSInteger)_powerSourceStateFromPowerSourceStateString:(id)arg0 ;
-(NSInteger)_transportTypeFromPowerSourceTransportTypeString:(id)arg0 ;
-(NSInteger)_vendorFromPowerSourceDescriptionVendorIdentifier:(id)arg0 transportType:(NSInteger)arg1 ;
-(NSUInteger)_accessoryCategoryFromPowerSourceAccessoryCategory:(id)arg0 partType:(NSUInteger)arg1 transportType:(NSInteger)arg2 vendor:(NSInteger)arg3 productIdentifier:(NSInteger)arg4 ;
-(NSUInteger)_partFromPowerSourcePartIdentifier:(id)arg0 ;
-(id)_deviceByCoalescingDevice:(id)arg0 ;
-(id)_identifierFromPowerSourceDescription:(id)arg0 ;
-(id)_nameForCurrentDevice;
-(id)_nameForVendor:(NSInteger)arg0 accessoryCategory:(NSUInteger)arg1 name:(id)arg2 partName:(id)arg3 isInternal:(BOOL)arg4 ;
-(id)_orderedDevicesFromPowerSourcesBlob:(*void)arg0 powerSourcesList:(struct __CFArray *)arg1 ;
-(id)init;
-(int)_displayChargePercentForCurrentCapacity:(id)arg0 andMaxCapacity:(id)arg1 updateZeroValue:(BOOL)arg2 ;
-(int)_registerForNotification:(char *)arg0 token:(*int)arg1 queue:(id)arg2 handler:(id)arg3 ;
-(int)_registerForPowerSourceChangeNotification:(char *)arg0 token:(*int)arg1 queue:(id)arg2 ;
-(void)_beginPowerSourceObservingIfNecessary;
-(void)_endPowerSourceObserving;
-(void)_handleLowPowerModeChanged:(int)arg0 ;
// -(void)_notifyObserver:(id)arg0 block:(id)arg1 queue:(unk)arg2  ;
-(void)_notifyObserversWithBlock:(id)arg0 ;
-(void)_queryConnectedDevices;
-(void)_updateLowPowerModeState;
-(void)addBatteryDeviceObserver:(id)arg0 queue:(id)arg1 ;
-(void)dealloc;
-(void)removeBatteryDeviceObserver:(id)arg0 ;


@end


#endif