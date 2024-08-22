// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSMUSICRECOMMENDATIONMANAGER_H
#define NMSMUSICRECOMMENDATIONMANAGER_H

@class NSArray, NSSet;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_dispatch_group;

#import <Foundation/Foundation.h>

#import "NMSInitialCloudLibraryImportObserver.h"

@interface NMSMusicRecommendationManager : NSObject {
    NSArray *_recommendations;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_libraryRecommendationExpirationTimer;
    NSObject<OS_dispatch_source> *_artworkRetryTimer;
    NSUInteger _artworkRetryAttempt;
    NSSet *_artworkRetryPlaylists;
    NSObject<OS_dispatch_group> *_initialRecommendationsFetchGroup;
    BOOL _hasFetchedInitialRecommendations;
    NMSInitialCloudLibraryImportObserver *_initialCloudLibraryImportObserver;
}


@property (nonatomic) BOOL wantsContentsUpdate; // ivar: _wantsContentsUpdate


+(BOOL)_shouldComputeLibraryRecommendations;
+(id)sharedManager;
-(BOOL)_isLibraryRecommendationExpired;
-(BOOL)_updateRecommendationsSelections;
-(BOOL)_updateWithRecommendations:(id)arg0 ;
-(BOOL)hasSelectedRecommendationWithIdentifier:(id)arg0 ;
-(id)_expirationDateForUpdateDate:(id)arg0 withOffsetDays:(NSInteger)arg1 ;
-(id)_fetchAddedDateForContainer:(id)arg0 ;
-(id)_recommendations;
-(id)_sortedContainersBasedOnRecency;
-(id)init;
-(void)_deleteCachedArtworksWithTokens:(id)arg0 ;
-(void)_finishLoadingContentsWithResponse:(id)arg0 ;
-(void)_handleActiveAccountDidChangeNotification:(id)arg0 ;
-(void)_handleArtworksDidUpdateNotification:(id)arg0 ;
-(void)_handleMediaLibraryDidChangeNotification:(id)arg0 ;
-(void)_handleMediaLibraryDynamicPropertiesDidChangeNotification:(id)arg0 ;
-(void)_handleMediaLibraryEntitiesAddedOrRemovedNotification:(id)arg0 ;
-(void)_handleMusicLibraryContentsDidChangeNotification:(id)arg0 ;
-(void)_handlePairedDeviceDidBecomeActiveNotification:(id)arg0 ;
-(void)_handlePairingFinishedNotification:(id)arg0 ;
-(void)_handleRecommendationSelectionsDidChangeNotification:(id)arg0 ;
-(void)_handleRecommendationStoreContentsDidChangeNotification:(id)arg0 ;
-(void)_handleSubscriptionStatusDidChangeNotification:(id)arg0 ;
-(void)_importArtworkForPlaylists:(id)arg0 ;
-(void)_importArtworkIfNecessaryForObjectsIgnorePreviousCache:(BOOL)arg0 ;
-(void)_invalidateArtworkRetryTimer;
-(void)_invalidateLibraryRecommendationExpirationTimer;
-(void)_notifyMusicRecommendationsDidUpdateNotification;
-(void)_persistUpdatedRecommendationsWithResponse:(id)arg0 ;
-(void)_registerForPairingFinishedNotification;
-(void)_reloadLibraryRecommendations;
-(void)_reloadRecommendationContentsIfNecessary;
-(void)_reloadRecommendationsFromDefaultsWithCompletion:(id)arg0 ;
-(void)_removeLegacyRecommendationsDefaultsIfNecessary;
-(void)_removePreviousCachedRecommendationsResponses;
-(void)_removePreviousRecommendationDefaults;
-(void)_retryFailedArtworkImportsIfNecessary;
-(void)_scheduleNextLibraryRecommendationReloadIfNecessary;
-(void)_setArtworkImageCache:(id)arg0 withToken:(id)arg1 ;
-(void)_startArtworkRetryTimer;
-(void)_unregisterForPairingFinishedNotification;
-(void)dealloc;
-(void)fetchRecommendationsWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)nms_deselectRecommendationIfNecessaryForModelObject:(id)arg0 ;
-(void)nms_fetchRecentMusicRecommendationWithQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)nms_fetchSelectedRecommendationSectionTypesForModelObject:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)persistRecommendationsSelections:(id)arg0 ;


@end


#endif