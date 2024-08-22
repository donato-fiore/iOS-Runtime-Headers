// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMUSICCURATIONOPTIONS_H
#define PGMUSICCURATIONOPTIONS_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface PGMusicCurationOptions : NSObject

@property (readonly, nonatomic) BOOL includeChillMixInMusicForYou; // ivar: _includeChillMixInMusicForYou
@property (readonly, nonatomic) BOOL includeGetUpMixInMusicForYou; // ivar: _includeGetUpMixInMusicForYou
@property (readonly, nonatomic) NSArray *recentlyUsedBundledSongIDs; // ivar: _recentlyUsedBundledSongIDs
@property (readonly, nonatomic) NSArray *recentlyUsedSongAdamIDs; // ivar: _recentlyUsedSongAdamIDs
@property (readonly, nonatomic) NSString *rootMemoryLocalIdentifier; // ivar: _rootMemoryLocalIdentifier
@property (readonly, nonatomic) BOOL shouldCurateUpNextMemories; // ivar: _shouldCurateUpNextMemories
@property (readonly, nonatomic) BOOL shouldForceShareableInBestSuggestions; // ivar: _shouldForceShareableInBestSuggestions
@property (readonly, nonatomic) BOOL shouldRefreshSongMetadata; // ivar: _shouldRefreshSongMetadata
@property (readonly, nonatomic) BOOL useOnlyMusicForTopicInTopPickSuggestions; // ivar: _useOnlyMusicForTopicInTopPickSuggestions


-(id)initForMemoryEnrichment;
-(id)initForUpNextMemoryRequestWithOptionsDictionary:(id)arg0 ;
-(id)initWithOptionsDictionary:(id)arg0 ;


@end


#endif