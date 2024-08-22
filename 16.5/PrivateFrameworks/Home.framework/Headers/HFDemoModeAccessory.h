// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFDEMOMODEACCESSORY_H
#define HFDEMOMODEACCESSORY_H

@class HMAccessory, NSString, NSSet, HMRoom, HMHome, NSUUID, NSPredicate;
@protocol HFAccessoryRepresentable, HFUserNotificationServiceSettingsProviding, HFHomeKitObject;


#import "HFAccessoryType.h"
#import "HFServiceNameComponents.h"
#import "HFUserNotificationServiceSettings.h"

@interface HFDemoModeAccessory : HMAccessory <HFAccessoryRepresentable, HFUserNotificationServiceSettingsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *firmwareVersion;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property (readonly, nonatomic) NSSet *hf_associatedAccessories;
@property (readonly, nonatomic) BOOL hf_canSpanMultipleRooms;
@property (readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property (readonly, nonatomic) NSSet *hf_containedProfiles;
@property (readonly, nonatomic) NSSet *hf_containedServices;
@property (readonly, nonatomic) BOOL hf_effectiveIsFavorite;
@property (readonly, nonatomic) BOOL hf_effectiveShowInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_hasSetFavorite;
@property (readonly, nonatomic) BOOL hf_hasSetShowInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_hasSetVisibleInHomeStatus;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *hf_homeKitObject;
@property (readonly, nonatomic) BOOL hf_isFavorite;
@property (readonly, nonatomic) BOOL hf_isForcedVisibleInHomeStatus;
@property (readonly, nonatomic) BOOL hf_isVisibleInHomeStatus;
@property (readonly, nonatomic) Class hf_itemClass;
@property (readonly, nonatomic) HMRoom *hf_safeRoom;
@property (readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property (readonly, nonatomic) BOOL hf_shouldShowInFavorites;
@property (readonly, nonatomic) BOOL hf_showInHomeDashboard;
@property (readonly, nonatomic) BOOL hf_supportsHomeStatus;
@property (readonly, nonatomic) NSString *hf_tileSize;
@property (readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSUUID *internalUniqueIdentifier; // ivar: _internalUniqueIdentifier
@property (nonatomic) BOOL isInternallyCertified; // ivar: _isInternallyCertified
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *model;
@property (retain, nonatomic) NSPredicate *notificationCondition; // ivar: _notificationCondition
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)_hasValidKeys:(id)arg0 ;
+(id)_demoModeAccessoryTypeToHomeKitAccessoryType;
+(id)accessoryWithContentsOfDictionary:(id)arg0 forHome:(id)arg1 ;
-(BOOL)_isAppleInternalAccessory;
-(BOOL)_shouldShowAppleInternalManufacturerInfo;
-(BOOL)hf_isMediaAccessory;
-(BOOL)hf_shouldShowSoftwareUpdateInfo;
-(BOOL)isReachable;
-(NSInteger)certificationStatus;
-(id)category;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hf_updateIsFavorite:(BOOL)arg0 ;
-(id)hf_updateUserNotificationSettings:(id)arg0 ;
-(id)initWithContentsOfDictionary:(id)arg0 forHome:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)name;
-(id)room;
-(id)serialNumber;
-(id)services;
-(id)symptomsHandler;
-(void)_updateManufacturerInfoWithString:(id)arg0 forKey:(id)arg1 ;


@end


#endif