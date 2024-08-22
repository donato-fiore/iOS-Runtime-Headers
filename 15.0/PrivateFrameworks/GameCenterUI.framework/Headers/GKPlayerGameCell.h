// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GKPLAYERGAMECELL_H
#define GKPLAYERGAMECELL_H

@class UILabel;


#import "GKBaseGameCell.h"

@interface GKPlayerGameCell : GKBaseGameCell

@property (retain, nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (retain, nonatomic) UILabel *statsLabel; // ivar: _statsLabel


-(id)achievementsStringWithGameRecord:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)leaderboardStringWithGameRecord:(id)arg0 ;
-(id)statText;
-(void)didUpdateModel;
-(void)prepareForReuse;


@end


#endif