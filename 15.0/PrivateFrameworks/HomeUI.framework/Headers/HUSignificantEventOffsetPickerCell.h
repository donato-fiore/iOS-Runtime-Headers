// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSIGNIFICANTEVENTOFFSETPICKERCELL_H
#define HUSIGNIFICANTEVENTOFFSETPICKERCELL_H

@class UITableViewCell, NSDateComponents, NSString, NSArray, UIPickerView;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, HUSignificantEventOffsetPickerDelegate;



@interface HUSignificantEventOffsetPickerCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource>



@property (retain, nonatomic) NSDateComponents *currentOffset; // ivar: _currentOffset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUSignificantEventOffsetPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *offsetDateComponentOptions; // ivar: _offsetDateComponentOptions
@property (readonly, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (retain, nonatomic) NSDateComponents *selectedOffset; // ivar: _selectedOffset
@property (retain, nonatomic) NSString *significantEvent; // ivar: _significantEvent
@property (readonly) Class superclass;


+(id)_defaultOffsetDateComponentOptions;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)_titleForOffsetComponents:(id)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)_updateOffsetDateComponentOptions;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;


@end


#endif