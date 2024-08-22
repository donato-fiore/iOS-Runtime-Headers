// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKLEADERBOARDSUMMARY_H
#define GKLEADERBOARDSUMMARY_H


#import <Foundation/Foundation.h>

#import "GKLeaderboardSummaryInternal.h"

@interface GKLeaderboardSummary : NSObject

@property (nonatomic) NSUInteger friendRank;
@property (retain, nonatomic) GKLeaderboardSummaryInternal *internal; // ivar: _internal
@property (nonatomic) NSUInteger rank;
@property (nonatomic) NSUInteger scoreValue;
@property (nonatomic) NSUInteger totalEntries;
@property (nonatomic) NSUInteger totalFriendEntries;


-(id)forwardingTargetForSelector:(SEL)arg0 ;
-(id)initWithInternalRepresentation:(id)arg0 ;


@end


#endif