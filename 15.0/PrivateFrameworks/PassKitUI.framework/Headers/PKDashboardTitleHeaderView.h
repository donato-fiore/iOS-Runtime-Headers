// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKDASHBOARDTITLEHEADERVIEW_H
#define PKDASHBOARDTITLEHEADERVIEW_H

@class UILabel, UIButton, NSString, UIColor;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UIButton *_actionButton;
    BOOL _isTemplateLayout;
    BOOL _isCompactUI;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (nonatomic) NSUInteger titleStyle; // ivar: _titleStyle
@property (nonatomic) BOOL useCompactTopInset; // ivar: _useCompactTopInset


+(CGFloat)defaultHorizontalInset;
+(CGFloat)defaultTableHorizontalInset;
+(id)defaultBackgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)createSubviews;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)resetFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif