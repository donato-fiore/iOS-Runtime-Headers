// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TKVIBRATIONPICKERVIEWCONTROLLER_H
#define TKVIBRATIONPICKERVIEWCONTROLLER_H

@class UITableViewController, NSString, TLVibrationManager, NSTimer, NSArray, NSIndexPath, NSMutableDictionary;
@protocol PSStateRestoration, TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, TKVibrationPickerStyleProvider;


#import "TKVibratorController.h"

@interface TKVibrationPickerViewController : UITableViewController <PSStateRestoration, TKVibrationPickerTableViewCellDelegate, TKVibrationRecorderViewControllerDelegate, UINavigationControllerDelegate>

 {
    BOOL _showsEditButtonAtRightSideOfCurrentNavigationController;
    BOOL _canEnterEditingMode;
    BOOL _viewHasAppearedAtLeastOnce;
    BOOL _isCallingParentViewController;
    BOOL _swipeToDeleteMode;
    BOOL _skipNextUserGeneratedVibrationsDidChangeNotification;
    BOOL _defaultVibrationIdentifierWasExplicitlySet;
    BOOL _showsSynchronized;
    NSString *_synchronizedVibrationIdentifier;
    TLVibrationManager *_vibrationManager;
    TKVibratorController *_vibratorController;
    NSTimer *_vibrationShouldStopTimer;
    NSArray *_sortedVibrationIdentifiers;
    NSArray *_sortedUserGeneratedVibrationIdentifiers;
    NSIndexPath *_indexPathOfCellBeingDeleted;
    NSMutableDictionary *_sectionHeaderViews;
}


@property (weak, nonatomic, setter=_setAdditionalDelegate:) NSObject<TKVibrationPickerViewControllerDelegate> *_additionalDelegate; // ivar: __additionalDelegate
@property (weak, nonatomic, setter=_setDismissalDelegate:) NSObject<TKVibrationPickerViewControllerDismissalDelegate> *_dismissalDelegate; // ivar: __dismissalDelegate
@property (copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) NSInteger alertType; // ivar: _alertType
@property (nonatomic) BOOL allowsDeletingDefaultVibration; // ivar: _allowsDeletingDefaultVibration
@property (readonly, nonatomic) BOOL canEnterEditingMode;
@property (copy, nonatomic) NSString *correspondingToneIdentifier; // ivar: _correspondingToneIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *defaultVibrationIdentifier; // ivar: _defaultVibrationIdentifier
@property (weak, nonatomic) NSObject<TKVibrationPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *noneString; // ivar: _noneString
@property (retain, nonatomic) NSString *selectedVibrationIdentifier; // ivar: _selectedVibrationIdentifier
@property (nonatomic) BOOL showsDefault; // ivar: _showsDefault
@property (nonatomic) BOOL showsEditButtonInNavigationBar; // ivar: _showsEditButtonInNavigationBar
@property (nonatomic) BOOL showsNone; // ivar: _showsNone
@property (nonatomic) BOOL showsNothingSelected; // ivar: _showsNothingSelected
@property (nonatomic) BOOL showsUserGenerated; // ivar: _showsUserGenerated
@property (retain, nonatomic) NSObject<TKVibrationPickerStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *topic; // ivar: _topic


-(BOOL)_canShowWhileLocked;
-(BOOL)_showsOnlyEditableSections;
-(BOOL)canBeShownFromSuspendedState;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_numberOfRowsInVibrationPickerSection:(NSInteger)arg0 ;
-(NSInteger)_sectionForDefaultGroup;
-(NSInteger)_sectionForNoneGroup;
-(NSInteger)_sectionForSynchronizedGroup;
-(NSInteger)_sectionForSystemGroup;
-(NSInteger)_sectionForUserGeneratedGroup;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_adjustedNameForVibrationWithDesiredName:(id)arg0 vibrationIdentifier:(id)arg1 ;
-(id)_customHeaderViewForHeaderInSection:(NSInteger)arg0 ;
-(id)_identifierOfVibrationAtIndexPath:(id)arg0 ;
-(id)_indexPathForVibrationWithIdentifier:(id)arg0 ;
-(id)_initWithAlertType:(NSInteger)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)_localizationIdentifierForHeaderInSection:(NSInteger)arg0 ;
-(id)_navigationItem;
-(id)_sanitizeVibrationIdentifierForPlayback:(id)arg0 ;
-(id)_sanitizedCorrespondingToneIdentifier;
-(id)_sanitizedDefaultVibrationIdentifier;
-(id)_selectedVibrationIndexPath;
-(id)_sortedArrayWithVibrationIdentifiers:(id)arg0 allowsDuplicateVibrationNames:(BOOL)arg1 ;
-(id)_sortedUserGeneratedVibrationIdentifiers;
-(id)_sortedVibrationIdentifiers;
-(id)initWithAlertType:(NSInteger)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(struct ? )_cellAccessoriesDescriptorForRowAtIndexPath:(id)arg0 ;
-(void)_handleError:(id)arg0 ;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(void)_presentVibrationRecorderViewController;
-(void)_processCurrentVibrationSelection;
-(void)_startVibratingWithVibrationIdentifier:(id)arg0 ;
-(void)_stopVibrating;
-(void)_updateCheckedStateOfAllVisibleCells;
-(void)_updateEditButtonItem;
-(void)_updateEditButtonItemWithAnimation:(BOOL)arg0 ;
// -(void)_updateSectionVisibilityFlagToValue:(BOOL)arg0 usingBlock:(id)arg1 sectionIndexGetter:(unk)arg2  ;
-(void)_updateSelectionStyleForCell:(id)arg0 indexPath:(id)arg1 ;
-(void)_updateStyleOfTableView:(id)arg0 forStyleProvider:(id)arg1 ;
-(void)_updateVisibilityOfSynchronizedGroup;
-(void)applicationWillSuspend;
-(void)dealloc;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)vibrationPickerTableViewCell:(id)arg0 endedEditingWithText:(id)arg1 ;
-(void)vibrationRecorderViewController:(id)arg0 didFinishRecordingVibrationPattern:(id)arg1 name:(id)arg2 ;
-(void)vibrationRecorderViewControllerWasDismissedWithoutSavingRecordedVibrationPattern:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif