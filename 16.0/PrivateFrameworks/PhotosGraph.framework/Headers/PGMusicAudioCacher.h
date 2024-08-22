// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMUSICAUDIOCACHER_H
#define PGMUSICAUDIOCACHER_H


#import <Foundation/Foundation.h>


@interface PGMusicAudioCacher : NSObject



+(id)songPropertiesByAdamIDCachedForPhotosWithError:(*id)arg0 ;
+(void)_addSongsWithAdamIDs:(id)arg0 toPlaylist:(id)arg1 inLibrary:(id)arg2 progressReporter:(id)arg3 completionHandler:(id)arg4 ;
+(void)cacheSongAudioForAdamIDs:(id)arg0 progressReporter:(id)arg1 completionHandler:(id)arg2 ;
+(void)removeAllSongsCachedForPhotosWithProgressReporter:(id)arg0 completionHandler:(id)arg1 ;
+(void)removeSongsCachedForPhotosWithAdamIDs:(id)arg0 progressReporter:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif