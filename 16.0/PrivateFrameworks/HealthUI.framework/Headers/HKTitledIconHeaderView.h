// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKTITLEDICONHEADERVIEW_H
#define HKTITLEDICONHEADERVIEW_H

@class UIView, NSString, UIImage, UIColor, UIImageView, UILabel;



@interface HKTitledIconHeaderView : UIView {
    NSString *_titleTextStyle;
}


@property (nonatomic) BOOL centersSubtitle; // ivar: _centersSubtitle
@property (retain, nonatomic) UIImage *iconImage; // ivar: _iconImage
@property (copy, nonatomic) UIColor *iconImageTint;
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (nonatomic) BOOL prefersLargeTitle; // ivar: _prefersLargeTitle
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) UILabel *subtitleLabel; // ivar: _subtitleLabel
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(CGFloat)_verticalOffsetForTitle;
-(id)_healthIconImage;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_sizeThatFitsLabel:(id)arg0 containerSize:(struct CGSize )arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateFont;
-(void)layoutSubviews;
-(void)setLayoutMarginsWithTableView:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif