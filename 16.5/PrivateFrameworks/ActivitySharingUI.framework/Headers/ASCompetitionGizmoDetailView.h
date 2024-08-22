// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCOMPETITIONGIZMODETAILVIEW_H
#define ASCOMPETITIONGIZMODETAILVIEW_H

@class UIView, NSNumber;


#import "ASCompetitionScoreView.h"
#import "ASCompetitionGraphView.h"
#import "ASCompetitionTimeRemainingLabel.h"
#import "ASCompetitionMessageBubbleView.h"

@interface ASCompetitionGizmoDetailView : UIView {
    ASCompetitionScoreView *_totalScoreView;
    ASCompetitionScoreView *_totalWinsScoreView;
    ASCompetitionGraphView *_graphView;
    ASCompetitionTimeRemainingLabel *_timeRemainingLabel;
    ASCompetitionMessageBubbleView *_messageBubbleView;
    UIView *_timeRemainingSeparator;
    UIView *_totalWinsSeparator;
    NSNumber *_previousLayoutWidth;
    NSInteger _modules;
    NSInteger _type;
}


@property (nonatomic) BOOL isInteractionEnabled; // ivar: _isInteractionEnabled


-(BOOL)supportsSmackTalkReply;
-(id)initWithDetailViewType:(NSInteger)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 ;
-(void)layoutSubviews;
-(void)setFriend:(id)arg0 competition:(id)arg1 ;


@end


#endif