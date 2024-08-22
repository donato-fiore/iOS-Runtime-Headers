// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SAMPSETQUEUE_H
#define SAMPSETQUEUE_H

@class NSString, NSArray, NSNumber;


#import "SADomainCommand.h"
#import "SAMPCollection.h"

@interface SAMPSetQueue : SADomainCommand

@property (copy, nonatomic) NSString *assetInfo;
@property (nonatomic) BOOL dryRun;
@property (copy, nonatomic) NSArray *filters;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (retain, nonatomic) SAMPCollection *mediaItems;
@property (copy, nonatomic) NSString *recommendationId;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) BOOL shouldOverrideManuallyCuratedUpNext;
@property (nonatomic) BOOL shouldReloadQueue;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSArray *sort;
@property (copy, nonatomic) NSNumber *startPlaying;


+(id)setQueue;
+(id)setQueueWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif