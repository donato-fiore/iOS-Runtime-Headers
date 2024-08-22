// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BBSECTIONINFO_H
#define BBSECTIONINFO_H

@class NSString, NSDate, NSArray, NSData, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "BBSectionInfoSettings.h"
#import "BBSectionIcon.h"
#import "BBMuteAssertion.h"
#import "BBSectionInfo.h"

@interface BBSectionInfo : NSObject <NSCopying, NSSecureCoding>

 {
    BBSectionInfoSettings *_managedSectionInfoSettings;
}


@property (nonatomic) NSUInteger alertType;
@property (nonatomic) BOOL allowsNotifications;
@property (nonatomic) NSInteger announceSetting;
@property (copy, nonatomic) NSString *appName; // ivar: _appName
@property (nonatomic) NSDate *authorizationExpirationDate;
@property (nonatomic) NSInteger authorizationStatus;
@property (nonatomic) NSUInteger bulletinCount;
@property (nonatomic) NSInteger bulletinGroupingSetting;
@property (nonatomic) NSInteger carPlaySetting;
@property (nonatomic) NSInteger contentPreviewSetting;
@property (nonatomic) NSInteger criticalAlertSetting;
@property (copy, nonatomic) NSString *customSettingsBundle; // ivar: _customSettingsBundle
@property (copy, nonatomic) NSString *customSettingsDetailControllerClass; // ivar: _customSettingsDetailControllerClass
@property (copy, nonatomic) NSArray *dataProviderIDs; // ivar: _dataProviderIDs
@property (nonatomic) NSInteger directMessagesSetting;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSString *factorySectionID; // ivar: _factorySectionID
@property (readonly, nonatomic) BOOL hasEnabledSettings;
@property (nonatomic) BOOL hideWeeApp; // ivar: _hideWeeApp
@property (copy, nonatomic) BBSectionIcon *icon; // ivar: _icon
@property (readonly, copy, nonatomic) NSData *iconData;
@property (nonatomic) BOOL isAppClip; // ivar: _isAppClip
@property (readonly, nonatomic) BOOL isDeliveredQuietly;
@property (nonatomic) BOOL isModificationAllowed; // ivar: _isModificationAllowed
@property (nonatomic) BOOL isRestricted; // ivar: _isRestricted
@property (nonatomic) NSDate *lastUserGrantedAuthorizationDate;
@property (nonatomic) NSInteger lockScreenSetting;
@property (copy, nonatomic) BBSectionInfoSettings *managedSectionInfoSettings;
@property (nonatomic) BBMuteAssertion *muteAssertion;
@property (nonatomic) NSUInteger notificationCenterLimit;
@property (nonatomic) NSInteger notificationCenterSetting;
@property (weak, nonatomic) BBSectionInfo *parentSection; // ivar: _parentSection
@property (copy, nonatomic) NSString *pathToWeeAppPluginBundle; // ivar: _pathToWeeAppPluginBundle
@property (nonatomic) NSUInteger pushSettings;
@property (readonly, nonatomic) BBSectionInfoSettings *readableSettings;
@property (nonatomic) NSInteger scheduledDeliverySetting;
@property (nonatomic) NSInteger sectionCategory; // ivar: _sectionCategory
@property (copy, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (copy, nonatomic) BBSectionInfoSettings *sectionInfoSettings; // ivar: _sectionInfoSettings
@property (nonatomic) NSInteger sectionType; // ivar: _sectionType
@property (nonatomic) BOOL showsCustomSettingsLink;
@property (nonatomic) BOOL showsOnExternalDevices;
@property (nonatomic) NSInteger spokenNotificationSetting;
@property (readonly, copy, nonatomic) NSDictionary *stateCapture;
@property (copy, nonatomic) NSString *subsectionID; // ivar: _subsectionID
@property (nonatomic) NSInteger subsectionPriority; // ivar: _subsectionPriority
@property (copy, nonatomic) NSArray *subsections; // ivar: _subsections
@property (nonatomic) BOOL suppressFromSettings; // ivar: _suppressFromSettings
@property (nonatomic) NSUInteger suppressedSettings; // ivar: _suppressedSettings
@property (nonatomic) NSInteger timeSensitiveSetting;
@property (nonatomic, getter=hasUserConfiguredDirectMessagesSetting) BOOL userConfiguredDirectMessagesSetting;
@property (nonatomic, getter=hasUserConfiguredTimeSensitiveSetting) BOOL userConfiguredTimeSensitiveSetting;
@property (readonly, nonatomic) BOOL usesManagedSettings;
@property (nonatomic) NSUInteger version; // ivar: _version
@property (readonly, nonatomic) BBSectionInfoSettings *writableSettings;


+(BOOL)supportsSecureCoding;
+(id)defaultSectionInfoForSection:(id)arg0 ;
+(id)defaultSectionInfoForType:(NSInteger)arg0 ;
-(BOOL)isBulletinMutedForThreadIdentifier:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)showsInLockScreen;
-(BOOL)showsInNotificationCenter;
-(BOOL)showsMessagePreview;
-(NSInteger)disabledSettingForSetting:(NSInteger)arg0 ;
-(NSInteger)emergencySetting;
-(NSUInteger)hash;
-(id)_subsectionForID:(id)arg0 ;
-(id)_suppressedSettingsList:(NSUInteger)arg0 ;
-(id)copyFromManagedSettings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)effectiveSectionInfoWithDefaultContentPreviewSetting:(NSInteger)arg0 globalAnnounceSetting:(NSInteger)arg1 globalScheduledDeliverySetting:(NSInteger)arg2 hasPairedVehiclesForCarPlay:(BOOL)arg3 ;
-(id)effectiveSectionInfoWithFactoryInfo:(id)arg0 defaultContentPreviewSetting:(NSInteger)arg1 globalAnnounceSetting:(NSInteger)arg2 globalScheduledDeliverySetting:(NSInteger)arg3 hasPairedVehiclesForCarPlay:(BOOL)arg4 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDefaultsForSectionType:(NSInteger)arg0 ;
-(void)_addSubsection:(id)arg0 ;
-(void)_associateDataProviderSectionInfo:(id)arg0 ;
-(void)_configureWithDefaultsForSectionType:(NSInteger)arg0 ;
-(void)_deliverQuietly:(BOOL)arg0 ;
-(void)_dissociateDataProviderSectionInfo:(id)arg0 ;
-(void)_replaceSubsection:(id)arg0 ;
-(void)deliverQuietly:(BOOL)arg0 ;
-(void)deliverQuietly:(BOOL)arg0 changeAuthorizationStatus:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)makeAuthorizationPermanent;
-(void)muteSectionUntilDate:(id)arg0 ;
-(void)muteThreadIdentifier:(id)arg0 untilDate:(id)arg1 ;
-(void)queryAndUseManagedSettings;
-(void)queryAndUseManagedSettingsForSectionID:(id)arg0 ;
-(void)setEmergencySetting:(NSInteger)arg0 ;
-(void)setShowsInLockScreen:(BOOL)arg0 ;
-(void)setShowsInNotificationCenter:(BOOL)arg0 ;
-(void)setShowsMessagePreview:(BOOL)arg0 ;
-(void)unmuteSection;
-(void)unmuteThreadIdentifier:(id)arg0 ;
-(void)updateWithDefaultSectionInfo:(id)arg0 ;


@end


#endif