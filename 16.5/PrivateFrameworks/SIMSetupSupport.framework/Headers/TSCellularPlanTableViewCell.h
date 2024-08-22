// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TSCELLULARPLANTABLEVIEWCELL_H
#define TSCELLULARPLANTABLEVIEWCELL_H

@class UITableViewCell, UITextField;



@interface TSCellularPlanTableViewCell : UITableViewCell

@property (retain, nonatomic) UITextField *editableTextField; // ivar: _editableTextField


+(CGFloat)rowHeight;
-(id)initWithTag:(NSInteger)arg0 delegate:(id)arg1 ;


@end


#endif