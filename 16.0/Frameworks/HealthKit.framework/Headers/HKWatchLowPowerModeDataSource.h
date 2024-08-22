// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWATCHLOWPOWERMODEDATASOURCE_H
#define HKWATCHLOWPOWERMODEDATASOURCE_H

@class NPSDomainAccessor;


#import "HKObserverBridge.h"
#import "HKDarwinNotificationDataSource.h"
#import "HKNanoRegistryPairingAndSwitchingNotificationDataSource.h"

@interface HKWatchLowPowerModeDataSource : HKObserverBridge

@property (readonly, nonatomic) NPSDomainAccessor *carouselDomainAccessor; // ivar: _carouselDomainAccessor
@property (readonly, nonatomic) HKDarwinNotificationDataSource *darwinNotificationDataSource; // ivar: _darwinNotificationDataSource
@property (readonly, nonatomic) HKNanoRegistryPairingAndSwitchingNotificationDataSource *devicePairingAndSwitchingDataSource; // ivar: _devicePairingAndSwitchingDataSource


-(BOOL)isWatchLowPowerModeEnabled;
-(id)init;
-(id)initWithCarouselDomainAccessor:(id)arg0 ;
-(id)initWithDarwinNotificationDataSource:(id)arg0 devicePairingAndSwitchingNotificationDataSource:(id)arg1 ;
-(id)initWithDarwinNotificationDataSource:(id)arg0 devicePairingAndSwitchingNotificationDataSource:(id)arg1 carouselDomainAccessor:(id)arg2 ;
-(id)makeAndRegisterBridgedObserverForKey:(id)arg0 handle:(id)arg1 ;
-(void)registerObserver:(id)arg0 onLowPowerModeChange:(id)arg1 ;
-(void)unregisterBridgedObserver:(id)arg0 forKey:(id)arg1 ;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif