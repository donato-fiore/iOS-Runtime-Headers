// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDALLOWEDCOUNTRIESDATASOURCEWITHNANOREGISTRYFALLBACK_H
#define HDALLOWEDCOUNTRIESDATASOURCEWITHNANOREGISTRYFALLBACK_H

@class NSString, HKCountrySet;
@protocol HDAllowedCountriesDataSource, HDPairedDeviceCapabilityProviding, OS_os_log, HDAllowedCountriesDataSourceObserver;

#import <Foundation/Foundation.h>


@interface HDAllowedCountriesDataSourceWithNanoRegistryFallback : NSObject <HDAllowedCountriesDataSource>

 {
    id<HDAllowedCountriesDataSource> *_allowedCountriesDataSource;
    id<HDPairedDeviceCapabilityProviding> *_pairedDeviceCapabilityProvider;
    NSString *_devicePropertyName;
    NSObject<OS_os_log> *_loggingCategory;
    BOOL _shouldReturnLocalAvailabilityForNilDeviceRegions;
}


@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDAllowedCountriesDataSourceObserver> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly) Class superclass;


-(id)initWithAllowedCountriesDataSource:(id)arg0 pairedDeviceCapabilityProvider:(id)arg1 availableRegionsDevicePropertyName:(id)arg2 loggingCategory:(id)arg3 shouldReturnLocalAvailabilityForNilDeviceRegions:(BOOL)arg4 ;
-(id)remoteCountrySetForDevice:(id)arg0 ;
-(void)reloadLocalCountrySetWithCompletion:(id)arg0 ;


@end


#endif