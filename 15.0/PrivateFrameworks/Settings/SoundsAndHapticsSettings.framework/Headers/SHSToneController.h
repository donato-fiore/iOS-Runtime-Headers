// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SHSTONECONTROLLER_H
#define SHSTONECONTROLLER_H

@class PSViewController, NSString, TKTonePickerViewController, TKVibrationPickerViewController;
@protocol TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate;



@interface SHSToneController : PSViewController <TKTonePickerViewControllerDelegate, TKVibrationPickerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) TKTonePickerViewController *tonePickerViewController; // ivar: _tonePickerViewController
@property (retain, nonatomic) TKVibrationPickerViewController *vibrationPickerViewController; // ivar: _vibrationPickerViewController


-(id)_defaultToneIdentifierForTonePickerWithAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)_defaultVibrationIdentifierForVibrationPickerWithAlertType:(NSInteger)arg0 topic:(id)arg1 ;
-(id)init;
-(void)_handleAlertOverridePolicyDidChangeNotification:(id)arg0 ;
-(void)_insertTonePickerView;
-(void)_updateReloadSpecifierInParentController;
-(void)dealloc;
-(void)setSpecifier:(id)arg0 ;
-(void)tonePickerViewController:(id)arg0 didDismissVibrationPickerViewController:(id)arg1 ;
-(void)tonePickerViewController:(id)arg0 selectedToneWithIdentifier:(id)arg1 ;
-(void)tonePickerViewController:(id)arg0 willPresentVibrationPickerViewController:(id)arg1 ;
-(void)vibrationPickerViewController:(id)arg0 selectedVibrationWithIdentifier:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif