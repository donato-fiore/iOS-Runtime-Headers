// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUALARMEDITSETTINGVIEWCONTROLLER_H
#define HUALARMEDITSETTINGVIEWCONTROLLER_H

@class UIViewController, MTMutableAlarm, NSString, NSMutableArray, HMMediaProfile, UITableView;
@protocol UITableViewDelegate, UITableViewDataSource, HUAlarmEditSettingViewControllerDelegate;


#import "HUAlarmEditableTextCell.h"

@interface HUAlarmEditSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>



@property (copy, nonatomic) MTMutableAlarm *alarm; // ivar: _alarm
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAlarmEditSettingViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUAlarmEditableTextCell *editingCell; // ivar: _editingCell
@property (nonatomic) NSUInteger firstWeekday; // ivar: _firstWeekday
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *loggedInAppleMusicAccountDSID; // ivar: _loggedInAppleMusicAccountDSID
@property (retain, nonatomic) NSMutableArray *profileList; // ivar: _profileList
@property (nonatomic) NSUInteger repeatSchedule; // ivar: _repeatSchedule
@property (retain, nonatomic) HMMediaProfile *selectedMediaProfile; // ivar: _selectedMediaProfile
@property (nonatomic) NSInteger setting; // ivar: _setting
@property (readonly) Class superclass;
@property (retain, nonatomic) UITableView *tableView; // ivar: _tableView


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithAlarm:(id)arg0 setting:(NSInteger)arg1 mediaProfileContainer:(id)arg2 selectedMediaProfile:(id)arg3 loggedInAppleMusicAccountDSID:(id)arg4 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(unsigned int)maskForRow:(NSInteger)arg0 ;
-(void)_commonInitialization;
-(void)_dismiss;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textValueChanged:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif