// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKPRESCRIPTIONPICKERVIEWCONTROLLER_H
#define HKPRESCRIPTIONPICKERVIEWCONTROLLER_H

@class OBTableWelcomeController, HKHealthStore, NSArray, NSMutableSet, OBBoldTrayButton, NSBundle, NSSet, NSString, NSUUID, HKSource;
@protocol UITableViewDataSource, UITableViewDelegate, HKPrescriptionPickerCellDelegate, HKHealthPrivacyServicePickerController, HKHealthPrivacyServicePickerControllerDelegate;



@interface HKPrescriptionPickerViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HKPrescriptionPickerCellDelegate, HKHealthPrivacyServicePickerController>

 {
    HKHealthStore *_healthStore;
    NSArray *_samples;
    NSMutableSet *_samplesPendingAuthorizationUpdate;
    OBBoldTrayButton *_shareButton;
    BOOL _hasData;
    NSBundle *_visionBundle;
}


@property (readonly, nonatomic) NSSet *allSamples;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *enabledSamples; // ivar: _enabledSamples
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) HKSource *source; // ivar: _source
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_explanationTextForSource:(id)arg0 ;
-(id)_headerIcon;
-(id)_headerTitleForSource:(id)arg0 ;
-(id)_loadPreviewControllerForPrescription:(id)arg0 ;
-(id)_noDataTableViewCell;
-(id)_sortedPrescriptions:(id)arg0 ;
-(id)initWithHealthStore:(id)arg0 samples:(id)arg1 enabledSamples:(id)arg2 source:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_enableSample:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_setUpCancelBarButtonItem;
-(void)_setUpFooterView;
-(void)_setUpTableView;
-(void)_updateShareButtonState;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)didTapShowDetailsButtonForCell:(id)arg0 ;
-(void)didToggleSwitchForCell:(id)arg0 isOn:(BOOL)arg1 ;
-(void)learnMoreButtonTapped:(id)arg0 ;
-(void)shareButtonTapped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif