// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMSPODCASTSFETCHREQUESTS_H
#define NMSPODCASTSFETCHREQUESTS_H


#import <Foundation/Foundation.h>


@interface NMSPodcastsFetchRequests : NSObject



+(id)_createFetchRequestForEpisodeDownloadableItem;
+(id)_predicateForDownloadableWatchEpisodesWithDownloadedOnly:(BOOL)arg0 unplayedOnly:(BOOL)arg1 ;
+(id)fetchRequestForFeedURL:(id)arg0 downloadSettings:(id)arg1 downloadedOnly:(BOOL)arg2 ctx:(id)arg3 ;
+(id)fetchRequestForSavedEpisodesDownloadSettings:(id)arg0 downloadedOnly:(BOOL)arg1 ;
+(id)fetchRequestForStationUUID:(id)arg0 downloadSettings:(id)arg1 downloadedOnly:(BOOL)arg2 ;
+(id)fetchRequestForUpNextDownloadSettings:(id)arg0 downloadedOnly:(BOOL)arg1 ;
+(id)legacy_fetchRequestForEpisodesWithFeedURL:(id)arg0 downloadedOnly:(BOOL)arg1 ctx:(id)arg2 ;
+(id)legacy_fetchRequestForSavedEpisodesDownloadedOnly:(BOOL)arg0 ;
+(id)legacy_fetchRequestForStationWithUUID:(id)arg0 ;
+(id)legacy_fetchRequestForUpNextEpisodesDownloadedOnly:(BOOL)arg0 ;


@end


#endif