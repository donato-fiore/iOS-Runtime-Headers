// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERDURATIONPICKERCELL_H
#define HUTRIGGERDURATIONPICKERCELL_H

@class UITableViewCell, NSNumber, NSString, NSArray, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, HUTriggerDurationPickerDelegate;


#import "HUTriggerDurationPickerValue.h"

@interface HUTriggerDurationPickerCell : UITableViewCell <UIPickerViewDataSource, UIPickerViewDelegate>



@property (retain, nonatomic) NSNumber *currentDuration;
@property (retain, nonatomic) HUTriggerDurationPickerValue *currentDurationValue; // ivar: _currentDurationValue
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTriggerDurationPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *durationOptions; // ivar: _durationOptions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (readonly) Class superclass;


+(id)_defaultDurationOptions;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pickerDurationValue;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_updateDurationOptions;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif