// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDREGIONAVAILABILITYDATASOURCEWITHNANOREGISTRYFALLBACK_H
#define HDREGIONAVAILABILITYDATASOURCEWITHNANOREGISTRYFALLBACK_H

@class NSString, HKCountrySet;
@protocol HDRegionAvailabilityDataSource, HDPairedDeviceCapabilityProviding, OS_os_log;

#import <Foundation/Foundation.h>


@interface HDRegionAvailabilityDataSourceWithNanoRegistryFallback : NSObject <HDRegionAvailabilityDataSource>

 {
    id<HDRegionAvailabilityDataSource> *_regionAvailabilityDataSource;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceCapabilityProvider;
    NSString *_devicePropertyName;
    NSObject<OS_os_log> *_loggingCategory;
    BOOL _shouldReturnLocalAvailabilityForNilDeviceRegions;
}


@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly) Class superclass;


-(id)initWithRegionAvailabilityDataSource:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 availableRegionsDevicePropertyName:(id)arg2 loggingCategory:(id)arg3 shouldReturnLocalAvailabilityForNilDeviceRegions:(BOOL)arg4 ;
-(id)remoteCountrySetForDevice:(id)arg0 ;


@end


#endif