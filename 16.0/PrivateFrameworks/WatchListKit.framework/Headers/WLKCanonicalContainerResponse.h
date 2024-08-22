// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WLKCANONICALCONTAINERRESPONSE_H
#define WLKCANONICALCONTAINERRESPONSE_H

@class NSString, NSArray, NSDictionary;

#import <Foundation/Foundation.h>

#import "WLKBasicEpisodeMetadata.h"

@interface WLKCanonicalContainerResponse : NSObject

@property (readonly, copy, nonatomic) NSString *canonicalID; // ivar: _canonicalID
@property (readonly, copy, nonatomic) NSArray *channels; // ivar: _channels
@property (readonly, nonatomic) NSUInteger contentType; // ivar: _contentType
@property (readonly, copy, nonatomic) WLKBasicEpisodeMetadata *currentEpisode; // ivar: _currentEpisode
@property (readonly, copy, nonatomic) NSDictionary *defaultSeason; // ivar: _defaultSeason
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic, getter=isWatchListable) BOOL watchListable; // ivar: _watchListable
@property (readonly, nonatomic, getter=isWatchListed) BOOL watchListed; // ivar: _watchListed


+(id)parseChannelsFromPayload:(id)arg0 ;
-(id)init;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif