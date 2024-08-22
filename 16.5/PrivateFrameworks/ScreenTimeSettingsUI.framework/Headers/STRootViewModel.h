// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STROOTVIEWMODEL_H
#define STROOTVIEWMODEL_H

@class NSArray, NSSet, NSDictionary;

#import <Foundation/Foundation.h>

#import "STUIUser.h"

@interface STRootViewModel : NSObject

@property (readonly, nonatomic) BOOL canSetUpFamily;
@property (readonly, nonatomic) BOOL canSignIn;
@property (readonly, nonatomic) BOOL canStartScreenTime;
@property (readonly, nonatomic) BOOL canStopScreenTime;
@property (nonatomic) BOOL canStopScreenTimeWithoutPasscode; // ivar: _canStopScreenTimeWithoutPasscode
@property (readonly, nonatomic) BOOL canStopSharingScreenTime;
@property (readonly, nonatomic) BOOL canToggleCloudSyncData;
@property (readonly, nonatomic) BOOL canToggleWebsiteData;
@property (readonly, nonatomic) BOOL canViewAskForTimeRequests;
@property (copy, nonatomic) NSArray *children; // ivar: _children
@property (copy, nonatomic) NSArray *devices; // ivar: _devices
@property (readonly, nonatomic) BOOL forceParentalControls;
@property (readonly) BOOL hasWatchOSDevices;
@property (readonly) BOOL hasWatchOSDevicesOnly;
@property (copy, nonatomic) NSSet *installedBundleIDs; // ivar: _installedBundleIDs
@property (copy, nonatomic) NSDictionary *installedBundleIDsByCategoryIdentifier; // ivar: _installedBundleIDsByCategoryIdentifier
@property (nonatomic) BOOL isCloudSyncEnabled; // ivar: _isCloudSyncEnabled
@property (readonly, nonatomic) BOOL isCommunicationSafetyAnalyticsEnabled; // ivar: _isCommunicationSafetyAnalyticsEnabled
@property (readonly, nonatomic) BOOL isCommunicationSafetyNotificationEnabled; // ivar: _isCommunicationSafetyNotificationEnabled
@property (readonly, nonatomic) BOOL isCommunicationSafetyReceivingRestricted; // ivar: _isCommunicationSafetyReceivingRestricted
@property (readonly, nonatomic) BOOL isCommunicationSafetySendingRestricted; // ivar: _isCommunicationSafetySendingRestricted
@property (readonly, nonatomic) BOOL isRemotelyManagedUserWithPasscode;
@property (readonly, nonatomic) BOOL isSharingUsageData;
@property (copy, nonatomic) STUIUser *me; // ivar: _me
@property (readonly, nonatomic, getter=isScreenTimeEnabled) BOOL screenTimeEnabled;
@property (readonly, nonatomic) BOOL shouldShowCompatibilityAlerts;
@property (readonly, nonatomic, getter=isWebUsageEnabled) BOOL webUsageEnabled;


+(id)keyPathsForValuesAffectingCanSetUpFamily;
+(id)keyPathsForValuesAffectingCanSignIn;
+(id)keyPathsForValuesAffectingCanToggleCloudSyncData;
+(id)keyPathsForValuesAffectingCanToggleWebsiteData;
+(id)keyPathsForValuesAffectingForceParentalControls;
+(id)keyPathsForValuesAffectingHasWatchOSDevices;
+(id)keyPathsForValuesAffectingHasWatchOSDevicesOnly;
+(id)keyPathsForValuesAffectingIsRemotelyManagedUserWithPasscode;
+(id)keyPathsForValuesAffectingIsSharingUsageData;
+(id)keyPathsForValuesAffectingWebUsageEnabled;
-(id)init;


@end


#endif