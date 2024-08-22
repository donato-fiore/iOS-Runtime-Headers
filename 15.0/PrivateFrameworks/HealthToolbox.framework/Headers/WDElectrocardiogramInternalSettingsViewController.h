// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDELECTROCARDIOGRAMINTERNALSETTINGSVIEWCONTROLLER_H
#define WDELECTROCARDIOGRAMINTERNALSETTINGSVIEWCONTROLLER_H

@class HKTableViewController, UIPickerView, HKHostingAreaLayoutView, NSArray, HKDateCache, NSString, HKHealthStore, HKHeartRhythmAvailability, HKKeyValueDomain, NSDictionary, HRElectrocardiogramOnboardingManager, NPSManager;
@protocol UIPickerViewDelegate, UIPickerViewDataSource, HRElectrocardiogramOnboardingManagerDelegate, HKHeartRhythmAvailabilityObserver;



@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController <UIPickerViewDelegate, UIPickerViewDataSource, HRElectrocardiogramOnboardingManagerDelegate, HKHeartRhythmAvailabilityObserver>



@property (retain, nonatomic) UIPickerView *algorithmVersionPicker; // ivar: _algorithmVersionPicker
@property (retain, nonatomic) HKHostingAreaLayoutView *algorithmVersionPickerInputView; // ivar: _algorithmVersionPickerInputView
@property (readonly, nonatomic) NSArray *allAlgorithmVersions; // ivar: _allAlgorithmVersions
@property (readonly, nonatomic) NSArray *allDemoResults; // ivar: _allDemoResults
@property (readonly, nonatomic) HKDateCache *dateCache; // ivar: _dateCache
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeletingSamples) BOOL deletingSamples; // ivar: _deletingSamples
@property (retain, nonatomic) NSArray *demoResultKeys; // ivar: _demoResultKeys
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // ivar: _heartRhythmAvailability
@property (readonly, nonatomic) HKKeyValueDomain *keyValueDomain; // ivar: _keyValueDomain
@property (retain, nonatomic) NSDictionary *keyValueDomainContent; // ivar: _keyValueDomainContent
@property (retain, nonatomic) NSArray *keyValueDomainContentKeys; // ivar: _keyValueDomainContentKeys
@property (retain, nonatomic) HRElectrocardiogramOnboardingManager *onboardingManager; // ivar: _onboardingManager
@property (readonly, nonatomic) HKHostingAreaLayoutView *pickerInputView; // ivar: _pickerInputView
@property (readonly, nonatomic) UIPickerView *resultPicker; // ivar: _resultPicker
@property (readonly) Class superclass;
@property (readonly, nonatomic) NPSManager *syncManager; // ivar: _syncManager


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)_overrideAlgorithmVersion;
-(id)_buttonCellForTableView:(id)arg0 ;
-(id)_onboardingCompletedAlgorithmVersion;
-(id)_styleSubtitleCellForTableView:(id)arg0 ;
-(id)_styleValue1CellForTableView:(id)arg0 inputView:(id)arg1 ;
-(id)displayableDescriptionFromValue:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 dateCache:(id)arg1 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_presentAvailabilityInternalSettingsViewController;
-(void)_presentOnboardingManagerWithOnboardingType:(NSInteger)arg0 ;
-(void)_saveOverrideAlgorithmVersionIfNeeded:(NSInteger)arg0 ;
-(void)_startFullOnboarding;
-(void)_startUpgrade;
-(void)clearCellIndexNumberLabels;
-(void)dealloc;
-(void)didCompleteOnboarding;
-(void)didDismissOnboarding;
-(void)didTapOnElectrocardiogram:(id)arg0 ;
-(void)keyboardDidDismiss:(id)arg0 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)reloadKeyValueDomainContent;
-(void)setEditing:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 moveRowAtIndexPath:(id)arg1 toIndexPath:(id)arg2 ;
-(void)updateCellIndexNumberLabels;
-(void)viewDidLoad;


@end


#endif