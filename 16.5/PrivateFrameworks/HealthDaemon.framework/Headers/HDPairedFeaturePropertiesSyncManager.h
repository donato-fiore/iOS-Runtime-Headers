// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDPAIREDFEATUREPROPERTIESSYNCMANAGER_H
#define HDPAIREDFEATUREPROPERTIESSYNCMANAGER_H

@class HKFeatureAttributes, HKCountrySet, HKPairedFeatureAttributes, NSString;
@protocol HDRegionAvailabilityProvidingDelegate, HDPairedFeatureAttributesProviding, HDAllowedCountriesDataSource, HDFeaturePropertiesWriting, HDAllowedCountriesDataSourceObserver;

#import <Foundation/Foundation.h>

#import "HDLocalCountrySetAvailabilityProvider.h"

@interface HDPairedFeaturePropertiesSyncManager : NSObject <HDRegionAvailabilityProvidingDelegate, HDPairedFeatureAttributesProviding, HDAllowedCountriesDataSource>

 {
    HKFeatureAttributes *_localFeatureAttributes;
    HDLocalCountrySetAvailabilityProvider *_localCountrySetAvailabilityProvider;
    id *_activeRemoteReadSourceProvider;
    id *_remoteReadSourceForDeviceProvider;
    id<HDFeaturePropertiesWriting> *_localWriteSource;
    int _nanoPreferencesSyncChangeNotificationToken;
}


@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HDAllowedCountriesDataSourceObserver> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureIdentifier; // ivar: _featureIdentifier
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly) Class superclass;


-(id)initWithFeatureIdentifier:(id)arg0 localFeatureAttributes:(id)arg1 localCountrySetAvailabilityProvider:(id)arg2 ;
// -(id)initWithFeatureIdentifier:(id)arg0 localFeatureAttributes:(id)arg1 localCountrySetAvailabilityProvider:(id)arg2 activeRemoteReadSourceProvider:(id)arg3 remoteReadSourceForDeviceProvider:(unk)arg4 localWriteSource:(id)arg5  ;
-(id)pairedFeatureAttributesForPairedDevice:(id)arg0 ;
-(id)remoteCountrySetForDevice:(id)arg0 ;
-(void)dealloc;
-(void)regionAvailabilityProvidingDidUpdate:(id)arg0 ;
-(void)reloadLocalCountrySetWithCompletion:(id)arg0 ;
-(void)synchronizeLocalProperties;


@end


#endif