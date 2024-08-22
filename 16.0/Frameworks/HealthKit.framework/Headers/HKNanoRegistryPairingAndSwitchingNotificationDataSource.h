// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKNANOREGISTRYPAIRINGANDSWITCHINGNOTIFICATIONDATASOURCE_H
#define HKNANOREGISTRYPAIRINGANDSWITCHINGNOTIFICATIONDATASOURCE_H

@class NRPairedDeviceRegistry;


#import "HKObserverBridge.h"

@interface HKNanoRegistryPairingAndSwitchingNotificationDataSource : HKObserverBridge {
    NRPairedDeviceRegistry *_pairedDeviceRegistry;
}




-(id)_notificationCenter;
-(id)_pairingChangeNotifications;
-(id)initWithPairedDeviceRegistry:(id)arg0 ;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(id)pairedDeviceRegistry;
-(void)registerObserverForDevicePairingChanges:(id)arg0 block:(id)arg1 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;
-(void)unregisterObserverForDevicePairingChanges:(id)arg0 ;


@end


#endif