// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUALARMEDITVIEWCONTROLLER_H
#define HUALARMEDITVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSDateComponents, NSString, MTMutableAlarm, HFPlaybackArchive, MTAlarm, HMMediaProfile, NSSet, UITapGestureRecognizer;
@protocol UITableViewDataSource, UITableViewDelegate, HUAlarmEditSettingViewControllerDelegate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate, HUInlineDatePickerCellDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, MPMediaPickerControllerDelegatePrivate, HUAlarmEditViewControllerDelegate, HFMediaProfileContainer;


#import "HUAlarmEditView.h"

@interface HUAlarmEditViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, HUAlarmEditSettingViewControllerDelegate, HUSwitchCellDelegate, HUSliderValueTableViewCellDelegate, HUInlineDatePickerCellDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, MPMediaPickerControllerDelegatePrivate>



@property (nonatomic) BOOL accessorySupportsMusicAlarm; // ivar: _accessorySupportsMusicAlarm
@property (retain, nonatomic) NSMutableDictionary *appleMusicSubcriptionResult; // ivar: _appleMusicSubcriptionResult
@property (retain, nonatomic) NSDateComponents *currentDatePickerTimeComponents; // ivar: _currentDatePickerTimeComponents
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUAlarmEditViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HUAlarmEditView *editAlarmView; // ivar: _editAlarmView
@property (readonly, nonatomic, getter=isEdited) BOOL edited;
@property (retain, nonatomic) MTMutableAlarm *editedAlarm; // ivar: _editedAlarm
@property (nonatomic) NSInteger editingAlarmSetting; // ivar: _editingAlarmSetting
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HFPlaybackArchive *hfPlaybackArchive; // ivar: _hfPlaybackArchive
@property (nonatomic) BOOL isCustomVolumeSelected; // ivar: _isCustomVolumeSelected
@property (nonatomic) BOOL isDatePickerWheelScrolled; // ivar: _isDatePickerWheelScrolled
@property (nonatomic) BOOL isPlayMediaSelected; // ivar: _isPlayMediaSelected
@property (copy, nonatomic) NSString *loggedInAppleMusicAccountDSID; // ivar: _loggedInAppleMusicAccountDSID
@property (retain, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (retain, nonatomic) MTAlarm *originalAlarm; // ivar: _originalAlarm
@property (retain, nonatomic) HMMediaProfile *originalSelectedMediaProfile; // ivar: _originalSelectedMediaProfile
@property (readonly, nonatomic) NSSet *selectedActionSets; // ivar: _selectedActionSets
@property (nonatomic) CGFloat selectedCustomVolumeLevel; // ivar: _selectedCustomVolumeLevel
@property (retain, nonatomic) HMMediaProfile *selectedMediaProfile; // ivar: _selectedMediaProfile
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


+(struct CGSize )desiredContentSize;
-(BOOL)_hasUserSelectedCustomVolume;
-(BOOL)_hasUserSelectedToneAlarm;
-(BOOL)_isAlarmTypeMedia;
-(BOOL)_isDeviceSpecificAlarm;
-(BOOL)_isMusicAlarmSupportedInAccessory;
-(BOOL)_isNewAlarm;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(CGFloat)_volumeSettingForCurrentEditingAlarm;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_configureSoundForMediaTypeAlarm:(id)arg0 ;
-(id)_dateComponents;
-(id)_datePickerCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_deleteAlarmButtonCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_mediaPropertiesTypeCellForTableView:(id)arg0 atIndexpath:(id)arg1 ;
-(id)_setupCell:(id)arg0 forTableView:(id)arg1 indexPath:(id)arg2 ;
-(id)_volumeIconMaximum;
-(id)_volumeIconMinimum;
-(id)_volumeSliderCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;
-(id)_volumeTypeCellForTableView:(id)arg0 atIndexpath:(id)arg1 ;
-(id)initWithAlarm:(id)arg0 mediaProfile:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelButtonClicked:(id)arg0 ;
-(void)_checkAndPrepareEditingAlarmForMediaTypeAlarm;
-(void)_chooseMediaTapped;
-(void)_configureMediaIconView:(id)arg0 withImage:(id)arg1 ;
-(void)_didTap:(id)arg0 ;
-(void)_doneButtonClicked:(id)arg0 ;
-(void)_handlePickerChanged;
-(void)_presentMediaPickerUnavailablePromptWithReason:(NSInteger)arg0 storeKitErrorObject:(id)arg1 ;
-(void)_presentMediaPickerWithOptionsShowsLibraryContent:(BOOL)arg0 ;
-(void)_updateAppleMusicSubscriptionStatus;
-(void)_updateCellForTableView:(id)arg0 indexPath:(id)arg1 ;
-(void)_updateEnableStateForDoneButton:(BOOL)arg0 ;
-(void)alarmEditSettingController:(id)arg0 didEditAlarm:(id)arg1 ;
-(void)datePickerCell:(id)arg0 didSelectDate:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(void)mediaPicker:(id)arg0 didPickPlaybackArchive:(id)arg1 ;
-(void)mediaPickerDidCancel:(id)arg0 ;
-(void)saveAlarmOnlyIfEdited:(BOOL)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)sliderValueTableViewCell:(id)arg0 didChangeValue:(CGFloat)arg1 ;
-(void)startEditingSetting:(NSInteger)arg0 ;
-(void)switchCell:(id)arg0 didTurnOn:(BOOL)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidUnload;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif