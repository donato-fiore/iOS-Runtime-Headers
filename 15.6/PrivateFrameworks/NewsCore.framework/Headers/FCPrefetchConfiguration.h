// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCPREFETCHCONFIGURATION_H
#define FCPREFETCHCONFIGURATION_H

@class NTPBPrefetchConfig, NSDictionary;

#import <Foundation/Foundation.h>


@interface FCPrefetchConfiguration : NSObject {
    NTPBPrefetchConfig *_pbConfig;
    NSDictionary *_configDict;
}


@property (readonly, nonatomic, getter=isBackgroundFetchEnabled) BOOL backgroundFetchEnabled; // ivar: _backgroundFetchEnabled
@property (readonly, nonatomic) NSUInteger maximumFavoritesFeedsToPrefetch; // ivar: _maximumFavoritesFeedsToPrefetch
@property (readonly, nonatomic) CGFloat minimumBackgroundFetchInterval; // ivar: _minimumBackgroundFetchInterval
@property (readonly, nonatomic) CGFloat prefetchedForYouExpiration; // ivar: _prefetchedForYouExpiration
@property (readonly, nonatomic) BOOL shouldPrefetchForYouFeed; // ivar: _shouldPrefetchForYouFeed


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithConfigDictionary:(id)arg0 ;
-(id)initWithDefaults;
-(id)initWithPBPrefetchConfig:(id)arg0 ;


@end


#endif