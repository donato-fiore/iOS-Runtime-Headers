// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FIUIHEALTHSETTINGSWEIGHTPICKERCONTROLLER_H
#define FIUIHEALTHSETTINGSWEIGHTPICKERCONTROLLER_H

@class NSString;
@protocol UIPickerViewDelegate, UIPickerViewDataSource;


#import "FIUIHealthSettingsPickerController.h"

@interface FIUIHealthSettingsWeightPickerController : FIUIHealthSettingsPickerController <UIPickerViewDelegate, UIPickerViewDataSource>

 {
    NSInteger numberOfComponents;
    NSInteger numberOfRows;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) id *weightUpdateHandler; // ivar: _weightUpdateHandler


-(CGFloat)_weightInLocaleUnitForRow:(NSInteger)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_weightDisplayStringForRow:(NSInteger)arg0 ;
-(id)_weightQuantityForRow:(NSInteger)arg0 ;
-(id)pickerView:(id)arg0 attributedTitleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_setDefaultValuesOnWeightPickerIfRequiredWithWeight:(id)arg0 ;
-(void)_updateWithWeightQuantity:(id)arg0 ;
-(void)forceUpdate;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setWeightQuantity:(id)arg0 ;


@end


#endif