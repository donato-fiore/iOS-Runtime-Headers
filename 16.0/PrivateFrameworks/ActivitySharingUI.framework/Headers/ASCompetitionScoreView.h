// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCOMPETITIONSCOREVIEW_H
#define ASCOMPETITIONSCOREVIEW_H

@class UIView, UIImageView, UILabel;


#import "ASCompetitionScoreViewConfiguration.h"
#import "ASCompetitionParticipantScoreView.h"

@interface ASCompetitionScoreView : UIView {
    ASCompetitionScoreViewConfiguration *_configuration;
    ASCompetitionParticipantScoreView *_myScoreView;
    ASCompetitionParticipantScoreView *_opponentScoreView;
    UIImageView *_achievementThumbnailView;
    UILabel *_scoreTypeHeaderLabel;
    BOOL _isRTLLayout;
}


@property (readonly, nonatomic) CGFloat lastBaselineY;


+(CGFloat)preferredHeightForConfiguration:(id)arg0 friend:(id)arg1 ;
-(CGFloat)participantScoreViewWidthForParticipant:(NSInteger)arg0 maximumWidth:(CGFloat)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setFriend:(id)arg0 competition:(id)arg1 ;


@end


#endif