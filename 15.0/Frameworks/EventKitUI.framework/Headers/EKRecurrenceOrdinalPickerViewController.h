// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKRECURRENCEORDINALPICKERVIEWCONTROLLER_H
#define EKRECURRENCEORDINALPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, EKRecurrenceOrdinalPickerViewControllerDelegate;



@interface EKRecurrenceOrdinalPickerViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property NSObject<EKRecurrenceOrdinalPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPickerView *pickerView;
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_leftColumn;
-(id)_rightColumn;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(int)dayMask;
-(int)ordinalValue;
-(void)loadView;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)updateFromRecurrenceRule:(id)arg0 ;
-(void)updateRecurrenceRuleBuilder:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif