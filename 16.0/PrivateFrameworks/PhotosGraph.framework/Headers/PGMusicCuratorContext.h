// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMUSICCURATORCONTEXT_H
#define PGMUSICCURATORCONTEXT_H

@class NSDictionary;

#import <Foundation/Foundation.h>

#import "PGMusicCurationRecentlyUsedSongs.h"

@interface PGMusicCuratorContext : NSObject {
    ? configuration;
    ? blocklistConfiguration;
    ? cache;
    ? photoLibrary;
    ? musicBag;
    ? adamIDsWithNegativeUserFeedback;
    ? allowExplicitMusicContent;
    ? musicCurationOverrideDictionary;
    ? musicForTopicUseTopicOnly;
    ? $__lazy_storage_$_keywordsByAdamID;
}


@property (nonatomic) BOOL allowChillMixElection; // ivar: allowChillMixElection
@property (nonatomic) BOOL allowGetUpMixElection; // ivar: allowGetUpMixElection
@property (nonatomic) BOOL forceShareableInBestSuggestions; // ivar: forceShareableInBestSuggestions
@property (nonatomic, copy) NSDictionary *musicCurationOverrideDictionary;
@property (nonatomic, readonly) PGMusicCurationRecentlyUsedSongs *recentlyUsedSongs; // ivar: recentlyUsedSongs
@property (nonatomic) BOOL refreshSongMetadata; // ivar: refreshSongMetadata
@property (nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions; // ivar: useOnlyMusicForTopicInTopPickSuggestions


+(id)contextWithPhotoLibrary:(id)arg0 adamIDsWithNegativeUserFeedback:(id)arg1 allowExplicitMusicContent:(id)arg2 cache:(id)arg3 musicBag:(id)arg4 recentlyUsedSongs:(id)arg5 error:(*id)arg6 ;
-(id)init;


@end


#endif