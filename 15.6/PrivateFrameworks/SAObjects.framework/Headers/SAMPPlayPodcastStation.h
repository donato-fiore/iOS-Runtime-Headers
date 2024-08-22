// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPPLAYPODCASTSTATION_H
#define SAMPPLAYPODCASTSTATION_H

@class NSArray, NSString;


#import "SADomainCommand.h"
#import "SAMPPodcastStation.h"

@interface SAMPPlayPodcastStation : SADomainCommand

@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableITunesAccount;
@property (nonatomic) BOOL startPlaying;
@property (retain, nonatomic) SAMPPodcastStation *station;


+(id)playPodcastStation;
+(id)playPodcastStationWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif