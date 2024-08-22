// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMULTIPLEVALUEADDNEWITEMTABLEVIEWCELL_H
#define WFMULTIPLEVALUEADDNEWITEMTABLEVIEWCELL_H

@class UIColor;


#import "WFMaterialStylableTableViewCell.h"

@interface WFMultipleValueAddNewItemTableViewCell : WFMaterialStylableTableViewCell

@property (retain, nonatomic) UIColor *titleColor; // ivar: _titleColor


-(void)tintColorDidChange;
-(void)updateTitleColor;


@end


#endif