// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSCOUNTSMANAGER_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSCOUNTSMANAGER_H

@class NSString, NSDate, PHFetchResult, PHPhotoLibrary, PHAssetCollection;
@protocol PXPhotoLibraryUIChangeObserver, PXPreferencesObserver, PXChangeObserver, OS_dispatch_queue;


#import "PXObservable.h"
#import "PXSharedLibraryStatusProvider.h"
#import "PXUpdater.h"

@interface PXSharedLibrarySharingSuggestionsCountsManager : PXObservable <PXPhotoLibraryUIChangeObserver, PXPreferencesObserver, PXChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) ? detailedUnreadCounts; // ivar: _detailedUnreadCounts
@property (nonatomic) BOOL hasAnySuggestions; // ivar: _hasAnySuggestions
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isFetchingUnreadSuggestedAssetsFetchResult; // ivar: _isFetchingUnreadSuggestedAssetsFetchResult
@property (nonatomic) BOOL isSuggestionsEnabled; // ivar: _isSuggestionsEnabled
@property (readonly, nonatomic) PXSharedLibraryStatusProvider *libraryStatusProvider; // ivar: _libraryStatusProvider
@property (retain, nonatomic) NSDate *mostRecentAddedDateEverSeen; // ivar: _mostRecentAddedDateEverSeen
@property (retain, nonatomic) PHFetchResult *mostRecentAssetFetchResult; // ivar: _mostRecentAssetFetchResult
@property (retain, nonatomic) PHFetchResult *mostRecentSuggestedAssetFetchResult; // ivar: _mostRecentSuggestedAssetFetchResult
@property (retain, nonatomic) NSDate *mostRecentUserSeenAddedDate; // ivar: _mostRecentUserSeenAddedDate
@property (nonatomic) BOOL needsParticipantSetup; // ivar: _needsParticipantSetup
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSDate *priorityDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly, nonatomic) PHAssetCollection *sharingSuggestionsSmartAlbum; // ivar: _sharingSuggestionsSmartAlbum
@property (nonatomic) BOOL shouldShowNotificationBanner; // ivar: _shouldShowNotificationBanner
@property (readonly) Class superclass;
@property (retain, nonatomic) PHFetchResult *unreadSuggestedAssetsFetchResult; // ivar: _unreadSuggestedAssetsFetchResult
@property (readonly, nonatomic) PXUpdater *updater; // ivar: _updater


+(id)lastBannerDismissDateAccessor;
+(id)lastNotificationDateAccessor;
+(id)lastSeenSuggestionsDateAccessor;
-(BOOL)isAssetUnread:(id)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)prepareForPhotoLibraryChange:(id)arg0 ;
-(void)_fetchUnreadAssetsAfterDate;
-(void)_handleLastBannerDismissDateDidChange:(id)arg0 ;
-(void)_handleLastNotificationDateDidChange:(id)arg0 ;
-(void)_handleLastSeenAddedDateDidChange:(id)arg0 ;
-(void)_handleLastSeenSuggestionsDateDidChange:(id)arg0 ;
-(void)_handleUnreadSuggestedAssetsFetchResult:(id)arg0 forDate:(id)arg1 ;
-(void)_invalidateDetailedUnreadCounts;
-(void)_invalidateHasAnySuggestions;
-(void)_invalidateIsSuggestionsEnabled;
-(void)_invalidateMostRecentAddedDateEverSeen;
-(void)_invalidateMostRecentSeenSuggestedAssetAddedDate;
-(void)_invalidateMostRecentSuggestedAssetFetchResult;
-(void)_invalidateNeedsParticipantSetup;
-(void)_invalidateShouldShowBanner;
-(void)_queue_fetchUnreadAssetsAfterDate:(id)arg0 ;
-(void)_setNeedsUpdate;
-(void)_updateDetailedUnreadCounts;
-(void)_updateHasAnySuggestions;
-(void)_updateIsSuggestionsEnabled;
-(void)_updateMostRecentAddedDateEverSeen;
-(void)_updateMostRecentSeenSuggestedAssetAddedDate;
-(void)_updateMostRecentSuggestedAssetFetchResult;
-(void)_updateNeedsParticipantSetup;
-(void)_updateShouldShowBanner;
-(void)clearStoredDates;
-(void)didPerformChanges;
-(void)markAllSuggestionsAsRead;
-(void)markAnyNotificationsAsRead;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 withPreparedInfo:(id)arg1 ;
-(void)preferencesDidChange;


@end


#endif