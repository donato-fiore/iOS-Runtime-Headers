// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKFIXEDAMOUNTWRAPPERVIEW_H
#define PKFIXEDAMOUNTWRAPPERVIEW_H

@class UIView, UIPickerView, UITableView;



@interface PKFixedAmountWrapperView : UIView

@property (retain, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(void)layoutSubviews;


@end


#endif