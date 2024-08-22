// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18PODCASTSFOUNDATION29FEEDMANAGERLOCALCONFIGURATION_H
#define _TTC18PODCASTSFOUNDATION29FEEDMANAGERLOCALCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface _TtC18PodcastsFoundation29FeedManagerLocalConfiguration : NSObject {
    ? deltaNumberOfEpisodesToRequestPerPage;
    ? _supportsBatchInsertion;
    ? _workQueueConcurrent;
}


@property (nonatomic, readonly) NSInteger concurrentBootstrapUpdateLimit; // ivar: concurrentBootstrapUpdateLimit
@property (nonatomic, readonly) NSInteger concurrentDeltaUpdateLimit; // ivar: concurrentDeltaUpdateLimit
@property (nonatomic, readonly) NSInteger concurrentRSSUpdateLimit; // ivar: concurrentRSSUpdateLimit
@property (nonatomic, readonly) BOOL keepsFeedFileInTempDirAfterDownload; // ivar: keepsFeedFileInTempDirAfterDownload
@property (nonatomic, readonly) CGFloat timeoutIntervalForResource; // ivar: timeoutIntervalForResource
@property (nonatomic, readonly) BOOL useBackgroundFetchForFeedDownloads; // ivar: useBackgroundFetchForFeedDownloads
@property (nonatomic, readonly) BOOL usesCleanEpisodeTitles; // ivar: usesCleanEpisodeTitles


+(id)platformSpecificConfiguration;
-(id)init;


@end


#endif