// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDMEDICALRECORDDETAILVIEWCONTROLLER_H
#define WDMEDICALRECORDDETAILVIEWCONTROLLER_H

@class HKTableViewController, HKClinicalAccount, HKAccountOwner, UIProgressHUD, NSDate, HKMedicalRecord;
@protocol WDMedicalRecordDetailDataProviderDelegate;


#import "WDMedicalRecordDetailDataProvider.h"
#import "HRProfile.h"

@interface WDMedicalRecordDetailViewController : HKTableViewController <WDMedicalRecordDetailDataProviderDelegate>



@property (readonly, copy, nonatomic) HKClinicalAccount *account; // ivar: _account
@property (readonly, copy, nonatomic) HKAccountOwner *accountOwner; // ivar: _accountOwner
@property (weak, nonatomic) UIProgressHUD *hud; // ivar: _hud
@property (copy, nonatomic) NSDate *hudEarliestDismissalDate; // ivar: _hudEarliestDismissalDate
@property (retain, nonatomic) HKMedicalRecord *medicalRecord; // ivar: _medicalRecord
@property (retain, nonatomic) WDMedicalRecordDetailDataProvider *medicalRecordDataProvider; // ivar: _medicalRecordDataProvider
@property (nonatomic) BOOL needsReloadOnEnteringForeground; // ivar: _needsReloadOnEnteringForeground
@property (retain, nonatomic) HRProfile *profile; // ivar: _profile


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_makeCopyMenuFor:(id)arg0 ;
-(id)_pasteboardStringForRowAtIndexPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfile:(id)arg0 medicalRecord:(id)arg1 ;
-(id)recordCategory;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 contextMenuConfigurationForRowAtIndexPath:(id)arg1 point:(struct CGPoint )arg2 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_deleteSignedClinicalData;
-(void)_dismissViewController;
-(void)_hideActivityWithError:(id)arg0 completion:(id)arg1 ;
-(void)_openAppURL:(id)arg0 ;
-(void)_promptForSignedClinicalDataDeletion:(id)arg0 ;
-(void)_showActivityInProgressUIWithMessage:(id)arg0 ;
-(void)_tapToRadar:(id)arg0 ;
-(void)detailDataProviderHasDisplayItemUpdate:(id)arg0 ;
-(void)didEnterForeground:(id)arg0 ;
-(void)recomputeDisplayItems:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)trackUserImpression;
-(void)trackUserInteraction;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif