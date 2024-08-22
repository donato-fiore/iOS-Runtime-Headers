// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NCINSETGROUPEDBUTTON_H
#define NCINSETGROUPEDBUTTON_H

@class UIControl, UIView, UIImageView, UILabel;



@interface NCInsetGroupedButton : UIControl {
    UIView *_backgroundView;
    UIView *_cornersView;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}




+(id)buttonWithTitle:(id)arg0 top:(BOOL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)_initWithTitle:(id)arg0 top:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setSubtitleText:(id)arg0 ;


@end


#endif