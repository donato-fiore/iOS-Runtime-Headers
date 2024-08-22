// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSHEETSESSION_H
#define SHSHEETSESSION_H

@class NSArray, NSString, UIViewController, LPLinkMetadata;
@protocol SHSheetActivitiesManagerDelegate, SHSheetActivityItemsManagerDelegate, SHSheetSessionInterface, SHSheetUIPeopleSuggestion, SHSheetSessionDelegate, UIActivityViewControllerObjectManipulationDelegate;

#import <Foundation/Foundation.h>

#import "SHSheetActivitiesManager.h"
#import "SHSheetActivityItemsManager.h"
#import "UIActivityViewController.h"
#import "UISDShareSheetSessionConfiguration.h"

@interface SHSheetSession : NSObject <SHSheetActivitiesManagerDelegate, SHSheetActivityItemsManagerDelegate, SHSheetSessionInterface>

 {
    ? _objectManipulationDelegateFlags;
}


@property (readonly, nonatomic) SHSheetActivitiesManager *activitiesManager; // ivar: _activitiesManager
@property (readonly, nonatomic) SHSheetActivityItemsManager *activityItemsManager; // ivar: _activityItemsManager
@property (copy, nonatomic) NSArray *activityTypeOrder; // ivar: _activityTypeOrder
@property (copy, nonatomic) NSArray *activityTypesToCreateInShareService; // ivar: _activityTypesToCreateInShareService
@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (nonatomic) BOOL allowsEmbedding; // ivar: _allowsEmbedding
@property (nonatomic) BOOL canPerformSharePlay; // ivar: _canPerformSharePlay
@property (retain, nonatomic) UISDShareSheetSessionConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL configureForCloudSharing; // ivar: _configureForCloudSharing
@property (nonatomic) BOOL configureForPhotosEdit; // ivar: _configureForPhotosEdit
@property (retain, nonatomic) NSObject<SHSheetUIPeopleSuggestion> *currentPeopleSuggestion; // ivar: _currentPeopleSuggestion
@property (readonly, copy, nonatomic) NSString *customOptionsTitle;
@property (readonly, nonatomic) UIViewController *customOptionsViewController;
@property (readonly, copy, nonatomic) NSArray *customizationGroups;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SHSheetSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didExpand; // ivar: _didExpand
@property (nonatomic) NSInteger excludedActivityCategories; // ivar: _excludedActivityCategories
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *heroActionActivityTypes; // ivar: _heroActionActivityTypes
@property (nonatomic) BOOL hideHeaderView; // ivar: _hideHeaderView
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *includedActivityTypes; // ivar: _includedActivityTypes
@property (nonatomic) BOOL isAirdropOnly; // ivar: _isAirdropOnly
@property (nonatomic) BOOL isCloudSharing; // ivar: _isCloudSharing
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (readonly, copy, nonatomic) NSArray *metadataValuesForLinkPresentation;
@property (readonly, nonatomic) NSInteger numberOfVisibleActionActivities;
@property (readonly, nonatomic) NSInteger numberOfVisibleSharingActivities;
@property (weak, nonatomic) NSObject<UIActivityViewControllerObjectManipulationDelegate> *objectManipulationDelegate; // ivar: _objectManipulationDelegate
@property (retain, nonatomic) LPLinkMetadata *photosHeaderMetadata; // ivar: _photosHeaderMetadata
@property (readonly, nonatomic) BOOL requestPartialSlotsRendering; // ivar: _requestPartialSlotsRendering
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers; // ivar: _selectedAssetIdentifiers
@property (nonatomic) NSInteger sharingStyle; // ivar: _sharingStyle
@property (nonatomic) BOOL shouldSkipPeopleSuggestions; // ivar: _shouldSkipPeopleSuggestions
@property (nonatomic) BOOL shouldSuggestFamilyMembers; // ivar: _shouldSuggestFamilyMembers
@property (readonly, nonatomic) BOOL showHeroActionsHorizontally; // ivar: _showHeroActionsHorizontally
@property (nonatomic) BOOL showKeyboardAutomatically; // ivar: _showKeyboardAutomatically
@property (nonatomic) BOOL showSharePlayProminently; // ivar: _showSharePlayProminently
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *topContentSectionText; // ivar: _topContentSectionText
@property (nonatomic) BOOL wantsObjectManipulation; // ivar: _wantsObjectManipulation
@property (nonatomic) BOOL whitelistActionActivitiesOnly; // ivar: _whitelistActionActivitiesOnly


-(BOOL)activitiesManager:(id)arg0 shouldShowSystemActivityType:(id)arg1 ;
-(id)_activityConfigurationsForActivities:(id)arg0 ;
-(id)_configurationForActivity:(id)arg0 ;
-(id)createActivityMatchingContext;
-(id)createDiscoveryContext;
-(id)createShareServiceUIConfiguration;
-(id)initWithContext:(id)arg0 ;
-(void)_configureWithContext:(id)arg0 ;
-(void)_updateObjectManipulationSupport;
-(void)activityItemsManagerLinkMetadataValuesDidChange:(id)arg0 ;
-(void)updateWithContext:(id)arg0 ;


@end


#endif