// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _UIACTIVITYMATCHINGCONTEXT_H
#define _UIACTIVITYMATCHINGCONTEXT_H

@class NSArray, NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "UIActivity.h"

@interface _UIActivityMatchingContext : NSObject <NSCopying>



@property (retain, nonatomic) NSArray *activityItemValueClasses; // ivar: _activityItemValueClasses
@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries; // ivar: _activityItemValueExtensionMatchingDictionaries
@property (readonly, nonatomic) NSArray *activityItemValues; // ivar: _activityItemValues
@property (readonly, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (retain, nonatomic) NSArray *activityTypeOrder; // ivar: _activityTypeOrder
@property (copy, nonatomic) NSArray *activityTypesGeneratedByDelegate; // ivar: _activityTypesGeneratedByDelegate
@property (nonatomic) BOOL allowMatchingBuiltInActivities; // ivar: _allowMatchingBuiltInActivities
@property (nonatomic) BOOL allowMatchingExtensionActivities; // ivar: _allowMatchingExtensionActivities
@property (retain, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (nonatomic) BOOL canExcludeExtensionActivities; // ivar: _canExcludeExtensionActivities
@property (readonly, nonatomic) NSArray *collaborationItems; // ivar: _collaborationItems
@property (retain, nonatomic) UIActivity *currentlySelectedActivity; // ivar: _currentlySelectedActivity
@property (nonatomic) NSInteger excludedActivityCategories; // ivar: _excludedActivityCategories
@property (retain, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (retain, nonatomic) NSArray *externalMatchBuiltinOrderedActivities; // ivar: _externalMatchBuiltinOrderedActivities
@property (nonatomic) *? hostAuditToken;
@property (readonly, nonatomic) NSData *hostAuditTokenData; // ivar: _hostAuditTokenData
@property (retain, nonatomic) NSArray *includedActivityTypes; // ivar: _includedActivityTypes
@property (nonatomic) BOOL isCollaborative; // ivar: _isCollaborative
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (retain, nonatomic) NSArray *prematchedExtensionActivities; // ivar: _prematchedExtensionActivities
@property (nonatomic) NSInteger sharingStyle; // ivar: _sharingStyle
@property (nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity; // ivar: _shouldExcludeiCloudAddToDriveActivity
@property (nonatomic) BOOL shouldExcludeiCloudSharingActivity; // ivar: _shouldExcludeiCloudSharingActivity
@property (nonatomic) BOOL shouldMatchOnlyUserElectedExtensions; // ivar: _shouldMatchOnlyUserElectedExtensions
@property (nonatomic) BOOL showSharePlayProminently; // ivar: _showSharePlayProminently
@property (readonly, nonatomic) NSString *sourceApplicationIdentifier;
@property (nonatomic) BOOL whitelistActionActivitiesOnly; // ivar: _whitelistActionActivitiesOnly


-(BOOL)shouldExcludeActivity:(id)arg0 ;
-(id)activitiesByFilteringExcludedActivities:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActivityItems:(id)arg0 itemValues:(id)arg1 ;
-(id)initWithActivityItems:(id)arg0 itemValues:(id)arg1 collaborationItems:(id)arg2 ;


@end


#endif