// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTUPNEXTMEDIAITEMGROUP_H
#define NMSPODCASTUPNEXTMEDIAITEMGROUP_H

@class NSArray;


#import "NMSMediaItemGroup.h"

@interface NMSPodcastUpNextMediaItemGroup : NMSMediaItemGroup {
    NSArray *_upNextEpisodes;
    NSArray *_upNextFeedURLs;
}




-(id)_upNextEpisodes;
-(id)_upNextFeedURLs;
-(id)identifiersForContainerType:(NSUInteger)arg0 ;
-(id)itemList;


@end


#endif