// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POUTILITIES_H
#define POUTILITIES_H


#import <Foundation/Foundation.h>


@interface POUtilities : NSObject



+(BOOL)assistantErrorIsInformational:(id)arg0 ;
+(BOOL)errorIsMaxStreamCount:(id)arg0 ;
+(BOOL)errorIsNoNetwork:(id)arg0 ;
+(BOOL)isPodcastsNowPlaying;
+(id)commandStatusForRemoteStatus:(unsigned int)arg0 error:(id)arg1 isRemoteStorePlayback:(BOOL)arg2 ;
+(id)identifierFromDomainObject:(id)arg0 ;
+(id)typeFromDomainObject:(id)arg0 ;
+(struct _MRSystemAppPlaybackQueue *)createPlaybackQueueFromRequestIdentifiers:(id)arg0 startPlaying:(BOOL)arg1 assetInfo:(id)arg2 requesterSharedUserId:(id)arg3 sharedUserIdFromPlayableITunesAccount:(id)arg4 ;
+(void)_resolveWithDestination:(id)arg0 hashedRouteIdentifiers:(id)arg1 decodedRouteIdentifiers:(id)arg2 originatingOutputDeviceUID:(id)arg3 localPlaybackPermitted:(BOOL)arg4 audioRoutingInfo:(struct ? )arg5 completion:(id)arg6 ;
+(void)modifyContextForAirplay:(id)arg0 andPlayLocally:(id)arg1 completion:(id)arg2 ;
+(void)performPodcastsPlaybackRequestWithIdentifier:(id)arg0 assetInfo:(id)arg1 decodedRouteUIDs:(id)arg2 originatingOutputDeviceUID:(id)arg3 startPlaying:(BOOL)arg4 requesterSharedUserId:(id)arg5 sharedUserIdFromPlayableITunesAccount:(id)arg6 context:(id)arg7 allowsFallback:(BOOL)arg8 completion:(id)arg9 ;
+(void)performPodcastsPlaybackRequestWithIdentifier:(id)arg0 assetInfo:(id)arg1 hashedRouteUIDs:(id)arg2 decodedRouteUIDs:(id)arg3 originatingOutputDeviceUID:(id)arg4 startPlaying:(BOOL)arg5 requesterSharedUserId:(id)arg6 sharedUserIdFromPlayableITunesAccount:(id)arg7 context:(id)arg8 allowsFallback:(BOOL)arg9 completion:(id)arg10 ;
+(void)performPodcastsPlaybackRequestWithIdentifier:(id)arg0 assetInfo:(id)arg1 hashedRouteUIDs:(id)arg2 startPlaying:(BOOL)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 context:(id)arg6 allowsFallback:(BOOL)arg7 completion:(id)arg8 ;
+(void)performPodcastsPlaybackRequestWithIdentifier:(id)arg0 assetInfo:(id)arg1 hashedRouteUIDs:(id)arg2 startPlaying:(BOOL)arg3 requesterSharedUserId:(id)arg4 sharedUserIdFromPlayableITunesAccount:(id)arg5 context:(id)arg6 completion:(id)arg7 ;
+(void)setPlaybackRate:(float)arg0 failureErrorCode:(NSInteger)arg1 completion:(id)arg2 ;


@end


#endif