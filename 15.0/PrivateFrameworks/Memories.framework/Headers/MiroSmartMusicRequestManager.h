// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MIROSMARTMUSICREQUESTMANAGER_H
#define MIROSMARTMUSICREQUESTMANAGER_H

@class NSSet, NSArray;


#import "VEiOSSharedObject.h"
#import "FMSongLibrary.h"
#import "MiroAutoEditLogger.h"

@interface MiroSmartMusicRequestManager : VEiOSSharedObject {
    BOOL _moodIsDownloading;
}


@property (nonatomic) BOOL allowsDownloads; // ivar: _allowsDownloads
@property (nonatomic) BOOL didLogSongs; // ivar: _didLogSongs
@property (nonatomic) CGFloat initTime; // ivar: _initTime
@property (readonly, nonatomic) FMSongLibrary *library; // ivar: _library
@property (retain, nonatomic) MiroAutoEditLogger *logger; // ivar: _logger
@property (retain, nonatomic) NSSet *moodIDSet; // ivar: _moodIDSet
@property (retain) NSArray *observers; // ivar: _observers


-(BOOL)_isDownloadingAnything;
-(BOOL)_isDownloadingforMoodID:(id)arg0 ;
-(BOOL)hasEnoughLocalSongsForMoodID:(id)arg0 ;
-(BOOL)songHasSpecialKeyword:(id)arg0 ;
-(CGFloat)scoreLocalityForSong:(id)arg0 ;
-(CGFloat)scoreSong:(id)arg0 forSpecialKeywords:(id)arg1 ;
-(CGFloat)scoreSong:(id)arg0 withDateLastSelected:(CGFloat)arg1 ;
-(CGFloat)scoreSong:(id)arg0 withKeywords:(id)arg1 ;
-(CGFloat)scoreSong:(id)arg0 withMoodID:(id)arg1 ;
-(CGFloat)scoreSong:(id)arg0 withMusicGenreDistribution:(id)arg1 ;
-(CGFloat)scoreSong:(id)arg0 withRegionID:(id)arg1 ;
-(NSUInteger)_indexForMoodID:(id)arg0 ;
-(id)_addObserversOnSongLibrary:(id)arg0 indicateNetworkActivity:(BOOL)arg1 ;
-(id)_featuredSongPredicate;
-(id)_featuredSongPredicateForMoodTag:(id)arg0 ;
-(id)_featuredSongSortDescriptor;
-(id)_moodIDforSongUID:(id)arg0 ;
-(id)allSongsScoredForKeywords:(id)arg0 musicGenreDistribution:(id)arg1 moodID:(id)arg2 excludingSongs:(id)arg3 localOptions:(int)arg4 ;
-(id)bestLocalSongUIDForKeywords:(id)arg0 musicGenreDistribution:(id)arg1 moodID:(id)arg2 excludingSongs:(id)arg3 ;
-(id)bestLocalSongUIDForKeywords:(id)arg0 musicGenreDistribution:(id)arg1 moodID:(id)arg2 excludingSongs:(id)arg3 forceLocal:(BOOL)arg4 ;
-(id)bestSongToDownloadForMoodID:(id)arg0 ;
-(id)fetchAllSongs;
-(id)fetchFeaturedSongsForMoodTag:(id)arg0 ;
-(id)fetchSongWithUID:(id)arg0 ;
-(id)genreIDsForSong:(id)arg0 ;
-(id)init;
-(id)moodIDForSong:(id)arg0 ;
-(id)nextFeaturedSongToDownload;
-(id)recommendSongUIDForKeywords:(id)arg0 musicGenreDistribution:(id)arg1 moodID:(id)arg2 excludingSongs:(id)arg3 ;
-(id)songLibrary;
-(void)_downloadInProgressChanged:(id)arg0 ;
-(void)_removeObserversOnLibrary;
-(void)_requestDownloadForMoodID:(id)arg0 ;
-(void)_setDownloding:(BOOL)arg0 forMoodID:(id)arg1 ;
-(void)_setup;
-(void)dealloc;
-(void)logSongLibraryInitTimeWithLogger:(id)arg0 ;
-(void)markSongUIDAsRequested:(id)arg0 ;
-(void)purgeAllLocalCachedAssets;
-(void)storeDatePlayedForSongID:(id)arg0 ;
-(void)tearDownSongLibrary;


@end


#endif