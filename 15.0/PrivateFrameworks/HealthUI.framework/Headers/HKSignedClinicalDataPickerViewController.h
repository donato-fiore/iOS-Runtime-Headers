// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSIGNEDCLINICALDATAPICKERVIEWCONTROLLER_H
#define HKSIGNEDCLINICALDATAPICKERVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, NSDictionary, OBBoldTrayButton, OBLinkTrayButton, NSSet, NSString, NSMutableSet, NSUUID, HKSource;
@protocol UITableViewDataSource, UITableViewDelegate, HKObjectPickerTableViewCellDelegate, HKHealthPrivacyServicePickerController, HKHealthPrivacyServicePickerControllerDelegate;



@interface HKSignedClinicalDataPickerViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, HKObjectPickerTableViewCellDelegate, HKHealthPrivacyServicePickerController>

 {
    NSArray *_clinicalRecords;
    NSDictionary *_signedRecordsByIdentifier;
    NSArray *_recordTypes;
    OBBoldTrayButton *_shareButton;
    OBLinkTrayButton *_cancelButton;
    BOOL _hasData;
}


@property (readonly, nonatomic) NSSet *allSamples; // ivar: _allSamples
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *enabledSamples; // ivar: _enabledSamples
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) HKSource *source; // ivar: _source
@property (readonly) Class superclass;


-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_explanationText:(id)arg0 ;
-(id)_headerIconForRecordTypes:(id)arg0 ;
-(id)_headerTitleForRecordTypes:(id)arg0 ;
-(id)_noDataExplanationTextForRecordTypes:(id)arg0 ;
-(id)_noDataTableViewCell;
-(id)initWithClinicalRecords:(id)arg0 signedRecords:(id)arg1 recordTypes:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_enableSample:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_setUpAccessoryButton;
-(void)_setUpCancelBarButtonItem;
-(void)_setUpFooterView;
-(void)_setUpTableView;
-(void)_updateCancelButtonState;
-(void)_updateShareButtonState;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)learnMoreButtonTapped:(id)arg0 ;
-(void)shareButtonTapped:(id)arg0 ;
-(void)showDetailsButtonTappedForCell:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif