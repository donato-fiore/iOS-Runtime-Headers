// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MLGENIUSPLAYLISTCONTROLLER_H
#define MLGENIUSPLAYLISTCONTROLLER_H

@class NSMutableData;

#import <Foundation/Foundation.h>


@interface MLGeniusPlaylistController : NSObject {
    *void _echo;
    *void _echo_library;
    *void _echo_cluster_playlist;
    NSMutableData *_sharedBlobMutableData;
}




+(BOOL)hasGeniusDataAvailable;
+(BOOL)hasGeniusFeatureEnabled;
+(BOOL)useFakeGeniusData;
+(NSUInteger)defaultMinTrackCount;
+(NSUInteger)defaultTrackCount;
+(id)geniusTracksForSeedTrack:(id)arg0 error:(*id)arg1 ;
+(id)playlistControllerWithSeedTracks:(id)arg0 error:(*id)arg1 ;
+(void)ignoreUnusedWarnings;
+(void)populateContainer:(id)arg0 withSeedTrack:(id)arg1 completionBlock:(id)arg2 ;
-(BOOL)_canIncludeTrackInGeniusContainer:(id)arg0 ;
-(BOOL)_createClusterPlaylistWithSeedTracks:(id)arg0 error:(*id)arg1 ;
-(BOOL)_onBackgroundQueue_fakePopulateContainer:(id)arg0 withSeedTrack:(id)arg1 error:(*id)arg2 ;
-(BOOL)_onBackgroundQueue_populateContainer:(id)arg0 seedTrack:(id)arg1 error:(*id)arg2 ;
-(id)_debugGetTracksStartingAtTrackWithPersistentID:(NSUInteger)arg0 maxTracks:(NSUInteger)arg1 stride:(int)arg2 ;
-(id)_onBackgroundQueue_tracksFromClusterForPlaylistItemMax:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)_sharedBlobMutableData;
-(id)init;
-(id)tracksFromClusterForCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif