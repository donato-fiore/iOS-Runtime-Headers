// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSEGMENTEDCONTROLTABLECELL_H
#define WFSEGMENTEDCONTROLTABLECELL_H

@class UITableViewCell, NSArray, UISegmentedControl;


#import "WFSegmentedControlValue.h"
#import "WFSegmentedControlTableItem.h"

@interface WFSegmentedControlTableCell : UITableViewCell

@property (copy, nonatomic) NSArray *possibleValues; // ivar: _possibleValues
@property (retain, nonatomic) UISegmentedControl *segmentedControl; // ivar: _segmentedControl
@property (retain, nonatomic) WFSegmentedControlValue *selectedValue; // ivar: _selectedValue
@property (weak, nonatomic) WFSegmentedControlTableItem *tableItem; // ivar: _tableItem


-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)valueChanged:(id)arg0 ;


@end


#endif