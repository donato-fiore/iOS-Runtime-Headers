// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDMEDICALIDVIEWCONTROLLER_H
#define WDMEDICALIDVIEWCONTROLLER_H

@class UITableViewController, _HKMedicalIDData, UIScrollView, UIStackView, HKNavigationController, UIAlertController, HKMedicalIDViewController, NSString, SOSContactsManager;
@protocol HKMedicalIDViewControllerDelegate, WDUserActivityResponder;


#import "WDProfile.h"

@interface WDMedicalIDViewController : UITableViewController <HKMedicalIDViewControllerDelegate, WDUserActivityResponder>

 {
    _HKMedicalIDData *_medicalIDData;
    BOOL _medicalIDIsNew;
    UIScrollView *_introView;
    UIStackView *_introStackView;
    BOOL _loadingMedicalID;
    int _medicalIDChangedToken;
    HKNavigationController *_medicalIDEditor;
    BOOL _shouldShowConsolidationAlert;
}


@property (weak, nonatomic) UIAlertController *consolidationAlertController; // ivar: _consolidationAlertController
@property (weak, nonatomic) HKMedicalIDViewController *currentMedicalIDViewController; // ivar: _currentMedicalIDViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WDProfile *profile; // ivar: _profile
@property (nonatomic) BOOL shouldReloadMedicalIDData; // ivar: _shouldReloadMedicalIDData
@property (retain, nonatomic) SOSContactsManager *sosContactsManager; // ivar: _sosContactsManager
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(NSUInteger)supportedInterfaceOrientations;
-(id)_createMedicalIDDataFromMeCardAndHealthKit;
-(id)applyTransitionActivity:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(id)medicalIDViewControllerInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)uniqueUserActivityType;
-(void)_assertViewStateWhenViewDidAppear;
-(void)_checkForEmergencyContactConsolidationNeeds;
-(void)_consolidateSOSContactsWithMedicalIDContacts;
-(void)_createMedicalIDTapped:(id)arg0 ;
-(void)_dismissMedicalIDEditor;
-(void)_dismissMedicalIDView;
-(void)_handleFetchedMedicalIDData:(id)arg0 ;
-(void)_loadMedicalIDDataIfNecessaryWithCompletion:(id)arg0 ;
-(void)_organDonationSignupButtonTapped:(id)arg0 ;
-(void)_pushAndSetCurrentMedicalIDViewController:(id)arg0 ;
-(void)_showContactsConsolidationAlert;
-(void)_showMedicalIDEditor;
-(void)_showMedicalIDView;
-(void)_updateActivityForViewDidAppear;
-(void)applyChangeActivity:(id)arg0 ;
-(void)dealloc;
-(void)medicalIDViewControllerDidAppear:(id)arg0 ;
-(void)medicalIDViewControllerDidCancel:(id)arg0 ;
-(void)medicalIDViewControllerDidDelete:(id)arg0 ;
-(void)medicalIDViewControllerDidSave:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateNavigationbar;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif