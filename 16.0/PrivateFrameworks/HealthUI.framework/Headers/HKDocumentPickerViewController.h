// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKDOCUMENTPICKERVIEWCONTROLLER_H
#define HKDOCUMENTPICKERVIEWCONTROLLER_H

@class NSMutableArray, HKHealthStore, NSSet, NSString, NSMutableSet, NSUUID, HKSource;
@protocol HKCDADocumentTableViewCellDelegate, HKDataMetadataViewControllerDelegate, HKHealthPrivacyServicePickerController, HKHealthPrivacyServicePickerControllerDelegate;


#import "HKTableViewController.h"
#import "HKTitledIconHeaderView.h"

@interface HKDocumentPickerViewController : HKTableViewController <HKCDADocumentTableViewCellDelegate, HKDataMetadataViewControllerDelegate, HKHealthPrivacyServicePickerController>

 {
    NSMutableArray *_samplesList;
    NSInteger _presentationStyle;
    HKHealthStore *_healthStore;
    BOOL _hasPendingDocumentFetch;
    BOOL _showCheckboxes;
    HKTitledIconHeaderView *_tableHeaderView;
}


@property (readonly, nonatomic) NSSet *allSamples; // ivar: _allSamples
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKHealthPrivacyServicePickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSMutableSet *enabledSamples; // ivar: _enabledSamples
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (copy, nonatomic) HKSource *source; // ivar: _source
@property (readonly) Class superclass;


-(BOOL)_isPrompting;
-(BOOL)_needsSampleRequestDescription;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_tableHeaderView;
-(id)dataMetadataViewControllerForSample:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDocumentAuthorizations:(id)arg0 ;
-(id)initWithDocuments:(id)arg0 presentationStyle:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_addCancelAndDoneButtons;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)_enableDocumentSample:(id)arg0 enabled:(BOOL)arg1 ;
-(void)_finishWithError:(id)arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)cdaDocumentTableViewCellDidChangeValue:(id)arg0 ;
-(void)configureHeaderView:(id)arg0 ;
-(void)pushDetailForDocumentSample:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif