// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNPROPERTYPLACEHOLDERCELL_H
#define CNPROPERTYPLACEHOLDERCELL_H

@class UILabel;


#import "CNLabeledCell.h"

@interface CNPropertyPlaceholderCell : CNLabeledCell

@property (retain, nonatomic) UILabel *label; // ivar: _label


+(BOOL)shouldIndentWhileEditing;
-(BOOL)shouldPerformDefaultAction;
-(CGFloat)minCellHeight;
-(void)setCardGroupItem:(id)arg0 ;


@end


#endif