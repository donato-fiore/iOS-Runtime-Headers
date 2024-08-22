// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTURLCOMMANDREQUEST_H
#define MTURLCOMMANDREQUEST_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MTURLCommandRequest : NSObject <NSCopying>



@property (readonly, nonatomic) NSUInteger commandType; // ivar: _commandType
@property (readonly, nonatomic) NSString *episodeAdamId; // ivar: _episodeAdamId
@property (readonly, nonatomic) NSString *episodeUuid; // ivar: _episodeUuid
@property (readonly, nonatomic) NSInteger playContext; // ivar: _playContext
@property (readonly, nonatomic) NSInteger playContextSortType; // ivar: _playContextSortType
@property (readonly, nonatomic) NSUInteger playQueueType; // ivar: _playQueueType
@property (readonly, nonatomic) NSUInteger playReason; // ivar: _playReason
@property (readonly, nonatomic) NSInteger playbackOrder; // ivar: _playbackOrder
@property (readonly, nonatomic) NSString *podcastAdamId; // ivar: _podcastAdamId
@property (readonly, nonatomic) NSString *podcastFeedUrl; // ivar: _podcastFeedUrl
@property (readonly, nonatomic) NSString *podcastUuid; // ivar: _podcastUuid
@property (readonly, nonatomic) NSString *requesterDsid; // ivar: _requesterDsid
@property (readonly, nonatomic) NSString *stationUuid; // ivar: _stationUuid
@property (readonly, nonatomic) NSString *urlString; // ivar: _urlString


-(id)copyWithPlayReason:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithURLString:(id)arg0 ;
-(void)_loadQueryParameterValuesFromString:(id)arg0 ;
-(void)_lookupEpisodeUuidIfNecessaryFromURLString:(id)arg0 ;
-(void)_lookupPodcastUuidIfNecessaryFromURLString:(id)arg0 ;


@end


#endif