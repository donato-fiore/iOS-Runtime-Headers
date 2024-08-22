// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDRILLINGRAPHCELL_H
#define STDRILLINGRAPHCELL_H

@class UILabel;


#import "STTableCell.h"
#import "STUsageGraphViewController.h"
#import "STUsageItem.h"

@interface STDrillInGraphCell : STTableCell

@property (readonly, nonatomic) STUsageGraphViewController *usageGraphViewController; // ivar: _usageGraphViewController
@property (readonly, nonatomic) STUsageItem *usageItem; // ivar: _usageItem
@property (readonly, nonatomic) UILabel *usageLabel; // ivar: _usageLabel


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)setValue:(id)arg0 ;


@end


#endif