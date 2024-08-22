// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STUSAGECELL_H
#define STUSAGECELL_H

@class UILabel, UIImageView, NSLayoutConstraint;


#import "STTableCell.h"
#import "STCandyBarView.h"

@interface STUsageCell : STTableCell

@property (readonly, nonatomic) UILabel *itemNameLabel; // ivar: _itemNameLabel
@property (readonly) UIImageView *trustWarningImageView; // ivar: _trustWarningImageView
@property (readonly, nonatomic) STCandyBarView *usageBarView; // ivar: _usageBarView
@property (readonly, nonatomic) NSLayoutConstraint *usageBarWidthConstraint; // ivar: _usageBarWidthConstraint
@property (readonly, nonatomic) UILabel *usageLabel; // ivar: _usageLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)value;
-(void)_didFetchAppInfoOrIcon:(id)arg0 ;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)setValue:(id)arg0 ;


@end


#endif