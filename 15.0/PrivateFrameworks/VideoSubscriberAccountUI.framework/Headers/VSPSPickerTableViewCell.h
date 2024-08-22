// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSPSPICKERTABLEVIEWCELL_H
#define VSPSPICKERTABLEVIEWCELL_H

@class PSTableCell, NSString, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate;



@interface VSPSPickerTableViewCell : PSTableCell <UIPickerViewDataSource, UIPickerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (readonly) Class superclass;


+(CGFloat)preferredHeight;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)targetAsDelegate;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif