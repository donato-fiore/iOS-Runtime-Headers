// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETSESSION_H
#define SHSHEETSESSION_H

@class NSArray, SFCollaborationItemsProvider, NSString, UIViewController, LPLinkMetadata;
@protocol SHSheetActivitiesManagerDelegate, SHSheetActivityItemsManagerDelegate, SHSheetActivityItemsManagerCollaborationDelegate, SFCollaborationItemsProviderDelegate, SFCollaborationItemChangeObserver, SHSheetSession, SFCollaborationItem, SFPeopleSuggestion, SHSheetSessionDelegate, UIActivityViewControllerObjectManipulationDelegate;

#import <Foundation/Foundation.h>

#import "SHSheetActivitiesManager.h"
#import "SHSheetActivityItemsManager.h"
#import "UIActivityViewController.h"
#import "UISDShareSheetSessionConfiguration.h"
#import "UIActivity.h"

@interface SHSheetSession : NSObject <SHSheetActivitiesManagerDelegate, SHSheetActivityItemsManagerDelegate, SHSheetActivityItemsManagerCollaborationDelegate, SFCollaborationItemsProviderDelegate, SFCollaborationItemChangeObserver, SHSheetSession>

 {
    ? _objectManipulationDelegateFlags;
}


@property (retain, nonatomic) SHSheetActivitiesManager *activitiesManager; // ivar: _activitiesManager
@property (retain, nonatomic) SHSheetActivityItemsManager *activityItemsManager; // ivar: _activityItemsManager
@property (copy, nonatomic) NSArray *activityTypeOrder; // ivar: _activityTypeOrder
@property (copy, nonatomic) NSArray *activityTypesToCreateInShareService; // ivar: _activityTypesToCreateInShareService
@property (weak, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (nonatomic) BOOL allowsEmbedding; // ivar: _allowsEmbedding
@property (nonatomic) BOOL canPerformSharePlay; // ivar: _canPerformSharePlay
@property (retain, nonatomic) NSObject<SFCollaborationItem> *collaborationItem; // ivar: _collaborationItem
@property (retain, nonatomic) SFCollaborationItemsProvider *collaborationItemsProvider; // ivar: _collaborationItemsProvider
@property (nonatomic) NSInteger collaborationMode; // ivar: _collaborationMode
@property (retain, nonatomic) NSArray *collaborationURLRequests; // ivar: _collaborationURLRequests
@property (retain, nonatomic) UISDShareSheetSessionConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL configureForCloudSharing; // ivar: _configureForCloudSharing
@property (nonatomic) BOOL configureForPhotosEdit; // ivar: _configureForPhotosEdit
@property (retain, nonatomic) NSObject<SFPeopleSuggestion> *currentPeopleSuggestion; // ivar: _currentPeopleSuggestion
@property (readonly, copy, nonatomic) NSString *customOptionsTitle;
@property (readonly, nonatomic) UIViewController *customOptionsViewController;
@property (copy, nonatomic) NSArray *customizationGroups; // ivar: _customizationGroups
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<SHSheetSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didExpand; // ivar: _didExpand
@property (nonatomic) NSInteger excludedActivityCategories; // ivar: _excludedActivityCategories
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *heroActionActivityTypes; // ivar: _heroActionActivityTypes
@property (nonatomic) BOOL hideHeaderView; // ivar: _hideHeaderView
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (copy, nonatomic) NSArray *includedActivityTypes; // ivar: _includedActivityTypes
@property (nonatomic) BOOL instantShareSheet; // ivar: _instantShareSheet
@property (nonatomic) BOOL isAirdropOnly; // ivar: _isAirdropOnly
@property (nonatomic) BOOL isCollaborative; // ivar: _isCollaborative
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (readonly, nonatomic) BOOL isExpanded;
@property (readonly, copy, nonatomic) NSArray *metadataValuesForLinkPresentation;
@property (readonly, nonatomic) NSInteger numberOfVisibleActionActivities;
@property (readonly, nonatomic) NSInteger numberOfVisibleSharingActivities;
@property (weak, nonatomic) NSObject<UIActivityViewControllerObjectManipulationDelegate> *objectManipulationDelegate; // ivar: _objectManipulationDelegate
@property (copy, nonatomic) NSArray *peopleSuggestionBundleIds; // ivar: _peopleSuggestionBundleIds
@property (retain, nonatomic) UIActivity *performingActivity; // ivar: _performingActivity
@property (retain, nonatomic) LPLinkMetadata *photosHeaderMetadata; // ivar: _photosHeaderMetadata
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers; // ivar: _selectedAssetIdentifiers
@property (nonatomic) NSInteger sharingStyle; // ivar: _sharingStyle
@property (nonatomic) BOOL shouldSkipPeopleSuggestions; // ivar: _shouldSkipPeopleSuggestions
@property (nonatomic) BOOL shouldSuggestFamilyMembers; // ivar: _shouldSuggestFamilyMembers
@property (nonatomic) BOOL showHeroActionsHorizontally; // ivar: _showHeroActionsHorizontally
@property (nonatomic) BOOL showKeyboardAutomatically; // ivar: _showKeyboardAutomatically
@property (nonatomic) BOOL showOptions; // ivar: _showOptions
@property (nonatomic) BOOL showSharePlayProminently; // ivar: _showSharePlayProminently
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCollaboration;
@property (readonly, nonatomic) BOOL supportsSendCopy;
@property (retain, nonatomic) NSString *topContentSectionText; // ivar: _topContentSectionText
@property (nonatomic) BOOL useRemoteUIService; // ivar: _useRemoteUIService
@property (nonatomic) BOOL whitelistActionActivitiesOnly; // ivar: _whitelistActionActivitiesOnly


-(BOOL)activitiesManager:(id)arg0 shouldShowSystemActivityType:(id)arg1 ;
-(id)_activityConfigurationsForActivities:(id)arg0 ;
-(id)_collaborationService;
-(id)_configurationForActivity:(id)arg0 ;
-(id)activityItemsManager:(id)arg0 collaborationActivityItemValuesForActivityItemValue:(id)arg1 activity:(id)arg2 ;
-(id)activityItemsManager:(id)arg0 subjectForActivity:(id)arg1 ;
-(id)collaborationItemsProvider:(id)arg0 resolveActivityItem:(id)arg1 ;
-(id)collaborationPlaceholderActivityItemsForActivityItemsManager:(id)arg0 ;
-(id)collaborationServiceForItemsProvider:(id)arg0 ;
-(id)createActivityMatchingContext;
-(id)createClientContext;
-(id)createDiscoveryContext;
-(id)createShareServiceUIConfiguration;
-(id)initWithContext:(id)arg0 delegate:(id)arg1 ;
-(id)urlRequestsForActivityItemsManager:(id)arg0 ;
-(void)_configureWithContext:(id)arg0 ;
-(void)_updateObjectManipulationSupport;
-(void)activityItemsManagerLinkMetadataValuesDidChange:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 ;
-(void)updateWithContext:(id)arg0 ;


@end


#endif