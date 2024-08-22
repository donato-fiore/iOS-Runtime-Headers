// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISUIACTIVITYVIEWCONTROLLERCONFIGURATION_H
#define UISUIACTIVITYVIEWCONTROLLERCONFIGURATION_H

@class NSArray, NSLocale, UIColor, UITraitCollection, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UISUISecurityContext.h"

@interface UISUIActivityViewControllerConfiguration : NSObject <NSSecureCoding>



@property (readonly, nonatomic) BOOL _unitTest_disableExcludingSourceApplicationFromOpenActivities; // ivar: __unitTest_disableExcludingSourceApplicationFromOpenActivities
@property (retain, nonatomic) NSArray *activityItemValueClassNames; // ivar: _activityItemValueClassNames
@property (retain, nonatomic) NSArray *activityItemValueExtensionMatchingDictionaries; // ivar: _activityItemValueExtensionMatchingDictionaries
@property (retain, nonatomic) NSArray *activityTypeOrder; // ivar: _activityTypeOrder
@property (retain, nonatomic) NSArray *activityTypesToCreateInShareService; // ivar: _activityTypesToCreateInShareService
@property (nonatomic) BOOL allowsEmbedding; // ivar: _allowsEmbedding
@property (nonatomic) BOOL canExcludeExtensionActivities; // ivar: _canExcludeExtensionActivities
@property (nonatomic) BOOL canShowShareSheetPlugIns; // ivar: _canShowShareSheetPlugIns
@property (nonatomic) NSInteger excludedActivityCategories; // ivar: _excludedActivityCategories
@property (retain, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (retain, nonatomic) NSArray *hostActivityConfigurations; // ivar: _hostActivityConfigurations
@property (nonatomic) NSDirectionalEdgeInsets hostLayoutMargins; // ivar: _hostLayoutMargins
@property (retain, nonatomic) NSLocale *hostLocale; // ivar: _hostLocale
@property (retain, nonatomic) UIColor *hostTintColor; // ivar: _hostTintColor
@property (retain, nonatomic) UITraitCollection *hostTraitCollection; // ivar: _hostTraitCollection
@property (nonatomic) CGFloat iconScale; // ivar: _iconScale
@property (nonatomic) CGSize iconSize; // ivar: _iconSize
@property (retain, nonatomic) NSArray *includedActivityTypes; // ivar: _includedActivityTypes
@property (retain, nonatomic) NSArray *initialPhotosAssetDetails; // ivar: _initialPhotosAssetDetails
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (retain, nonatomic) NSArray *linkPresentationDataForActivityItems; // ivar: _linkPresentationDataForActivityItems
@property (nonatomic) BOOL linkedBeforeYukon; // ivar: _linkedBeforeYukon
@property (nonatomic) NSInteger numberOfVisibleActionActivities; // ivar: _numberOfVisibleActionActivities
@property (nonatomic) NSInteger numberOfVisibleSharingActivities; // ivar: _numberOfVisibleSharingActivities
@property (retain, nonatomic) NSArray *preferredLocalizations; // ivar: _preferredLocalizations
@property (nonatomic) CGFloat preferredWidth; // ivar: _preferredWidth
@property (nonatomic) BOOL requestActivitiesTextData; // ivar: _requestActivitiesTextData
@property (nonatomic) BOOL requestPeopleSuggestionsData; // ivar: _requestPeopleSuggestionsData
@property (retain, nonatomic) UISUISecurityContext *securityScopedURLsForMatching; // ivar: _securityScopedURLsForMatching
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (nonatomic) NSInteger sharingStyle; // ivar: _sharingStyle
@property (nonatomic) BOOL shouldExcludeiCloudAddToDriveActivity; // ivar: _shouldExcludeiCloudAddToDriveActivity
@property (nonatomic) BOOL shouldExcludeiCloudSharingActivity; // ivar: _shouldExcludeiCloudSharingActivity
@property (nonatomic) BOOL shouldMatchOnlyUserElectedExtensions; // ivar: _shouldMatchOnlyUserElectedExtensions
@property (nonatomic) BOOL shouldSkipPeopleSuggestions; // ivar: _shouldSkipPeopleSuggestions
@property (retain, nonatomic) NSArray *typeIdentifiersForShortcutsMatching; // ivar: _typeIdentifiersForShortcutsMatching
@property (retain, nonatomic) NSArray *urlsBeingShared; // ivar: _urlsBeingShared
@property (nonatomic) BOOL whitelistActionActivitiesOnly; // ivar: _whitelistActionActivitiesOnly


+(BOOL)supportsSecureCoding;
+(void)_unitTest_SetDisableExcludingSourceApplicationFromOpenActivities:(BOOL)arg0 ;
-(id)_contextForMatchingActivityItems:(id)arg0 activityItemValues:(id)arg1 activityItemValueClasses:(id)arg2 ;
-(id)availableActivityItemValueClasses;
-(id)contextForMatchingByActivityItemValueClasses;
-(id)contextForMatchingByActivityItems:(id)arg0 itemValues:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif