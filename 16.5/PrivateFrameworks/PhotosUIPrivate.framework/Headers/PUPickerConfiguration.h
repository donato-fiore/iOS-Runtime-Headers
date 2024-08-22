// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPICKERCONFIGURATION_H
#define PUPICKERCONFIGURATION_H

@class NSError, _PHPickerCollectionConfiguration, NSOrderedSet, PHAssetCollection, NSString, NSArray, PHPickerConfiguration, PHPhotoLibrary;
@protocol PUPickerFilter, PLClientIdentification;

#import <Foundation/Foundation.h>

#import "PUPickerGeneratedFilter.h"

@interface PUPickerConfiguration : NSObject

@property (readonly, nonatomic) NSError *LimitedLibraryError; // ivar: _LimitedLibraryError
@property (readonly, nonatomic) _PHPickerCollectionConfiguration *albumsConfiguration; // ivar: _albumsConfiguration
@property (readonly, nonatomic) NSOrderedSet *allPersonIdentifiers; // ivar: _allPersonIdentifiers
@property (readonly, nonatomic) PHAssetCollection *allPhotosVirtualCollection; // ivar: _allPhotosVirtualCollection
@property (readonly, nonatomic) BOOL allowsAlbums;
@property (readonly, nonatomic) BOOL allowsAssetData;
@property (readonly, nonatomic) BOOL allowsBars;
@property (readonly, nonatomic) BOOL allowsContextMenuInteraction;
@property (readonly, nonatomic) BOOL allowsContinuousSelection; // ivar: _allowsContinuousSelection
@property (readonly, nonatomic) BOOL allowsDownload; // ivar: _allowsDownload
@property (readonly, nonatomic) BOOL allowsDownscaling; // ivar: _allowsDownscaling
@property (readonly, nonatomic) BOOL allowsEmptySelection;
@property (readonly, nonatomic) BOOL allowsIdentifiers;
@property (readonly, nonatomic) BOOL allowsInteractivePopGesture;
@property (readonly, nonatomic) BOOL allowsNavigationPushPopAnimation;
@property (readonly, nonatomic) BOOL allowsOpeningStagingArea;
@property (readonly, nonatomic) BOOL allowsSearchBar;
@property (readonly, nonatomic) BOOL allowsSearchSuggestions;
@property (readonly, nonatomic) BOOL allowsSelectionStaging;
@property (readonly, nonatomic) BOOL allowsSidebar;
@property (readonly, nonatomic) BOOL allowsSwipeToSelect;
@property (readonly, nonatomic) BOOL allowsUnlimitedMultipleSelection;
@property (readonly, nonatomic) BOOL alwaysShowLoadingPlaceholder; // ivar: _alwaysShowLoadingPlaceholder
@property (readonly, nonatomic) NSInteger confirmationBehavior;
@property (readonly, nonatomic) BOOL excludesHiddenAlbum; // ivar: _excludesHiddenAlbum
@property (readonly, nonatomic) BOOL excludesSharedAlbums; // ivar: _excludesSharedAlbums
@property (readonly, nonatomic) NSObject<PUPickerFilter> *filter; // ivar: _filter
@property (readonly, nonatomic) PUPickerGeneratedFilter *generatedFilter; // ivar: _generatedFilter
@property (readonly, nonatomic) BOOL hasPreselection;
@property (readonly, nonatomic) BOOL isFollowupSingleSelectionPeoplePicker;
@property (readonly, nonatomic) BOOL isLimitedLibraryPicker; // ivar: _isLimitedLibraryPicker
@property (readonly, nonatomic) BOOL isPeoplePicker;
@property (readonly, nonatomic) BOOL isSingleSelection;
@property (readonly, nonatomic) BOOL isValidConfiguration;
@property (readonly, nonatomic) NSString *limitedLibraryClientIdentifier; // ivar: _limitedLibraryClientIdentifier
@property (readonly, nonatomic) PHAssetCollection *memoryAssetCollection; // ivar: _memoryAssetCollection
@property (readonly, nonatomic) BOOL onlyReturnsIdentifiers; // ivar: _onlyReturnsIdentifiers
@property (readonly, nonatomic) NSArray *peopleConfigurations; // ivar: _peopleConfigurations
@property (readonly, nonatomic) PHPickerConfiguration *phPickerConfiguration; // ivar: _phPickerConfiguration
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSObject<PLClientIdentification> *pickerClientIdentification; // ivar: _pickerClientIdentification
@property (readonly, nonatomic) NSInteger preferredAssetRepresentationMode; // ivar: _preferredAssetRepresentationMode
@property (readonly, nonatomic) NSOrderedSet *preselectedItemIdentifiers; // ivar: _preselectedItemIdentifiers
@property (readonly, nonatomic) NSOrderedSet *preselectedItemObjectIDs; // ivar: _preselectedItemObjectIDs
@property (readonly, nonatomic) BOOL receivedPhotoLibrary; // ivar: _receivedPhotoLibrary
@property (readonly, nonatomic) NSInteger selection; // ivar: _selection
@property (readonly, nonatomic) NSInteger selectionLimit; // ivar: _selectionLimit
@property (readonly, nonatomic) BOOL shouldPassthroughSelection;
@property (readonly, nonatomic) BOOL shouldRequestCurrentIfPossible;
@property (readonly, nonatomic) BOOL shouldStripLocation;
@property (readonly, nonatomic) BOOL showsPortraitWallpaperSuggestions; // ivar: _showsPortraitWallpaperSuggestions
@property (readonly, nonatomic) BOOL showsWallpaperSuggestions; // ivar: _showsWallpaperSuggestions
@property (readonly, nonatomic) NSOrderedSet *suggestedItemObjectIDs; // ivar: _suggestedItemObjectIDs
@property (nonatomic) BOOL usesEmbeddedMessagesLayout; // ivar: _usesEmbeddedMessagesLayout
@property (readonly, nonatomic) BOOL usesMemoriesLayout; // ivar: _usesMemoriesLayout
@property (readonly, nonatomic) BOOL usesOpenPanelLayout; // ivar: _usesOpenPanelLayout


+(id)limitedLibraryApplicationPreselectedObjectIDsOrCreateEmptySelectionWithTrustedIdentifier:(id)arg0 auditToken:(struct ? )arg1 photoLibrary:(id)arg2 ;
+(id)limitedLibraryApplicationTrustedIdentifierWithConnection:(id)arg0 purposedIdentifier:(id)arg1 error:(*id)arg2 ;
-(NSInteger)cancellationBehaviorWithTraitCollection:(id)arg0 ;
-(id)init;
-(id)initForMemoriesPickerWithPHPickerConfiguration:(id)arg0 memoryAssetCollection:(id)arg1 ;
-(id)initForUIImagePickerControllerWithPHPickerConfiguration:(id)arg0 connection:(id)arg1 purposedLimitedLibraryApplicationIdentifier:(id)arg2 overriddenGeneratedFilter:(id)arg3 ;
-(id)initWithPHPickerConfiguration:(id)arg0 connection:(id)arg1 ;
-(id)initWithPHPickerConfiguration:(id)arg0 connection:(id)arg1 purposedLimitedLibraryApplicationIdentifier:(id)arg2 overriddenGeneratedFilter:(id)arg3 allowsDownload:(BOOL)arg4 usesMemoriesLayout:(BOOL)arg5 memoryAssetCollection:(id)arg6 ;


@end


#endif