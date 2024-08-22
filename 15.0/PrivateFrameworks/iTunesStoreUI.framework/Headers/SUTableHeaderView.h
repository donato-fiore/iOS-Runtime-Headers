// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUTABLEHEADERVIEW_H
#define SUTABLEHEADERVIEW_H

@class UIView, UILabel, UIColor, NSString, UIFont;



@interface SUTableHeaderView : UIView {
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
}


@property (retain, nonatomic) UIColor *bottomBorderColor; // ivar: _bottomBorderColor
@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (nonatomic) NSInteger index; // ivar: _index
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) NSInteger style; // ivar: _style
@property (retain, nonatomic) NSString *subtitle;
@property (retain, nonatomic) UIFont *subtitleFont;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) UIFont *titleFont;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)sizeToFit;


@end


#endif