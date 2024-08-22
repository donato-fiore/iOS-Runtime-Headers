// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHICONTABLEVIEWCELL_H
#define SBHICONTABLEVIEWCELL_H

@class UITableViewCell, UIView, UIView<SBIconLabelAccessoryView>, NSArray, NSString, UILabel, _UILegibilitySettings;
@protocol SBHLegibility;


#import "SBIcon.h"
#import "SBIconView.h"

@interface SBHIconTableViewCell : UITableViewCell <SBHLegibility>

 {
    UIView *_customSelectedBackgroundView;
    NSInteger _labelAccessoryType;
    UIView<SBIconLabelAccessoryView> *_iconLabelAccessoryView;
    NSArray *_iconLabelAccessoryViewConstraints;
}


@property (readonly, nonatomic) SBIcon *icon; // ivar: _icon
@property (readonly, nonatomic) NSString *iconDescription; // ivar: _iconDescription
@property (readonly, nonatomic) UILabel *iconNameLabel; // ivar: _iconNameLabel
@property (retain, nonatomic) SBIconView *iconView; // ivar: _iconView
@property (readonly, nonatomic) UIView *iconViewContainerView; // ivar: _iconViewContainerView
@property (copy, nonatomic) NSArray *iconViewContainerViewConstraints; // ivar: _iconViewContainerViewConstraints
@property (readonly, nonatomic) UIView *labelContainerView; // ivar: _labelContainerView
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings


+(CGFloat)defaultTableViewCellHeightForIconImageInfo:(struct SBIconImageInfo )arg0 ;
+(CGFloat)defaultTableViewCellHorizontalMargin;
+(struct UIEdgeInsets )defaultTableViewCellSeparatorInsetsForIconImageInfo:(struct SBIconImageInfo )arg0 ;
-(BOOL)_setLabelAccessoryType:(NSInteger)arg0 ;
-(BOOL)_updateIconNameLabelForDisplayName:(id)arg0 labelAccessoryType:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_resetContent;
-(void)_teardownIconLabelAccessoryView;
-(void)_updateHighlightBackgroundView;
-(void)_updateTitleLabelFont;
-(void)configureCellForIcon:(id)arg0 ;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif