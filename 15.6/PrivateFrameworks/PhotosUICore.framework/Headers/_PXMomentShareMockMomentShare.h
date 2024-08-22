// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXMOMENTSHAREMOCKMOMENTSHARE_H
#define _PXMOMENTSHAREMOCKMOMENTSHARE_H

@class NSString, NSDate, NSArray, NSURL;
@protocol PXDisplayMomentShare;


#import "PXBaseDisplayCollection.h"

@interface _PXMomentShareMockMomentShare : PXBaseDisplayCollection <PXDisplayMomentShare>



@property (readonly, nonatomic) NSInteger aggregateMediaType;
@property (readonly, nonatomic) NSUInteger assetCount; // ivar: _assetCount
@property (readonly, nonatomic) BOOL canContainAssets;
@property (readonly, nonatomic) BOOL canContainCollections;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger estimatedAssetCount; // ivar: _estimatedAssetCount
@property (readonly, nonatomic) NSDate *expiryDate; // ivar: _expiryDate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isAggregation;
@property (readonly, nonatomic) BOOL isEnriched;
@property (readonly, nonatomic) BOOL isEnrichmentComplete;
@property (readonly, nonatomic) BOOL isRecent;
@property (readonly, nonatomic) NSString *localizedDateDescription;
@property (readonly, nonatomic) NSString *localizedDebugDescription;
@property (readonly, nonatomic) NSArray *localizedLocationNames; // ivar: _localizedLocationNames
@property (readonly, nonatomic) NSString *localizedSmartDescription;
@property (readonly, nonatomic) NSString *localizedSubtitle;
@property (readonly, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (readonly, nonatomic) NSUInteger photosCount; // ivar: _photosCount
@property (readonly, nonatomic) CGFloat promotionScore;
@property (readonly, nonatomic) BOOL px_allowsImplicitSelectionForProjectOrSharingAction;
@property (readonly, nonatomic) BOOL px_canAddContent;
@property (readonly, nonatomic) BOOL px_canCreateContent;
@property (readonly, nonatomic) BOOL px_canDeleteContent;
@property (readonly, nonatomic) BOOL px_canRearrangeContent;
@property (readonly, nonatomic) BOOL px_canRemoveContent;
@property (readonly, nonatomic) id *px_cheapLogIdentifier;
@property (readonly, nonatomic) unsigned short px_highlightEnrichmentState; // ivar: _px_highlightEnrichmentState
@property (readonly, nonatomic) NSInteger px_highlightKind; // ivar: _px_highlightKind
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
@property (readonly, nonatomic) BOOL px_isFavoriteMemoriesSmartFolder;
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
@property (readonly, nonatomic) BOOL px_isMoment;
@property (readonly, nonatomic) BOOL px_isMomentShare;
@property (readonly, nonatomic) BOOL px_isMomentsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMyAlbumsVirtualCollection;
@property (readonly, nonatomic) BOOL px_isMyPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL px_isOwnedSharedAlbum;
@property (readonly, nonatomic) BOOL px_isPanoramasSmartAlbum;
@property (readonly, nonatomic) BOOL px_isPeopleVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPhotosVirtualCollection;
@property (readonly, nonatomic) BOOL px_isPlacesSmartAlbum;
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
@property (readonly, nonatomic) NSInteger px_momentShareType;
@property (readonly, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) unsigned short status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger uploadedPhotosCount; // ivar: _uploadedPhotosCount
@property (readonly, nonatomic) NSUInteger uploadedVideosCount; // ivar: _uploadedVideosCount
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSUInteger videosCount; // ivar: _videosCount


+(id)momentShareWithStatus:(unsigned short)arg0 photosCount:(NSUInteger)arg1 videosCount:(NSUInteger)arg2 uploadedPhotosCount:(NSUInteger)arg3 uploadedVideosCount:(NSUInteger)arg4 ;
-(id)initWithStatus:(unsigned short)arg0 assetCount:(NSUInteger)arg1 photosCount:(NSUInteger)arg2 videosCount:(NSUInteger)arg3 uploadedPhotosCount:(NSUInteger)arg4 uploadedVideosCount:(NSUInteger)arg5 shareURL:(id)arg6 expiryDate:(id)arg7 localizedTitle:(id)arg8 startDate:(id)arg9 endDate:(id)arg10 ;
-(id)localizedDateDescriptionWithOptions:(NSUInteger)arg0 ;


@end


#endif