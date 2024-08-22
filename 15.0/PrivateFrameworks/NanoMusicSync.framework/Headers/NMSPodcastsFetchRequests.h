// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NMSPODCASTSFETCHREQUESTS_H
#define NMSPODCASTSFETCHREQUESTS_H


#import <Foundation/Foundation.h>


@interface NMSPodcastsFetchRequests : NSObject



+(id)_predicateForDownloadableWatchEpisodesWithDownloadedOnly:(BOOL)arg0 ;
+(id)_propertiesToFetchForEpisodeIterators;
+(id)fetchRequestForEpisodesWithFeedURL:(id)arg0 downloadedOnly:(BOOL)arg1 ctx:(id)arg2 ;
+(id)fetchRequestForSavedEpisodesDownloadedOnly:(BOOL)arg0 ;
+(id)fetchRequestForStationWithUUID:(id)arg0 ;
+(id)fetchRequestForUpNextEpisodesDownloadedOnly:(BOOL)arg0 ;


@end


#endif