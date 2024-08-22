// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKDASHBOARDTURNCELL_H
#define GKDASHBOARDTURNCELL_H

@class UIImageView, UIColor, UILabel, NSLayoutConstraint;


#import "GKDashboardPlayerCell.h"

@interface GKDashboardTurnCell : GKDashboardPlayerCell

@property (nonatomic) UIImageView *actionIndicatorView; // ivar: _actionIndicatorView
@property (retain, nonatomic) UIColor *dateColor; // ivar: _dateColor
@property (nonatomic) UILabel *dateLabel; // ivar: _dateLabel
@property (nonatomic) CGFloat dateToNameConstant; // ivar: _dateToNameConstant
@property (nonatomic) NSLayoutConstraint *dateToNameConstraint; // ivar: _dateToNameConstraint
@property (nonatomic) NSInteger displayIndex; // ivar: _displayIndex
@property (retain, nonatomic) UIColor *turnColor; // ivar: _turnColor
@property (nonatomic) UILabel *turnLabel; // ivar: _turnLabel
@property (nonatomic) CGFloat turnToNameConstant; // ivar: _turnToNameConstant
@property (nonatomic) NSLayoutConstraint *turnToNameConstraint; // ivar: _turnToNameConstraint


+(struct CGSize )defaultSize;
+(struct CGSize )defaultSizeForTurnDetail;
-(BOOL)wantsLocalPlayerAction:(id)arg0 ;
-(void)awakeFromNib;
-(void)configureForMatch:(id)arg0 ;
-(void)configureForParticipant:(id)arg0 inMatch:(id)arg1 ;
-(void)setOnDarkBackground:(BOOL)arg0 ;


@end


#endif