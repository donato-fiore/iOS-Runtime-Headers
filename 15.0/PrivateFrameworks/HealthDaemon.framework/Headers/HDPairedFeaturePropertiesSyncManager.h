// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDPAIREDFEATUREPROPERTIESSYNCMANAGER_H
#define HDPAIREDFEATUREPROPERTIESSYNCMANAGER_H

@class NSString, HKFeatureAttributes, HKCountrySet, HKObserverSet, HKPairedFeatureAttributes;
@protocol HDPairedFeatureAttributesProviding, HDObservableRegionAvailabilityDataSource, HDFeaturePropertiesWriting;

#import <Foundation/Foundation.h>


@interface HDPairedFeaturePropertiesSyncManager : NSObject <HDPairedFeatureAttributesProviding, HDObservableRegionAvailabilityDataSource>

 {
    NSString *_featureIdentifier;
    HKFeatureAttributes *_localFeatureAttributes;
    HKCountrySet *_localCountrySet;
    id *_activeRemoteReadSourceProvider;
    id *_remoteReadSourceForDeviceProvider;
    id<HDFeaturePropertiesWriting> *_localWriteSource;
    int _nanoPreferencesSyncChangeNotificationToken;
    HKObserverSet *_observers;
}


@property (readonly, copy, nonatomic) HKCountrySet *activeRemoteCountrySet;
@property (readonly, copy, nonatomic) HKPairedFeatureAttributes *currentPairedFeatureAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HKCountrySet *localCountrySet;
@property (readonly) Class superclass;


-(id)initWithFeatureIdentifier:(id)arg0 localFeatureAttributes:(id)arg1 localCountrySet:(id)arg2 ;
// -(id)initWithFeatureIdentifier:(id)arg0 localFeatureAttributes:(id)arg1 localCountrySet:(id)arg2 activeRemoteReadSourceProvider:(id)arg3 remoteReadSourceForDeviceProvider:(unk)arg4 localWriteSource:(id)arg5  ;
-(id)pairedFeatureAttributesForPairedDevice:(id)arg0 ;
-(id)remoteCountrySetForDevice:(id)arg0 ;
-(void)dealloc;
-(void)registerObserver:(id)arg0 queue:(id)arg1 ;
-(void)synchronizeLocalProperties;
-(void)unregisterObserver:(id)arg0 ;


@end


#endif