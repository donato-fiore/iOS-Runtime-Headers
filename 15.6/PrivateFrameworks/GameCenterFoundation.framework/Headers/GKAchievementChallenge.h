// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKACHIEVEMENTCHALLENGE_H
#define GKACHIEVEMENTCHALLENGE_H



#import "GKChallenge.h"
#import "GKAchievement.h"

@interface GKAchievementChallenge : GKChallenge

@property (retain, nonatomic) GKAchievement *achievement; // ivar: _achievement


+(BOOL)instancesRespondToSelector:(SEL)arg0 ;
-(BOOL)detailsLoaded;
-(id)description;
-(id)detailGoalTextForPlayer:(id)arg0 withAchievement:(id)arg1 ;
-(id)initWithInternalRepresentation:(id)arg0 ;
-(id)titleText;
-(void)loadDetailsWithCompletionHandler:(id)arg0 ;
-(void)setInternal:(id)arg0 ;


@end


#endif