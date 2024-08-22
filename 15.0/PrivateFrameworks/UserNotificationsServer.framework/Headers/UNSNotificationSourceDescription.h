// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UNSNOTIFICATIONSOURCEDESCRIPTION_H
#define UNSNOTIFICATIONSOURCEDESCRIPTION_H

@class NSArray, NSString, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "UNSNotificationSourceSettingsDescription.h"

@interface UNSNotificationSourceDescription : NSObject

@property (copy, nonatomic) NSArray *activityTypes; // ivar: _activityTypes
@property (nonatomic) BOOL allowCalls; // ivar: _allowCalls
@property (nonatomic) BOOL allowCriticalAlerts; // ivar: _allowCriticalAlerts
@property (nonatomic) BOOL allowIntercom; // ivar: _allowIntercom
@property (nonatomic) BOOL allowMessages; // ivar: _allowMessages
@property (nonatomic) BOOL allowPrivateProperties; // ivar: _allowPrivateProperties
@property (nonatomic) BOOL allowServiceExtensionFiltering; // ivar: _allowServiceExtensionFiltering
@property (nonatomic) BOOL allowTimeSensitive; // ivar: _allowTimeSensitive
@property (nonatomic) BOOL allowUnlimitedContentBody; // ivar: _allowUnlimitedContentBody
@property (nonatomic) BOOL allowUnlimitedPendingNotifications; // ivar: _allowUnlimitedPendingNotifications
@property (nonatomic) BOOL automaticallyShowSettings; // ivar: _automaticallyShowSettings
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (copy, nonatomic) NSURL *bundleURL; // ivar: _bundleURL
@property (copy, nonatomic) NSString *carPlayIconFile; // ivar: _carPlayIconFile
@property (copy, nonatomic) NSString *customSettingsBundle; // ivar: _customSettingsBundle
@property (copy, nonatomic) NSString *customSettingsDetailControllerClass; // ivar: _customSettingsDetailControllerClass
@property (nonatomic) BOOL daemonShouldReceiveApplicationEvents; // ivar: _daemonShouldReceiveApplicationEvents
@property (nonatomic) BOOL daemonShouldReceiveBackgroundResponses; // ivar: _daemonShouldReceiveBackgroundResponses
@property (nonatomic) BOOL daemonShouldReceiveNotificationSettingsUpdates; // ivar: _daemonShouldReceiveNotificationSettingsUpdates
@property (copy, nonatomic) NSURL *dataContainerURL; // ivar: _dataContainerURL
@property (retain, nonatomic) NSArray *defaultCategories; // ivar: _defaultCategories
@property (copy, nonatomic) NSString *defaultIconFile; // ivar: _defaultIconFile
@property (retain, nonatomic) UNSNotificationSourceSettingsDescription *defaultSettings; // ivar: _defaultSettings
@property (retain, nonatomic) NSArray *defaultTopics; // ivar: _defaultTopics
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSDictionary *groupContainerURLS; // ivar: _groupContainerURLS
@property (nonatomic) BOOL hideSettings; // ivar: _hideSettings
@property (copy, nonatomic) NSString *intentsBundleIdentifier; // ivar: _intentsBundleIdentifier
@property (nonatomic) BOOL isAppClip; // ivar: _isAppClip
@property (copy, nonatomic) NSString *pushEnvironment; // ivar: _pushEnvironment
@property (nonatomic) BOOL requiresTopics; // ivar: _requiresTopics
@property (nonatomic, getter=isRestricted) BOOL restricted; // ivar: _restricted
@property (copy, nonatomic) NSString *settingsIconFile; // ivar: _settingsIconFile
@property (copy, nonatomic) NSString *settingsSheetIconFile; // ivar: _settingsSheetIconFile
@property (copy, nonatomic) NSString *subordinateIconFile; // ivar: _subordinateIconFile
@property (nonatomic) BOOL supportsContentAvailableRemoteNotifications; // ivar: _supportsContentAvailableRemoteNotifications
@property (nonatomic) BOOL suppressDismissalSync; // ivar: _suppressDismissalSync
@property (nonatomic) BOOL suppressIconMask; // ivar: _suppressIconMask
@property (nonatomic) BOOL suppressUserAuthorizationPrompt; // ivar: _suppressUserAuthorizationPrompt
@property (copy, nonatomic) NSString *universalApplicationIdentifier; // ivar: _universalApplicationIdentifier
@property (nonatomic) BOOL useDefaultDataProvider; // ivar: _useDefaultDataProvider
@property (nonatomic) BOOL usesCloudKit; // ivar: _usesCloudKit
@property (nonatomic) BOOL wantsEphemeralNotifications; // ivar: _wantsEphemeralNotifications
@property (copy, nonatomic) NSString *watchList394hIconFile; // ivar: _watchList394hIconFile
@property (copy, nonatomic) NSString *watchList430hIconFile; // ivar: _watchList430hIconFile
@property (copy, nonatomic) NSString *watchList448hIconFile; // ivar: _watchList448hIconFile
@property (copy, nonatomic) NSString *watchList484hIconFile; // ivar: _watchList484hIconFile
@property (copy, nonatomic) NSString *watchListLargeIconFile; // ivar: _watchListLargeIconFile
@property (copy, nonatomic) NSString *watchListSmallIconFile; // ivar: _watchListSmallIconFile
@property (copy, nonatomic) NSString *watchQuickLook394hIconFile; // ivar: _watchQuickLook394hIconFile
@property (copy, nonatomic) NSString *watchQuickLook430hIconFile; // ivar: _watchQuickLook430hIconFile
@property (copy, nonatomic) NSString *watchQuickLook448hIconFile; // ivar: _watchQuickLook448hIconFile
@property (copy, nonatomic) NSString *watchQuickLook484hIconFile; // ivar: _watchQuickLook484hIconFile
@property (copy, nonatomic) NSString *watchQuickLookLargeIconFile; // ivar: _watchQuickLookLargeIconFile
@property (copy, nonatomic) NSString *watchQuickLookSmallIconFile; // ivar: _watchQuickLookSmallIconFile


+(id)_validEnvironmentFromEnvironment:(id)arg0 ;
+(id)applicationSourceDescriptionWithApplication:(id)arg0 ;
+(id)applicationSourceDescriptionWithBundleIdentifier:(id)arg0 ;
+(id)descriptionWithBundleIdentifier:(id)arg0 path:(id)arg1 allowServiceExtensionFiltering:(BOOL)arg2 ;
+(id)sourceDescriptionWithBundleIdentifier:(id)arg0 ;
+(id)systemSourceDescriptionWithBundleIdentifier:(id)arg0 ;
+(id)systemSourceDescriptionWithBundleURL:(id)arg0 ;
+(id)systemSourceDirectoryURLs;
+(id)systemSourcePathExtension;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(void)setIconFilesFromDictionary:(id)arg0 ;
-(void)setSystemPropertiesFromDictionary:(id)arg0 bundle:(id)arg1 ;


@end


#endif