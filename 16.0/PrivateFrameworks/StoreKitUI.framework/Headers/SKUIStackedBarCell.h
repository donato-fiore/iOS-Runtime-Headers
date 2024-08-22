// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUISTACKEDBARCELL_H
#define SKUISTACKEDBARCELL_H

@class UIButton, UILabel, UIView;



@interface SKUIStackedBarCell : UIButton {
    UILabel *_expandedLabel;
    UIView *_separator;
}


@property (readonly, nonatomic) UIButton *backButton; // ivar: _backButton
@property (nonatomic) BOOL expanded; // ivar: _expanded


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setTitle:(id)arg0 forState:(NSUInteger)arg1 ;


@end


#endif