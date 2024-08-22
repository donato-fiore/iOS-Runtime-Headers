// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDNOTIFICATIONREGISTRYCOREDATAADAPTER_H
#define HMDNOTIFICATIONREGISTRYCOREDATAADAPTER_H

@class HMFObject, NSSet, NSString;
@protocol HMFLogging;


#import "HMDHome.h"

@interface HMDNotificationRegistryCoreDataAdapter : HMFObject <HMFLogging>



@property (readonly, copy) NSSet *characteristicRegistrations;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak) HMDHome *home; // ivar: _home
@property (readonly) NSSet *mediaRegistrations;
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)_deleteAllCharacteristicRegistrationsWithContext:(id)arg0 ;
-(BOOL)_deleteAllMKFRegistrationsForMediaProfileUUID:(id)arg0 withMediaProperty:(id)arg1 hmcContext:(id)arg2 ;
-(BOOL)_deleteAllRegistrationsForCharacteristicIIDs:(id)arg0 withAccessoryUUID:(id)arg1 hmcContext:(id)arg2 ;
-(BOOL)_deleteAllRegistrationsWithEntityName:(id)arg0 withHomeKeypath:(id)arg1 hmcContext:(id)arg2 ;
-(BOOL)_insertNotificationRegistrationForCharacteristic:(id)arg0 deviceIdsDestination:(id)arg1 user:(id)arg2 mkfCharacteristic:(id)arg3 context:(id)arg4 ;
-(BOOL)_insertNotificationRegistrationForMediaProperty:(id)arg0 mediaProfile:(id)arg1 deviceIdsDestination:(id)arg2 user:(id)arg3 accessory:(id)arg4 context:(id)arg5 ;
-(BOOL)disableNotificationForMediaProfile:(id)arg0 mediaProperties:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3 ;
-(BOOL)enableNotificationForMediaProfile:(id)arg0 mediaProperties:(id)arg1 user:(id)arg2 deviceIdsDestination:(id)arg3 ;
-(BOOL)enableNotificationsForCharacteristics:(id)arg0 user:(id)arg1 deviceIdsDestination:(id)arg2 ;
-(BOOL)removeRegistrationsForMediaProfile:(id)arg0 ;
-(id)_fetchMKFCharacteristicsFromHMDCharacteristics:(id)arg0 context:(id)arg1 ;
-(id)_fetchMKFHAPAccessoryWithUUID:(id)arg0 context:(id)arg1 ;
-(id)_fetchMKFRegistrationsForHMDCharacteristics:(id)arg0 context:(id)arg1 ;
-(id)_fetchMKFRegistrationsForMediaProfileUUID:(id)arg0 withMediaProperty:(id)arg1 context:(id)arg2 ;
-(id)_fetchMKFRegistrationsWithUserUUID:(id)arg0 withCharacteristicIIDs:(id)arg1 withAccessoryUUID:(id)arg2 withDeviceIdsDestination:(id)arg3 withPrefetchPaths:(id)arg4 context:(id)arg5 ;
-(id)_fetchMKFRegistrationsWithUserUUID:(id)arg0 withCharacteristicIIDs:(id)arg1 withAccessoryUUIDs:(id)arg2 withDeviceIdsDestination:(id)arg3 withPrefetchPaths:(id)arg4 context:(id)arg5 ;
-(id)_fetchMKFRegistrationsWithUserUUID:(id)arg0 withMediaProfileUUID:(id)arg1 withMediaPropertyIn:(id)arg2 withDeviceIdsDestination:(id)arg3 withAccessoryUUID:(id)arg4 withPrefetchPaths:(id)arg5 context:(id)arg6 ;
-(id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg0 withCharacteristicIIDs:(id)arg1 withAccessoryUUID:(id)arg2 withDeviceIdsDestination:(id)arg3 withPrefetchPaths:(id)arg4 outUser:(*id)arg5 context:(id)arg6 ;
-(id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg0 withCharacteristicIIDs:(id)arg1 withAccessoryUUIDs:(id)arg2 withDeviceIdsDestination:(id)arg3 withPrefetchPaths:(id)arg4 outUser:(*id)arg5 context:(id)arg6 ;
-(id)_fetchMKFUserAndRegistrationsWithUserUUID:(id)arg0 withMediaProfileUUID:(id)arg1 withMediaPropertyIn:(id)arg2 withDeviceIdsDestination:(id)arg3 withAccessoryUUID:(id)arg4 withPrefetchPaths:(id)arg5 outUser:(*id)arg6 context:(id)arg7 ;
-(id)_fetchMKFUserWithUUID:(id)arg0 context:(id)arg1 ;
-(id)_fetchRequestForAllCharacteristicRegistrations;
-(id)_fetchRequestForAllMediaProfileRegistrations;
-(id)_fetchRequestForCharacteristicRegistrationsWithoutAllowedDestinations:(id)arg0 ;
-(id)_fetchRequestForMediaProfileRegistrationsWithoutAllowedDestinations:(id)arg0 ;
-(id)_processDisableCharacteristicsRequest:(id)arg0 registrationsForAccessory:(id)arg1 context:(id)arg2 ;
-(id)_processEnableCharacteristicsRequest:(id)arg0 mkfUser:(id)arg1 registrationsForAccessory:(id)arg2 context:(id)arg3 ;
-(id)_processGroupedCharacteristicsRequests:(id)arg0 user:(id)arg1 destination:(id)arg2 context:(id)arg3 ;
-(id)_requestToFetchMKFRegistrationsWithMediaProfileUUID:(id)arg0 withMediaProperty:(id)arg1 context:(id)arg2 ;
-(id)destinationsToNotifyForCharacteristic:(id)arg0 ;
-(id)destinationsToNotifyForMediaPropertyResponse:(id)arg0 ;
-(id)disableNotificationForCharacteristics:(id)arg0 user:(id)arg1 deviceIdsDestination:(id)arg2 ;
-(id)initWithHome:(id)arg0 ;
-(id)mediaPropertiesRegisteredForMediaProfileUniqueIdentifier:(id)arg0 ;
-(id)processCharacteristicsRequests:(id)arg0 ;
-(id)removeAllMediaProfileRegistrations;
-(id)removeCharacteristicRegistrationsWithoutAllowedDestinations:(id)arg0 ;
-(id)removeMediaRegistrationsWithoutAllowedDestinations:(id)arg0 ;
-(id)shortDescription;
-(void)removeAllCharacteristicRegistrations;
-(void)removeRegistrationsForCharacteristics:(id)arg0 ;


@end


#endif