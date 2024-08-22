// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTSECTIONCONFIGURATIONITEM_H
#define BLTSECTIONCONFIGURATIONITEM_H

@class NSArray, NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>


@interface BLTSectionConfigurationItem : NSObject

@property (retain, nonatomic) NSArray *additionalBridgeSectionIDs; // ivar: _additionalBridgeSectionIDs
@property (retain, nonatomic) NSArray *allowListedCategories; // ivar: _allowListedCategories
@property (retain, nonatomic) NSArray *allowListedSubtypes; // ivar: _allowListedSubtypes
@property (nonatomic) BOOL alwaysAlert; // ivar: _alwaysAlert
@property (nonatomic) BOOL alwaysSyncSettings; // ivar: _alwaysSyncSettings
@property (nonatomic) BOOL applyAllowListToChildSections; // ivar: _applyAllowListToChildSections
@property NSUInteger coordinationType; // ivar: _coordinationType
@property (retain, nonatomic) NSArray *denyListedCategories; // ivar: _denyListedCategories
@property (retain, nonatomic) NSMutableDictionary *denyListedCategoriesWithVersion; // ivar: _denyListedCategoriesWithVersion
@property (nonatomic) BOOL hasLegacyMapInContext; // ivar: _hasLegacyMapInContext
@property (nonatomic) BOOL hasLegacyMapInUserInfo; // ivar: _hasLegacyMapInUserInfo
@property (nonatomic) BOOL optOutOfAttachmentTransmission; // ivar: _optOutOfAttachmentTransmission
@property (nonatomic) BOOL optOutOfNotificationTuning; // ivar: _optOutOfNotificationTuning
@property (nonatomic) BOOL optOutOfSettingsCoordination; // ivar: _optOutOfSettingsCoordination
@property (nonatomic) BOOL optOutOfSubtitleRemovalForOlderWatches; // ivar: _optOutOfSubtitleRemovalForOlderWatches
@property (nonatomic) BOOL optOutOfWaitForUserIdle; // ivar: _optOutOfWaitForUserIdle
@property (nonatomic) BOOL overrideAppliesToCoordinationOptOut; // ivar: _overrideAppliesToCoordinationOptOut
@property (nonatomic) BOOL shouldUsePhoneExpirationDate; // ivar: _shouldUsePhoneExpirationDate
@property (retain, nonatomic) NSNumber *watchVersionThatUsesAttachmentURL; // ivar: _watchVersionThatUsesAttachmentURL
@property (retain, nonatomic) NSNumber *watchVersionThatUsesUserInfoForContext; // ivar: _watchVersionThatUsesUserInfoForContext


-(BOOL)hasDisplayedCriticalBulletins;
-(BOOL)updateCoordinationType:(NSUInteger)arg0 ;
-(NSUInteger)coordinationTypeWithSubtype:(NSInteger)arg0 ;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif