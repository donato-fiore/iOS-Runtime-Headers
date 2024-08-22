// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKSCORECHALLENGE_H
#define GKSCORECHALLENGE_H



#import "GKChallenge.h"
#import "GKLeaderboard.h"
#import "GKScore.h"

@interface GKScoreChallenge : GKChallenge

@property (readonly, nonatomic) GKLeaderboard *leaderboard;
@property (retain, nonatomic) GKScore *score; // ivar: _score


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
-(BOOL)detailsLoaded;
-(id)description;
-(id)detailGoalTextForPlayer:(id)arg0 withLeaderboard:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)titleText;
-(void)loadDetailsWithCompletionHandler:(id)arg0 ;
-(void)setInternal:(id)arg0 ;


@end


#endif