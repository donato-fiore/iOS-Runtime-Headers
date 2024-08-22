// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PSSUBTITLEDISCLOSURETABLECELL_H
#define PSSUBTITLEDISCLOSURETABLECELL_H

@class UILabel;


#import "PSTableCell.h"

@interface PSSubtitleDisclosureTableCell : PSTableCell {
    UILabel *_valueLabel;
}


@property (retain, nonatomic) UILabel *valueLabel;


+(NSInteger)cellStyle;
-(BOOL)canReload;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_valueLabelForSpecifier:(id)arg0 ;
-(void)layoutSubviews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;


@end


#endif