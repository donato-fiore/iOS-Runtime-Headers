// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STMOSTUSEDCELL_H
#define STMOSTUSEDCELL_H

@class UIImageView;


#import "STUsageCell.h"

@interface STMostUsedCell : STUsageCell

@property (readonly, nonatomic) UIImageView *allowanceIconView; // ivar: _allowanceIconView


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(void)reloadWithSpecifier:(id)arg0 animated:(BOOL)arg1 ;
-(void)setValue:(id)arg0 ;


@end


#endif