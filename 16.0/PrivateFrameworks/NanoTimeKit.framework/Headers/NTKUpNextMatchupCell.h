// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKUPNEXTMATCHUPCELL_H
#define NTKUPNEXTMATCHUPCELL_H

@class UILayoutGuide;


#import "NTKUpNextBaseCell.h"
#import "NTKUpNextMatchupScoreView.h"
#import "NTKUpNextMatchupUpcomingView.h"

@interface NTKUpNextMatchupCell : NTKUpNextBaseCell {
    NTKUpNextMatchupScoreView *_scoreView;
    NTKUpNextMatchupUpcomingView *_upcomingView;
    UILayoutGuide *_scoreLayoutGuide;
    UILayoutGuide *_upcomingLayoutGuide;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)prepareForReuse;
-(void)setFilterProvider:(id)arg0 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateMonochromeColor;
-(void)updateTimeLabel;


@end


#endif