// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOWNLOADDATASOURCE_H
#define VUIDOWNLOADDATASOURCE_H

@class NSArray, NSString, NSMutableDictionary, SSDownloadManager;
@protocol VUIMediaEntitiesFetchControllerDelegate, VUIDownloadManagerDelegate, SSDownloadManagerObserver, VUIDownloadDataSourceDelegate;


#import "VUIMediaEntitiesDataSource.h"
#import "VUIMediaEntitiesFetchController.h"
#import "VUIMediaLibrary.h"

@interface VUIDownloadDataSource : VUIMediaEntitiesDataSource <VUIMediaEntitiesFetchControllerDelegate, VUIDownloadManagerDelegate, SSDownloadManagerObserver>



@property (retain, nonatomic) VUIMediaEntitiesFetchController *activeDownloadingEntitiesFetchController; // ivar: _activeDownloadingEntitiesFetchController
@property (retain, nonatomic) NSArray *activelyDownloadingAdamIds; // ivar: _activelyDownloadingAdamIds
@property (retain, nonatomic) NSArray *activelyDownloadingMediaItems; // ivar: _activelyDownloadingMediaItems
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<VUIDownloadDataSourceDelegate> *downloadDelegate; // ivar: _downloadDelegate
@property (retain, nonatomic) NSArray *downloadEntities; // ivar: _downloadEntities
@property (retain, nonatomic) VUIMediaEntitiesFetchController *downloadedEntitiesFetchController; // ivar: _downloadedEntitiesFetchController
@property (retain, nonatomic) NSMutableDictionary *episodesDownloadingForShow; // ivar: _episodesDownloadingForShow
@property (retain, nonatomic) NSMutableDictionary *groupingByShowIdentifier; // ivar: _groupingByShowIdentifier
@property (nonatomic) BOOL hasFetchedAllDownloadEntities; // ivar: _hasFetchedAllDownloadEntities
@property (nonatomic) BOOL hasFetchedAllDownloadedEntities; // ivar: _hasFetchedAllDownloadedEntities
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *localMediaItems; // ivar: _localMediaItems
@property (readonly, nonatomic) VUIMediaLibrary *mediaLibrary; // ivar: _mediaLibrary
@property (nonatomic) BOOL performingRentalExpirationFetch; // ivar: _performingRentalExpirationFetch
@property (retain, nonatomic) SSDownloadManager *sDownloadManager; // ivar: _sDownloadManager
@property (readonly) Class superclass;


-(BOOL)_doesEpisodeSet:(id)arg0 containMediaEntity:(id)arg1 ;
-(BOOL)_downloadsDidChange:(id)arg0 ;
-(id)_coalesceActiveDownloadEntitiesAndDownloadedEntities;
-(id)_createDownloadEntitiesFromLatestDownloads:(id)arg0 ;
-(id)_createGroupingByShowIdentifierWithLatestMediaEntityGroups:(id)arg0 ;
-(id)_getDownloadEntityInDownloadEntities:(id)arg0 containingMediaEntity:(id)arg1 ;
-(id)_sortDownloadEntitiesByTitle:(id)arg0 ;
-(id)_upsertDownloadEntities:(id)arg0 withEpisodesDownloadingForShow:(id)arg1 ;
-(id)initWithMediaLibrary:(id)arg0 fetchRequest:(id)arg1 ;
-(void)_addNotificationObservers;
-(void)_getActivelyDownloadingAdamIDsWithCompletion:(id)arg0 ;
-(void)_handleDownloadingStateDidChange;
-(void)_loadActiveDownloads;
-(void)_loadDownloadedEntities;
-(void)_notifyDelegatesDownloadsFetchCompletedWithChanges:(BOOL)arg0 ;
-(void)_removeNotifcationObservers;
-(void)_rentalsDidExpire;
-(void)_updateDownloadEntity:(*id)arg0 withLatestMediaEntity:(id)arg1 ;
-(void)_upsertEpisodesDownloadingForShowWithMediaEntity:(id)arg0 ;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didCompleteWithResult:(id)arg2 ;
-(void)controller:(id)arg0 fetchRequests:(id)arg1 didFailWithError:(id)arg2 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;
-(void)loadDownloadData;
-(void)startFetch;


@end


#endif