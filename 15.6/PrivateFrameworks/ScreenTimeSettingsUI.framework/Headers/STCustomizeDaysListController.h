// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STCUSTOMIZEDAYSLISTCONTROLLER_H
#define STCUSTOMIZEDAYSLISTCONTROLLER_H

@class PSListController, PSSpecifier, NSDictionary;
@protocol PSDateTimePickerCellDelegate, STCustomizeDaysListControllerDelegate;



@interface STCustomizeDaysListController : PSListController <PSDateTimePickerCellDelegate>



@property (weak, nonatomic) NSObject<STCustomizeDaysListControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) PSSpecifier *selectedDaySpecifier; // ivar: _selectedDaySpecifier
@property (copy, nonatomic) NSDictionary *timeByDay; // ivar: _timeByDay
@property (retain, nonatomic) PSSpecifier *timePickerSpecifier; // ivar: _timePickerSpecifier


-(id)_localizedDayNames;
-(id)_localizedDayOrder;
-(id)budgetTime:(id)arg0 ;
-(id)datePickerForSpecifier:(id)arg0 ;
-(id)init;
-(id)specifiers;
-(void)_showOrHidePickerSpecifierForSpecifier:(id)arg0 ;
-(void)datePickerChanged:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif