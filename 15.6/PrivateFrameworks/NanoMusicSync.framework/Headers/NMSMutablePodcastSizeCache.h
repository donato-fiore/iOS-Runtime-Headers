// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NMSMUTABLEPODCASTSIZECACHE_H
#define NMSMUTABLEPODCASTSIZECACHE_H

@class NSMutableDictionary;


#import "NMSPodcastSizeCache.h"

@interface NMSMutablePodcastSizeCache : NMSPodcastSizeCache

@property (retain) NSMutableDictionary *mutableEpisodeSizeInfoDict; // ivar: _mutableEpisodeSizeInfoDict
@property (retain) NSMutableDictionary *mutableRelationshipDict; // ivar: _mutableRelationshipDict


-(id)_currentPodcastSizeDictionary;
-(id)episodeSizeInfoDict;
-(id)init;
-(id)itemsForFeedURL:(id)arg0 ;
-(id)relationshipDict;
-(void)setEpisodeSizeInfo:(id)arg0 forEpisode:(id)arg1 ;
-(void)setEpisodes:(id)arg0 forFeedURL:(id)arg1 ;
-(void)synchronize;


@end


#endif