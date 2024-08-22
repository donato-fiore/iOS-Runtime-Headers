// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNTONEPICKERCONTROLLER_H
#define CNTONEPICKERCONTROLLER_H

@class UINavigationController, TKTonePickerViewController;
@protocol CNPickerControllerDelegate;



@interface CNTonePickerController : UINavigationController

@property (weak, nonatomic) NSObject<CNPickerControllerDelegate> *delegate;
@property (retain, nonatomic) TKTonePickerViewController *tonePicker; // ivar: _tonePicker


-(id)initWithAlertType:(NSInteger)arg0 activityAlert:(id)arg1 ;
-(void)cancelButton:(id)arg0 ;
-(void)doneButton:(id)arg0 ;


@end


#endif