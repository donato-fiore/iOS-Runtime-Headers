// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUTIMERCREATIONVIEWCONTROLLER_H
#define HUTIMERCREATIONVIEWCONTROLLER_H

@class UITableViewController, NSString, UITextField, HMRoom;
@protocol UITextFieldDelegate, HUTimerIntervalPickerViewDelegate, HUAlarmEditSettingViewControllerDelegate, HUTimerCreationDelegate, HFMediaProfileContainer;


#import "HUTimerIntervalPickerView.h"

@interface HUTimerCreationViewController : UITableViewController <UITextFieldDelegate, HUTimerIntervalPickerViewDelegate, HUAlarmEditSettingViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUTimerCreationDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (retain, nonatomic) UITextField *nameField; // ivar: _nameField
@property (retain, nonatomic) HMRoom *selectedRoom; // ivar: _selectedRoom
@property (readonly) Class superclass;
@property (retain, nonatomic) HUTimerIntervalPickerView *timePickerView; // ivar: _timePickerView
@property (nonatomic) CGFloat timerDuration; // ivar: _timerDuration
@property (copy, nonatomic) NSString *timerTitle; // ivar: _timerTitle


-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)alarmEditSettingController:(id)arg0 didEditAlarm:(id)arg1 ;
-(void)cancelTimerCreation:(id)arg0 ;
-(void)createTimer:(id)arg0 ;
-(void)pickerView:(id)arg0 didChangeSelectedDuration:(CGFloat)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif