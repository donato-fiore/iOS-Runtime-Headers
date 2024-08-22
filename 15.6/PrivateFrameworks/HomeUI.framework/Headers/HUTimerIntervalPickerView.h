// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUTIMERINTERVALPICKERVIEW_H
#define HUTIMERINTERVALPICKERVIEW_H

@class UIControl, NSString, UILabel, UIPickerView;
@protocol UIPickerViewDataSource, UIPickerViewDelegate, HUTimerIntervalPickerViewDelegate;



@interface HUTimerIntervalPickerView : UIControl <UIPickerViewDataSource, UIPickerViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTimerIntervalPickerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILabel *hoursLabel; // ivar: _hoursLabel
@property (retain, nonatomic) UILabel *minutesLabel; // ivar: _minutesLabel
@property (retain, nonatomic) UILabel *secondsLabel; // ivar: _secondsLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UIPickerView *timePicker; // ivar: _timePicker


-(CGFloat)pickerView:(id)arg0 rowHeightForComponent:(NSInteger)arg1 ;
-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(CGFloat)selectedDuration;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_hoursStringForHour:(NSInteger)arg0 ;
-(id)_labelForComponent:(NSInteger)arg0 createIfNecessary:(BOOL)arg1 ;
-(id)_makeNewComponentLabel;
-(id)_minutesStringForMinutes:(NSInteger)arg0 ;
-(id)_secondsStringForSeconds:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(void)_fadeLabelForComponent:(NSInteger)arg0 toText:(id)arg1 animated:(BOOL)arg2 ;
-(void)_positionLabel:(id)arg0 forComponent:(NSInteger)arg1 ;
-(void)_setLabel:(id)arg0 forComponent:(NSInteger)arg1 ;
-(void)_updateLabels:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)setDuration:(CGFloat)arg0 ;
-(void)updateConstraints;


@end


#endif