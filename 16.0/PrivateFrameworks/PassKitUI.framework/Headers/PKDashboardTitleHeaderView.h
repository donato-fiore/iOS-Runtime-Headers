// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDTITLEHEADERVIEW_H
#define PKDASHBOARDTITLEHEADERVIEW_H

@class UILabel, UIButton, UIColor, UIImage, NSString, UIMenu;


#import "PKDashboardCollectionViewCell.h"

@interface PKDashboardTitleHeaderView : PKDashboardCollectionViewCell {
    UILabel *_titleLabel;
    UIButton *_actionButton;
    BOOL _isTemplateLayout;
    BOOL _isCompactUI;
}


@property (copy, nonatomic) id *action; // ivar: _action
@property (copy, nonatomic) UIColor *actionColor; // ivar: _actionColor
@property (copy, nonatomic) UIImage *actionImage; // ivar: _actionImage
@property (nonatomic) NSUInteger actionStyle; // ivar: _actionStyle
@property (copy, nonatomic) NSString *actionTitle; // ivar: _actionTitle
@property (copy, nonatomic) UIMenu *menu; // ivar: _menu
@property (nonatomic) BOOL preferTitleWrapOverStackedLayout; // ivar: _preferTitleWrapOverStackedLayout
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (copy, nonatomic) UIColor *titleColor; // ivar: _titleColor
@property (nonatomic) NSUInteger titleStyle; // ivar: _titleStyle
@property (nonatomic) CGFloat topPadding; // ivar: _topPadding
@property (nonatomic) BOOL useCompactTopInset; // ivar: _useCompactTopInset
@property (nonatomic) BOOL useLargeBottomInset; // ivar: _useLargeBottomInset


+(CGFloat)defaultHorizontalInset;
+(CGFloat)defaultTableHorizontalInset;
+(id)defaultBackgroundColor;
-(BOOL)shouldShowActionButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_buttonPressed:(id)arg0 ;
-(void)_resetButtonInsets;
-(void)createSubviews;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)resetFonts;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif