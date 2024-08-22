// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTRECENCYUTIL_H
#define MTRECENCYUTIL_H


#import <Foundation/Foundation.h>


@interface MTRecencyUtil : NSObject



+(CGFloat)_lastDatePlayedIfNotFutureDate:(CGFloat)arg0 podcast:(id)arg1 ;
+(id)_nextEpisodeForUnplayedPodcast:(id)arg0 serial:(BOOL)arg1 filter:(id)arg2 ctx:(id)arg3 ;
+(id)_upNextForPodcast:(id)arg0 serial:(BOOL)arg1 excludeExplicit:(NSInteger)arg2 excludeStreaming:(NSInteger)arg3 ctx:(id)arg4 ;
+(id)episodesForListenNowWithContext:(id)arg0 limit:(NSInteger)arg1 ;
+(id)upNextForPodcastUuid:(id)arg0 ctx:(id)arg1 ;
+(id)upNextForPodcastUuid:(id)arg0 excludeExplicit:(NSInteger)arg1 excludeStreaming:(NSInteger)arg2 ctx:(id)arg3 ;


@end


#endif