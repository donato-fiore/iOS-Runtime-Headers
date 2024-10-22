// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXBASEDISPLAYCOLLECTION_H
#define PXBASEDISPLAYCOLLECTION_H

@class NSString;
@protocol PXDisplayCollection;

#import <Foundation/Foundation.h>


@interface PXBaseDisplayCollection : NSObject <PXDisplayCollection>



@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) BOOL px_allowsImplicitSelectionForProjectOrSharingAction;
@property (readonly, nonatomic) BOOL px_allowsMoveToPersonalLibrary;
@property (readonly, nonatomic) BOOL px_allowsMoveToSharedLibrary;
@property (readonly, nonatomic) BOOL px_canAddContent;
@property (readonly, nonatomic) BOOL px_canCreateContent;
@property (readonly, nonatomic) BOOL px_canDeleteContent;
@property (readonly, nonatomic) BOOL px_canRearrangeContent;
@property (readonly, nonatomic) BOOL px_canRemoveContent;
@property (readonly, nonatomic) id *px_cheapLogIdentifier;
@property (readonly, nonatomic) BOOL px_containsPrivateContent;
@property (readonly, nonatomic) BOOL px_isAllLibraryDuplicatesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isAllPhotosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isAnimatedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isBurstsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isCinematicSmartAlbum;
@property (readonly, nonatomic) BOOL px_isCloudMultipleContributorsEnabled;
@property (readonly, nonatomic) BOOL px_isContentSyndicationAlbum;
@property (readonly, nonatomic) BOOL px_isContentSyndicationAllPhotosAlbum;
@property (readonly, nonatomic) BOOL px_isContentSyndicationFolder;
@property (readonly, nonatomic) BOOL px_isContentSyndicationVirtualCollection;
@property (readonly, nonatomic) BOOL px_isDeletable;
@property (readonly, nonatomic) BOOL px_isDepthEffectSmartAlbum;
@property (readonly, nonatomic) BOOL px_isFavoritesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isFolder;
@property (readonly, nonatomic) BOOL px_isForYouVirtualCollection;
@property (readonly, nonatomic) BOOL px_isHiddenSmartAlbum;
@property (readonly, nonatomic) BOOL px_isHighlight;
@property (readonly, nonatomic) BOOL px_isImportHistoryCollection;
@property (readonly, nonatomic) BOOL px_isImportSessionCollection;
@property (readonly, nonatomic) BOOL px_isImportedAlbum;
@property (readonly, nonatomic) BOOL px_isInReadWriteCloudLibrary;
@property (readonly, nonatomic) BOOL px_isLivePhotosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isLongExposuresSmartAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedEventsFolder;
@property (readonly, nonatomic) BOOL px_isMacSyncedFacesAlbum;
@property (readonly, nonatomic) BOOL px_isMacSyncedFacesFolder;
@property (readonly, nonatomic) BOOL px_isMacSyncedRegularAlbum;
@property (readonly, nonatomic) BOOL px_isMediaTypeSmartAlbum;
@property (readonly, nonatomic) BOOL px_isMediaTypesFolder;
@property (readonly, nonatomic) BOOL px_isMemoriesVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMemory;
@property (readonly, nonatomic) BOOL px_isMoment;
@property (readonly, nonatomic) BOOL px_isMomentShare;
@property (readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMyAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL px_isNotUploadedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property (readonly, nonatomic) BOOL px_isPanoramasSmartAlbum;
@property (readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isPrivacySensitiveAlbum;
@property (readonly, nonatomic) BOOL px_isProResSmartAlbum;
@property (readonly, nonatomic) BOOL px_isProject;
@property (readonly, nonatomic) BOOL px_isProjectsFolder;
@property (readonly, nonatomic) BOOL px_isRAWSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyAddedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyDeletedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentlyEditedSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRecentsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isRegularAlbum;
@property (readonly, nonatomic) BOOL px_isRegularFolder;
@property (readonly, nonatomic) BOOL px_isRenamable;
@property (readonly, nonatomic) BOOL px_isRootSmartAlbum;
@property (readonly, nonatomic) BOOL px_isScreenRecordingsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isScreenshotsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSelfPortraitsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSharedActivityVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSharedAlbum;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsAndActivityFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsFolder;
@property (readonly, nonatomic) BOOL px_isSharedAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isSharedLibrarySharingSuggestion;
@property (readonly, nonatomic) BOOL px_isSharedLibrarySharingSuggestionsSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSharedLibrarySmartAlbum;
@property (readonly, nonatomic) BOOL px_isSlomoVideosSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSmartAlbum;
@property (readonly, nonatomic) BOOL px_isSmartFolder;
@property (readonly, nonatomic) BOOL px_isStandInAlbum;
@property (readonly, nonatomic) BOOL px_isSuggestion;
@property (readonly, nonatomic) BOOL px_isTimelapsesSmartAlbum;
@property (readonly, nonatomic) BOOL px_isTopLevelFolder;
@property (readonly, nonatomic) BOOL px_isTransientPlacesCollection;
@property (readonly, nonatomic) BOOL px_isUnableToUploadSmartAlbum;
@property (readonly, nonatomic) BOOL px_isUserCreated;
@property (readonly, nonatomic) BOOL px_isUserSmartAlbum;
@property (readonly, nonatomic) BOOL px_isVideosSmartAlbum;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif