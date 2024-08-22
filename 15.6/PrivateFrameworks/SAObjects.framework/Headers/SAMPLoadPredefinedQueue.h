// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SAMPLOADPREDEFINEDQUEUE_H
#define SAMPLOADPREDEFINEDQUEUE_H

@class NSArray, NSString, NSNumber;


#import "SADomainCommand.h"

@interface SAMPLoadPredefinedQueue : SADomainCommand

@property (nonatomic) BOOL dryRun;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (nonatomic) int mediaItemType;
@property (copy, nonatomic) NSString *requesterSharedUserId;
@property (copy, nonatomic) NSString *sharedUserIdFromPlayableMusicAccount;
@property (nonatomic) BOOL shouldShuffle;
@property (copy, nonatomic) NSNumber *startPlaying;


+(id)loadPredefinedQueue;
+(id)loadPredefinedQueueWithDictionary:(id)arg0 context:(id)arg1 ;
-(BOOL)mutatingCommand;
-(BOOL)requiresResponse;
-(id)encodedClassName;
-(id)groupIdentifier;


@end


#endif