// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUWHEELCONTROLVIEW_H
#define HUWHEELCONTROLVIEW_H

@class UIView, NSSet, NSString, UIPickerView, NSFormatter, NSArray;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, HUControlView, HUControlViewDelegate, HUWheelControlViewDelegate;



@interface HUWheelControlView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, HUControlView>



@property (nonatomic) BOOL canBeHighlighted; // ivar: _canBeHighlighted
@property (retain, nonatomic) NSSet *customValues; // ivar: _customValues
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUControlViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDisabled) BOOL disabled;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (readonly) Class superclass;
@property (retain, nonatomic) id *value;
@property (retain, nonatomic) NSFormatter *valueFormatter; // ivar: _valueFormatter
@property (retain, nonatomic) NSArray *values; // ivar: _values
@property (weak, nonatomic) NSObject<HUWheelControlViewDelegate> *wheelDelegate; // ivar: _wheelDelegate
@property (retain, nonatomic) NSArray *wheelValues; // ivar: _wheelValues


-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_formatValue:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_generateWheelValues;
-(void)_setupConstraints;
-(void)_updateUIToReachable;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif