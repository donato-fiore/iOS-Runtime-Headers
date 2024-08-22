// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTEPISODELOOKUPREQUEST_H
#define MTEPISODELOOKUPREQUEST_H

@class NSString;

#import <Foundation/Foundation.h>


@interface MTEpisodeLookupRequest : NSObject

@property (retain, nonatomic) NSString *episodeGuid; // ivar: _episodeGuid
@property (retain, nonatomic) NSString *episodeTitle; // ivar: _episodeTitle
@property (nonatomic) NSInteger persistentID; // ivar: _persistentID
@property (retain, nonatomic) NSString *podcastFeedUrl; // ivar: _podcastFeedUrl
@property (retain, nonatomic) NSString *podcastTitle; // ivar: _podcastTitle
@property (nonatomic) NSInteger storeTrackId; // ivar: _storeTrackId
@property (retain, nonatomic) NSString *streamUrl; // ivar: _streamUrl
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid




@end


#endif