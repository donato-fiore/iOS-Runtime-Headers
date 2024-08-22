// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKPICKERTABLEVIEW_H
#define EKPICKERTABLEVIEW_H

@class UIView, UIDatePicker, UITableView;
@protocol EKPickerTableViewDelegate;



@interface EKPickerTableView : UIView

@property (readonly, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (weak, nonatomic) NSObject<EKPickerTableViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL showsDatePicker; // ivar: _showsDatePicker
@property (readonly, nonatomic) UITableView *tableView; // ivar: _tableView
@property (nonatomic) BOOL usesBlackDatePicker;
@property (nonatomic) BOOL usesKeyboard; // ivar: _usesKeyboard


-(BOOL)canBecomeFirstResponder;
-(CGFloat)_heightForDatePicker;
-(CGFloat)heightWithDatePickerAndTableHeight:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 tableViewController:(id)arg1 ;
-(id)inputView;
-(struct CGRect )_frameForDatePicker;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_datePickerDoubleTapped:(id)arg0 ;
-(void)_updateTableContentInset;
-(void)_updateTableContentInsetForKeyboard:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif