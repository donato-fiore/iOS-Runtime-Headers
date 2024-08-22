// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLEADERBOARDSCOREPLAYERSREQUEST_H
#define GKLEADERBOARDSCOREPLAYERSREQUEST_H

@class NSArray;


#import "GKLeaderboardScoreRequest.h"

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest

@property (copy, nonatomic) NSArray *playerInternals; // ivar: _playerInternals


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif