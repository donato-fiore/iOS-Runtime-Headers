// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUICOMPETITIONLEARNMOREEXAMPLEVIEW_H
#define FIUICOMPETITIONLEARNMOREEXAMPLEVIEW_H

@class UIView, UIImageView, UILabel, NSNumber, UIColor, NSString;



@interface FIUICompetitionLearnMoreExampleView : UIView {
    UIImageView *_moveRingView;
    UIImageView *_exerciseRingView;
    UIImageView *_standRingView;
    UILabel *_movePercentLabel;
    UILabel *_exercisePercentLabel;
    UILabel *_standPercentLabel;
    UIView *_separatorView;
    UILabel *_totalPointsLabel;
    NSNumber *_previousLayoutWidth;
}


@property (retain, nonatomic) UIColor *separatorViewColor; // ivar: _separatorViewColor
@property (retain, nonatomic) UIColor *totalPointsLabelColor; // ivar: _totalPointsLabelColor
@property (retain, nonatomic) NSString *totalPointsLabelText; // ivar: _totalPointsLabelText


-(id)_ringPercentageLabelForPercentage:(CGFloat)arg0 withMetricColors:(id)arg1 ;
-(id)_ringViewOfType:(NSInteger)arg0 withMetricColors:(id)arg1 percentage:(CGFloat)arg2 ;
-(id)init;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutForWidth:(CGFloat)arg0 ;
-(void)layoutSubviews;


@end


#endif