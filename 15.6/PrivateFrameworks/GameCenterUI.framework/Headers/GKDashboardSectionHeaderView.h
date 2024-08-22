// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKDASHBOARDSECTIONHEADERVIEW_H
#define GKDASHBOARDSECTIONHEADERVIEW_H

@class UICollectionReusableView, UIFont, NSLayoutConstraint, NSString, UIColor, UILabel;



@interface GKDashboardSectionHeaderView : UICollectionReusableView

@property (copy, nonatomic) UIFont *font;
@property (nonatomic) NSLayoutConstraint *leftMarginConstraint; // ivar: _leftMarginConstraint
@property (nonatomic) BOOL onDarkBackground; // ivar: _onDarkBackground
@property (nonatomic) NSLayoutConstraint *rightMarginConstraint; // ivar: _rightMarginConstraint
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(CGFloat)defaultHeight;
+(CGFloat)widthForTitle:(id)arg0 withFont:(id)arg1 ;
+(struct CGSize )platformSizeForTitle:(id)arg0 withFont:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)awakeFromNib;


@end


#endif