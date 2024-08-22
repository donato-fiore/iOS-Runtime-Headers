// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TKVIBRATIONRECORDERCONTENTVIEWCONTROLLER_H
#define TKVIBRATIONRECORDERCONTENTVIEWCONTROLLER_H

@class UIViewController, TLVibrationPattern, UIBarButtonItem, UIAlertController, UIAlertAction, UITextField, NSDictionary, NSString;
@protocol TKVibrationRecorderViewDelegate, UITextFieldDelegate, TKVibrationRecorderViewControllerDelegate;


#import "TKVibrationRecorderView.h"
#import "TKVibratorController.h"
#import "TKVibrationRecorderViewController.h"

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate>

 {
    int _mode;
    TKVibrationRecorderView *_vibrationRecorderView;
    TLVibrationPattern *_recordedVibrationPattern;
    CGFloat _currentVibrationComponentDidStartTimeStamp;
    BOOL _isWaitingForEndOfCurrentVibrationComponent;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_saveButton;
    UIAlertController *_vibrationNameAlertController;
    UIAlertAction *_vibrationNameAlertSaveAction;
    UITextField *_vibrationNameAlertTextField;
    TKVibratorController *_vibratorController;
    NSDictionary *_indefiniteVibrationPattern;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TKVibrationRecorderViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TKVibrationRecorderViewController *parentVibrationRecorderViewController; // ivar: _parentVibrationRecorderViewController
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_indefiniteVibrationPattern;
-(id)initWithVibratorController:(id)arg0 ;
-(void)_accessibilityDidEnterRecordingMode;
-(void)_accessibilityDidEnterReplayMode;
-(void)_accessibilityDidExitRecordingMode;
-(void)_accessibilityDidExitReplayMode;
-(void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg0 ;
-(void)_cancelButtonInAlertTapped:(id)arg0 ;
-(void)_cancelButtonTapped:(id)arg0 ;
-(void)_cleanUpVibrationNameAlertController;
-(void)_eraseCurrentVibrationComponentDidStartTimeStamp;
-(void)_finishedWithRecorder;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)arg0 ;
-(void)_saveButtonInAlertTapped:(id)arg0 ;
-(void)_saveButtonTapped:(id)arg0 ;
-(void)_startVibratingWithVibrationPattern:(id)arg0 ;
-(void)_stopRecordingOrPlayingForApplicationSuspension;
-(void)_stopVibrating;
-(void)_storeVibrationComponentOfTypePause:(BOOL)arg0 ;
-(void)_updateStateSaveButtonInAlert;
-(void)_vibrationNameTextFieldContentsDidChange:(id)arg0 ;
-(void)applicationWillSuspend;
-(void)dealloc;
-(void)loadView;
-(void)vibrationComponentDidEndForVibrationRecorderView:(id)arg0 ;
-(void)vibrationComponentDidStartForVibrationRecorderView:(id)arg0 ;
-(void)vibrationRecorderView:(id)arg0 buttonTappedWithIdentifier:(int)arg1 ;
-(void)vibrationRecorderView:(id)arg0 didExitRecordingModeWithContextObject:(id)arg1 ;
-(void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg0 ;
-(void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif