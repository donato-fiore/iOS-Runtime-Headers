// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXDIAGNOSTICSHIGHLIGHTCURATIONSETTINGSVIEWCONTROLLER_H
#define PXDIAGNOSTICSHIGHLIGHTCURATIONSETTINGSVIEWCONTROLLER_H

@class UIViewController, UISwitch, UITextField, NSDictionary;
@protocol PXDiagnosticsHighlightCurationSettingsViewControllerDelegate;



@interface PXDiagnosticsHighlightCurationSettingsViewController : UIViewController {
    id<PXDiagnosticsHighlightCurationSettingsViewControllerDelegate> *_delegate;
    UISwitch *_doIdenticalDedupingSwitch;
    UITextField *_identicalDedupingTimeIntervalTextField;
    UITextField *_identicalDedupingTimeIntervalForPeopleTextField;
    UITextField *_identicalDedupingMaximumTimeGroupExtensionTextField;
    UITextField *_maximumNumberOfItemsPerIdenticalClusterTextField;
    UITextField *_identicalDedupingThresholdTextField;
    UITextField *_identicalDedupingThresholdForPeopleTextField;
    UITextField *_identicalDedupingThresholdForBestItemsTextField;
    UISwitch *_useFaceprintsForIdenticalDedupingSwitch;
    UITextField *_identicalDedupingFaceprintDistanceTextField;
    UISwitch *_doSemanticalDedupingSwitch;
    UITextField *_semanticalDedupingTimeIntervalTextField;
    UITextField *_semanticalDedupingTimeIntervalForPeopleTextField;
    UITextField *_semanticalDedupingTimeIntervalForPersonsTextField;
    UITextField *_semanticalDedupingMaximumTimeGroupExtensionTextField;
    UITextField *_maximumNumberOfItemsPerSemanticalClusterTextField;
    UITextField *_semanticalDedupingThresholdTextField;
    UITextField *_semanticalDedupingThresholdForPeopleTextField;
    UITextField *_semanticalDedupingThresholdForPersonsTextField;
    UISwitch *_doNotSemanticallyDedupePeopleSwitch;
    UISwitch *_doNotSemanticallyDedupePersonsSwitch;
    UISwitch *_allowAdaptiveForSemanticalDedupingSwitch;
    UISwitch *_useOnlyScenesForDedupingSwitch;
    UISwitch *_useAllPersonsForDedupingSwitch;
    UISwitch *_useFaceQualityForElectionSwitch;
    UISwitch *_doNotDedupeVideosSwitch;
    UISwitch *_doNotDedupeInterestingPortraitsAndLivePicturesSwitch;
    UISwitch *_onlyDedupeContiguousItemsSwitch;
    UISwitch *_doDejunkSwitch;
    UISwitch *_returnDedupedJunkIfOnlyJunkSwitch;
    UISwitch *_doFinalPassSwitch;
    UITextField *_finalPassTimeIntervalTextField;
    UITextField *_finalPassMaximumTimeGroupExtensionTextField;
    UITextField *_finalPassDedupingThresholdTextField;
}


@property (retain, nonatomic) NSDictionary *options; // ivar: _options


-(id)initWithDelegate:(id)arg0 ;
-(void)_applySettingsGlobally:(id)arg0 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_resetSettings:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif