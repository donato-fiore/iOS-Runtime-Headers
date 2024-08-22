// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WKDATETIMEPICKERVIEWCONTROLLER_H
#define WKDATETIMEPICKERVIEWCONTROLLER_H

@class UIViewController;



@interface WKDateTimePickerViewController : UIViewController {
    CGSize _contentSize;
    RetainPtr<UIDatePicker> _datePicker;
    WeakObjCPtr<id<WKDateTimePickerViewControllerDelegate>> _delegate;
}




-(id)initWithDatePicker:(id)arg0 ;
-(struct CGSize )preferredContentSize;
-(struct CGSize )preferredDatePickerSize;
-(struct UIEdgeInsets )datePickerInsets;
-(void)doneButtonPressed:(id)arg0 ;
-(void)resetButtonPressed:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif