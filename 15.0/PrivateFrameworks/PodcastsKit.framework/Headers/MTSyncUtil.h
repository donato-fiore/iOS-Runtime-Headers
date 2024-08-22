// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTSYNCUTIL_H
#define MTSYNCUTIL_H


#import <Foundation/Foundation.h>


@interface MTSyncUtil : NSObject



+(BOOL)bookmarksSyncDirtyFlagForSyncType:(NSInteger)arg0 ;
+(BOOL)isSubscriptionSyncEnabled;
+(BOOL)playlistSyncDirtyFlag;
+(BOOL)subscriptionSyncDirtyFlagForSyncType:(NSInteger)arg0 ;
+(NSInteger)syncTypeFromEpisode:(id)arg0 ;
+(id)podcastsDomainVersion;
+(id)userDefaultsKeyForBookmarksSyncType:(NSInteger)arg0 ;
+(id)userDefaultsKeyForSubscriptionSyncType:(NSInteger)arg0 ;
+(void)setBookmarksSyncDirtyFlag:(BOOL)arg0 syncType:(NSInteger)arg1 ;
+(void)setPlaylistSyncDirtyFlag:(BOOL)arg0 ;
+(void)setPodcastsDomainVersion:(id)arg0 ;
+(void)setSubscriptionSyncDirtyFlag:(BOOL)arg0 syncType:(NSInteger)arg1 ;


@end


#endif