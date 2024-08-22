// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTPODCASTEPISODEFILTER_H
#define MTPODCASTEPISODEFILTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTPodcastEpisodeFilter : NSObject

@property (nonatomic) NSInteger episodeTypeFilter; // ivar: _episodeTypeFilter
@property (nonatomic) NSInteger excludeExplicit; // ivar: _excludeExplicit
@property (nonatomic) BOOL excludeUnentitled; // ivar: _excludeUnentitled
@property (copy, nonatomic) NSString *excludingEpisodeUuid; // ivar: _excludingEpisodeUuid
@property (nonatomic) NSInteger playStateFilter; // ivar: _playStateFilter
@property (nonatomic) BOOL restrictToUserEpisodes; // ivar: _restrictToUserEpisodes


+(NSInteger)playStateFilterFromExcludePlayed:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)filterExcludingPlayed;
-(id)init;
-(id)predicateForPodcast:(id)arg0 ;


@end


#endif