// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSHEETCONTEXT_H
#define SHSHEETCONTEXT_H

@class NSArray, LPLinkMetadata, NSString;
@protocol UIActivityViewControllerObjectManipulationDelegate;

#import <Foundation/Foundation.h>

#import "UIActivityViewController.h"

@interface SHSheetContext : NSObject

@property (readonly, nonatomic) NSArray *activityItems; // ivar: _activityItems
@property (copy, nonatomic) NSArray *activityTypeOrder; // ivar: _activityTypeOrder
@property (readonly, nonatomic) NSArray *activityTypesToCreateInShareService; // ivar: _activityTypesToCreateInShareService
@property (readonly, weak, nonatomic) UIActivityViewController *activityViewController; // ivar: _activityViewController
@property (nonatomic) BOOL allowsEmbedding; // ivar: _allowsEmbedding
@property (nonatomic) BOOL allowsProminentActivity; // ivar: _allowsProminentActivity
@property (retain, nonatomic) NSArray *applicationActivities; // ivar: _applicationActivities
@property (nonatomic) NSInteger collaborationMode; // ivar: _collaborationMode
@property (nonatomic) BOOL configureForCloudSharing; // ivar: _configureForCloudSharing
@property (nonatomic) BOOL configureForPhotosEdit; // ivar: _configureForPhotosEdit
@property (nonatomic) NSInteger excludedActivityCategories; // ivar: _excludedActivityCategories
@property (copy, nonatomic) NSArray *excludedActivityTypes; // ivar: _excludedActivityTypes
@property (copy, nonatomic) NSArray *heroActionActivityTypes; // ivar: _heroActionActivityTypes
@property (nonatomic) BOOL hideHeaderView; // ivar: _hideHeaderView
@property (copy, nonatomic) NSArray *includedActivityTypes; // ivar: _includedActivityTypes
@property (nonatomic) BOOL instantShareSheet; // ivar: _instantShareSheet
@property (nonatomic) BOOL isContentManaged; // ivar: _isContentManaged
@property (weak, nonatomic) NSObject<UIActivityViewControllerObjectManipulationDelegate> *objectManipulationDelegate; // ivar: _objectManipulationDelegate
@property (copy, nonatomic) NSArray *peopleSuggestionBundleIds; // ivar: _peopleSuggestionBundleIds
@property (retain, nonatomic) LPLinkMetadata *photosHeaderMetadata; // ivar: _photosHeaderMetadata
@property (copy, nonatomic) NSArray *selectedAssetIdentifiers; // ivar: _selectedAssetIdentifiers
@property (nonatomic) NSInteger sharingStyle; // ivar: _sharingStyle
@property (nonatomic) BOOL shouldSuggestFamilyMembers; // ivar: _shouldSuggestFamilyMembers
@property (nonatomic) BOOL showHeroActionsHorizontally; // ivar: _showHeroActionsHorizontally
@property (nonatomic) BOOL showKeyboardAutomatically; // ivar: _showKeyboardAutomatically
@property (retain, nonatomic) NSString *topContentSectionText; // ivar: _topContentSectionText
@property (nonatomic) BOOL useRemoteUIService; // ivar: _useRemoteUIService
@property (nonatomic) BOOL whitelistActionActivitiesOnly; // ivar: _whitelistActionActivitiesOnly


-(id)description;
-(id)initWithActivityViewController:(id)arg0 activityItems:(id)arg1 ;


@end


#endif