// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SAMPPLAYPODCASTEPISODE_H
#define SAMPPLAYPODCASTEPISODE_H

@class NSString, NSArray;


#import "SADomainCommand.h"
#import "SAMPPodcast.h"

@interface SAMPPlayPodcastEpisode : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPPodcast *podcastEpisode;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) BOOL startPlaying;


+(id)playPodcastEpisode;
+(id)playPodcastEpisodeWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif