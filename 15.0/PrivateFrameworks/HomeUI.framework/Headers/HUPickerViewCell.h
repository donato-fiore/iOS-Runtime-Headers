// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUPICKERVIEWCELL_H
#define HUPICKERVIEWCELL_H

@class UITableViewCell, NSString, HFItem, UIPickerView, NSIndexPath;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, HUCellProtocol, HUPickerCellDelegate, HUResizableCellDelegate;



@interface HUPickerViewCell : UITableViewCell <UIPickerViewDelegate, UIPickerViewDataSource, HUCellProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUPickerCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFItem *item; // ivar: item
@property (nonatomic) NSInteger numberOfValues; // ivar: _numberOfValues
@property (retain, nonatomic) UIPickerView *pickerView; // ivar: _pickerView
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (readonly) Class superclass;


-(BOOL)_canSelectValueAtIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)pickerView:(id)arg0 attributedTitleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)prepareForReuse;
-(void)reloadPickerView;
-(void)setSelectedIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif