// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFDEMOMODEACCESSORY_H
#define HFDEMOMODEACCESSORY_H

@class HMAccessory, NSString, HMHome, NSUUID, NSPredicate;
@protocol HFUserNotificationServiceSettingsProviding;


#import "HFUserNotificationServiceSettings.h"

@interface HFDemoModeAccessory : HMAccessory <HFUserNotificationServiceSettingsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *firmwareVersion;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) HFUserNotificationServiceSettings *hf_userNotificationSettings;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSUUID *internalUniqueIdentifier; // ivar: _internalUniqueIdentifier
@property (nonatomic) BOOL isInternallyCertified; // ivar: _isInternallyCertified
@property (readonly, copy, nonatomic) NSString *manufacturer;
@property (readonly, copy, nonatomic) NSString *model;
@property (retain, nonatomic) NSPredicate *notificationCondition; // ivar: _notificationCondition
@property (nonatomic, getter=areNotificationsEnabled) BOOL notificationsEnabled; // ivar: _notificationsEnabled
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;


+(BOOL)_hasValidKeys:(id)arg0 ;
+(id)accessoryWithContentsOfDictionary:(id)arg0 forHome:(id)arg1 ;
-(BOOL)_isAppleInternalAccessory;
-(BOOL)_shouldShowAppleInternalManufacturerInfo;
-(BOOL)hf_hasSetFavorite;
-(BOOL)hf_isFavorite;
-(BOOL)hf_shouldShowInFavorites;
-(BOOL)hf_shouldShowSoftwareUpdateInfo;
-(BOOL)isReachable;
-(NSInteger)certificationStatus;
-(id)category;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)hf_serviceNameComponents;
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