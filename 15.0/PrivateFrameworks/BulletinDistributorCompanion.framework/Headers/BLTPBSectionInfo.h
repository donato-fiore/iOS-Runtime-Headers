// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTPBSECTIONINFO_H
#define BLTPBSECTIONINFO_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "BLTPBSectionIcon.h"
#import "BLTPBSectionInfoSettings.h"

@interface BLTPBSectionInfo : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int alertType; // ivar: _alertType
@property (nonatomic) BOOL allowsNotifications; // ivar: _allowsNotifications
@property (nonatomic) CGFloat authorizationExpirationDate; // ivar: _authorizationExpirationDate
@property (nonatomic) int authorizationStatus; // ivar: _authorizationStatus
@property (nonatomic) BOOL criticalAlertSetting; // ivar: _criticalAlertSetting
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (nonatomic) BOOL displaysCriticalBulletinsLegacy; // ivar: _displaysCriticalBulletinsLegacy
@property (nonatomic) BOOL excludeFromBulletinBoard; // ivar: _excludeFromBulletinBoard
@property (retain, nonatomic) NSString *factorySectionID; // ivar: _factorySectionID
@property (nonatomic) int groupingSetting; // ivar: _groupingSetting
@property (nonatomic) BOOL hasAlertType;
@property (nonatomic) BOOL hasAllowsNotifications;
@property (nonatomic) BOOL hasAuthorizationExpirationDate;
@property (nonatomic) BOOL hasAuthorizationStatus;
@property (nonatomic) BOOL hasCriticalAlertSetting;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasDisplaysCriticalBulletinsLegacy;
@property (nonatomic) BOOL hasExcludeFromBulletinBoard;
@property (readonly, nonatomic) BOOL hasFactorySectionID;
@property (nonatomic) BOOL hasGroupingSetting;
@property (readonly, nonatomic) BOOL hasIcon;
@property (nonatomic) BOOL hasIconsStripped;
@property (nonatomic) BOOL hasLastUserGrantedAuthorizationDate;
@property (nonatomic) BOOL hasLockScreenSetting;
@property (nonatomic) BOOL hasNotificationCenterLimit;
@property (nonatomic) BOOL hasNotificationCenterSetting;
@property (nonatomic) BOOL hasPhoneAllowsNotifications;
@property (nonatomic) BOOL hasPhoneAuthorizationStatus;
@property (nonatomic) BOOL hasPushSettings;
@property (nonatomic) BOOL hasSectionCategory;
@property (readonly, nonatomic) BOOL hasSectionID;
@property (readonly, nonatomic) BOOL hasSectionInfoSettings;
@property (nonatomic) BOOL hasSectionType;
@property (nonatomic) BOOL hasShowsInLockScreen;
@property (nonatomic) BOOL hasShowsInNotificationCenter;
@property (nonatomic) BOOL hasShowsMessagePreview;
@property (nonatomic) BOOL hasShowsOnExternalDevices;
@property (nonatomic) BOOL hasSpokenNotificationSetting;
@property (readonly, nonatomic) BOOL hasSubsectionID;
@property (nonatomic) BOOL hasSubsectionPriority;
@property (nonatomic) BOOL hasSuppressFromSettings;
@property (nonatomic) BOOL hasSuppressedSettings;
@property (readonly, nonatomic) BOOL hasUniversalSectionID;
@property (nonatomic) BOOL hasVersion;
@property (readonly, nonatomic) BOOL hasWatchSectionID;
@property (retain, nonatomic) BLTPBSectionIcon *icon; // ivar: _icon
@property (nonatomic) BOOL iconsStripped; // ivar: _iconsStripped
@property (nonatomic) CGFloat lastUserGrantedAuthorizationDate; // ivar: _lastUserGrantedAuthorizationDate
@property (nonatomic) int lockScreenSetting; // ivar: _lockScreenSetting
@property (nonatomic) unsigned int notificationCenterLimit; // ivar: _notificationCenterLimit
@property (nonatomic) int notificationCenterSetting; // ivar: _notificationCenterSetting
@property (nonatomic) BOOL phoneAllowsNotifications; // ivar: _phoneAllowsNotifications
@property (nonatomic) int phoneAuthorizationStatus; // ivar: _phoneAuthorizationStatus
@property (nonatomic) unsigned int pushSettings; // ivar: _pushSettings
@property (nonatomic) int sectionCategory; // ivar: _sectionCategory
@property (retain, nonatomic) NSString *sectionID; // ivar: _sectionID
@property (retain, nonatomic) BLTPBSectionInfoSettings *sectionInfoSettings; // ivar: _sectionInfoSettings
@property (nonatomic) int sectionType; // ivar: _sectionType
@property (nonatomic) BOOL showsInLockScreen; // ivar: _showsInLockScreen
@property (nonatomic) BOOL showsInNotificationCenter; // ivar: _showsInNotificationCenter
@property (nonatomic) BOOL showsMessagePreview; // ivar: _showsMessagePreview
@property (nonatomic) BOOL showsOnExternalDevices; // ivar: _showsOnExternalDevices
@property (nonatomic) int spokenNotificationSetting; // ivar: _spokenNotificationSetting
@property (retain, nonatomic) NSString *subsectionID; // ivar: _subsectionID
@property (nonatomic) int subsectionPriority; // ivar: _subsectionPriority
@property (retain, nonatomic) NSMutableArray *subsections; // ivar: _subsections
@property (nonatomic) BOOL suppressFromSettings; // ivar: _suppressFromSettings
@property (nonatomic) unsigned int suppressedSettings; // ivar: _suppressedSettings
@property (retain, nonatomic) NSString *universalSectionID; // ivar: _universalSectionID
@property (nonatomic) unsigned int version; // ivar: _version
@property (retain, nonatomic) NSString *watchSectionID; // ivar: _watchSectionID


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupingSettingAsString:(int)arg0 ;
-(id)lockScreenSettingAsString:(int)arg0 ;
-(id)notificationCenterSettingAsString:(int)arg0 ;
-(id)requestWithKeypaths:(id)arg0 ;
-(id)spokenNotificationSettingAsString:(int)arg0 ;
-(id)subsectionsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsGroupingSetting:(id)arg0 ;
-(int)StringAsLockScreenSetting:(id)arg0 ;
-(int)StringAsNotificationCenterSetting:(id)arg0 ;
-(int)StringAsSpokenNotificationSetting:(id)arg0 ;
-(void)addSubsections:(id)arg0 ;
-(void)clearSubsections;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif