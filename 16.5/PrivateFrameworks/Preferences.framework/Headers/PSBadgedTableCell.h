// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSBADGEDTABLECELL_H
#define PSBADGEDTABLECELL_H

@class UIImageView, UILabel;


#import "PSTableCell.h"

@interface PSBadgedTableCell : PSTableCell {
    UIImageView *_badgeImageView;
    UILabel *_badgeNumberLabel;
    NSInteger _badgeInt;
}




+(CGFloat)badgePadding;
+(id)badgeNumberLabelTextColor;
+(id)reuseIdentifierForClassAndType:(NSInteger)arg0 ;
+(id)unreadBubbleImage;
-(BOOL)_shouldUseRoundStyle;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)badgeWithInteger:(NSInteger)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)resetLocale;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif