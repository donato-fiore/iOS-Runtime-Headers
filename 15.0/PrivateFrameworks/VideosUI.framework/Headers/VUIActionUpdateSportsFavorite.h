// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIACTIONUPDATESPORTSFAVORITE_H
#define VUIACTIONUPDATESPORTSFAVORITE_H

@class NSString;


#import "VUIAction.h"

@interface VUIActionUpdateSportsFavorite : VUIAction

@property (copy, nonatomic) NSString *sportsLeagueID; // ivar: _sportsLeagueID
@property (copy, nonatomic) NSString *sportsTeamName; // ivar: _sportsTeamName


+(void)performFavoritesOperation:(BOOL)arg0 teamId:(id)arg1 teamName:(id)arg2 requestExecutionHandler:(id)arg3 ;
-(BOOL)isAccountRequired;
-(id)initWithContextData:(id)arg0 ;
-(void)performWithTargetResponder:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif