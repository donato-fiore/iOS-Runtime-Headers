// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPMAPSPATHS_H
#define MSPMAPSPATHS_H

@class NSURL, NSString;

#import <Foundation/Foundation.h>


@interface MSPMapsPaths : NSObject {
    NSURL *_libraryURL;
    NSURL *_groupLibraryURL;
    id *_invalidationHandler;
}


@property (readonly, nonatomic) NSString *bookmarksSettingsPath; // ivar: _bookmarksSettingsPath
@property (readonly, nonatomic) NSString *cacheDirectory; // ivar: _cacheDirectory
@property (readonly, nonatomic) NSString *directionsCachePath; // ivar: _directionsCachePath
@property (readonly, nonatomic) NSString *directionsSettingsPath; // ivar: _directionsSettingsPath
@property (readonly, nonatomic) NSString *failedDirectionsSettingsPath; // ivar: _failedDirectionsSettingsPath
@property (readonly, nonatomic) NSString *failedGeoDirectionsSettingsPath; // ivar: _failedGeoDirectionsSettingsPath
@property (readonly, nonatomic) NSString *failedGeoSearchesSettingsPath; // ivar: _failedGeoSearchesSettingsPath
@property (readonly, nonatomic) NSString *failedSearchesSettingsPath; // ivar: _failedSearchesSettingsPath
@property (readonly, nonatomic) NSString *favoritesSyncedMarkerFile; // ivar: _favoritesSyncedMarkerFile
@property (readonly, nonatomic) NSString *geoBookmarksSettingsPath; // ivar: _geoBookmarksSettingsPath
@property (readonly, nonatomic) NSString *geoCollectionsSettingsPath; // ivar: _geoCollectionsSettingsPath
@property (readonly, nonatomic) NSString *geoHistorySettingsPath; // ivar: _geoHistorySettingsPath
@property (readonly, nonatomic) NSString *geoPinnedPlacesSettingsPath; // ivar: _geoPinnedPlacesSettingsPath
@property (readonly, nonatomic) NSString *groupDirectory; // ivar: _groupDirectory
@property (readonly, nonatomic) NSString *historySettingsPath; // ivar: _historySettingsPath
@property (readonly, nonatomic) NSString *historySyncedMarkerFile; // ivar: _historySyncedMarkerFile
@property (readonly, nonatomic) NSString *homeDirectory;
@property (readonly, nonatomic) NSString *mapsDirectory; // ivar: _mapsDirectory
@property (readonly, nonatomic) NSString *nanoDirectory; // ivar: _nanoDirectory
@property (readonly, nonatomic) NSString *nanoHistorySettingsPath; // ivar: _nanoHistorySettingsPath
@property (readonly, nonatomic) NSString *pinsSettingsPath; // ivar: _pinsSettingsPath
@property (readonly, nonatomic) NSString *reportAProblemDirectionsRecordingsPath; // ivar: _reportAProblemDirectionsRecordingsPath
@property (readonly, nonatomic) NSString *reportAProblemNotificationsPath; // ivar: _reportAProblemNotificationsPath
@property (readonly, nonatomic) NSString *reportAProblemSearchRecordingsPath; // ivar: _reportAProblemSearchRecordingsPath
@property (readonly, nonatomic) NSString *routingAppLaunchRecordPath; // ivar: _routingAppLaunchRecordPath
@property (readonly, nonatomic) BOOL shouldSyncMergeFavoritesAfterCheckingOrCreatingMarkerFile;
@property (readonly, nonatomic) BOOL shouldSyncMergeHistoryAfterCheckingOrCreatingMarkerFile;


+(id)currentMapsApplicationContainerURL;
+(id)currentMapsGroupContainerURL;
+(id)mapsApplicationContainerPaths;
+(id)mapsApplicationContainerPathsWithInvalidationHandler:(id)arg0 ;
+(id)pathsAtLocation:(NSInteger)arg0 ;
-(BOOL)_deleteSyncedFileAtPath:(id)arg0 ;
-(BOOL)_shouldSyncMergeAfterCheckingOrCreatingMarkerFileAtPath:(id)arg0 ;
-(BOOL)deleteFavoritesSyncedMarkerFile;
-(BOOL)deleteHistorySyncedMarkerFile;
-(id)initWithLibraryDirectoryURL:(id)arg0 groupLibraryURL:(id)arg1 invalidationHandler:(id)arg2 ;
-(void)_invalidate;


@end


#endif