// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUICUSTOMRECURRENCEINTERVALVIEWCONTROLLER_H
#define EKUICUSTOMRECURRENCEINTERVALVIEWCONTROLLER_H

@class UIViewController, UIPickerView, NSString;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;



@interface EKUICustomRecurrenceIntervalViewController : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>

 {
    UIPickerView *_pickerView;
}


@property (copy) id *changeBlock; // ivar: _changeBlock
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger frequency; // ivar: _frequency
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger interval; // ivar: _interval
@property (nonatomic) BOOL maximumInterval; // ivar: _maximumInterval
@property (readonly) Class superclass;


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithSelectedInterval:(NSInteger)arg0 frequency:(NSInteger)arg1 changeBlock:(id)arg2 ;
-(id)pickerView;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)loadView;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif