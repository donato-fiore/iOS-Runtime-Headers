// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKINCOMMONGAMECELL_H
#define GKINCOMMONGAMECELL_H

@class GKGameRecord;


#import "GKPlayerGameCell.h"

@interface GKInCommonGameCell : GKPlayerGameCell

@property (retain, nonatomic) GKGameRecord *localPlayerGameRecord; // ivar: _localPlayerGameRecord


-(id)leaderboardStringWithGameRecord:(id)arg0 ;
-(void)didUpdateModel;
-(void)prepareForReuse;


@end


#endif