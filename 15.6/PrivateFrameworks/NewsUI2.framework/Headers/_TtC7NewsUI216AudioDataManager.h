// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7NEWSUI216AUDIODATAMANAGER_H
#define _TTC7NEWSUI216AUDIODATAMANAGER_H


#import <Foundation/Foundation.h>


@interface _TtC7NewsUI216AudioDataManager : NSObject {
    ? state;
    ? feedConfigManager;
    ? readingHistory;
    ? audioPlaylist;
    ? heroStore;
    ? playlistStore;
    ? recentlyPlayedStore;
    ? suggestionsStore;
    ? updateQueue;
    ? headlineConverter;
    ? completedListeningProcessor;
    ? bundleSubscriptionManager;
    ? feedContextFactory;
    ? topOfFeedTrack;
    ? dailyBriefingTrack;
    ? upNextTracks;
    ? suggestedTracks;
    ? recentlyPlayedTracks;
}




-(id)init;


@end


#endif