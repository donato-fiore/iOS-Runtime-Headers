// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DBSDEVICEAPPEARANCESCHEDULECONTROLLER_H
#define DBSDEVICEAPPEARANCESCHEDULECONTROLLER_H

@class PSListController, UIDatePicker, PSSpecifier, UISUserInterfaceStyleMode, NSDateFormatter;
@protocol PSDateTimePickerCellDelegate;



@interface DBSDeviceAppearanceScheduleController : PSListController <PSDateTimePickerCellDelegate>



@property (retain, nonatomic) UIDatePicker *_darkAppearanceTimePicker; // ivar: __darkAppearanceTimePicker
@property (retain, nonatomic) PSSpecifier *_darkAppearanceTimePickerSpecifier; // ivar: __darkAppearanceTimePickerSpecifier
@property (retain, nonatomic) UIDatePicker *_lightAppearanceTimePicker; // ivar: __lightAppearanceTimePicker
@property (retain, nonatomic) PSSpecifier *_lightAppearanceTimePickerSpecifier; // ivar: __lightAppearanceTimePickerSpecifier
@property (retain, nonatomic) PSSpecifier *_radioGroup; // ivar: __radioGroup
@property (nonatomic) BOOL _showingScheduleSpecifiers; // ivar: __showingScheduleSpecifiers
@property (weak, nonatomic) UISUserInterfaceStyleMode *_styleMode; // ivar: __styleMode
@property (retain, nonatomic) NSDateFormatter *_timeFormatter; // ivar: __timeFormatter
@property (retain, nonatomic) PSSpecifier *_timeGroup; // ivar: __timeGroup


-(id)_darkAppearanceTimeString;
-(id)_lightAppearanceTimeString;
-(id)datePickerForSpecifier:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)specifiers;
-(void)datePickerChanged:(id)arg0 ;
-(void)setSpecifier:(id)arg0 ;
-(void)showScheduleSpecifiers:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)willResignActive;


@end


#endif