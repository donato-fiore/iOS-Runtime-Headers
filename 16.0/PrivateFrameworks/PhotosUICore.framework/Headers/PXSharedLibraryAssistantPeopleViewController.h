// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTPEOPLEVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTPEOPLEVIEWCONTROLLER_H

@class OBTableWelcomeController, OBBoldTrayButton, UITableViewHeaderFooterView, NSString;
@protocol PXAssistantViewController, PXPeopleFlowDelegate, PXPhotoLibraryUIChangeObserver, PXSectionedDataSourceManagerObserver, PHPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryIncludedPeopleDataSourceManager.h"
#import "PXSharedLibraryIncludedPeopleTableViewCell.h"
#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantPeopleViewController : OBTableWelcomeController <PXAssistantViewController, PXPeopleFlowDelegate, PXPhotoLibraryUIChangeObserver, PXSectionedDataSourceManagerObserver, PHPickerViewControllerDelegate, UITableViewDelegate, UITableViewDataSource>

 {
    PXSharedLibraryIncludedPeopleDataSourceManager *_dataSourceManager;
    OBBoldTrayButton *_continueButton;
    UITableViewHeaderFooterView *_peopleSectionHeaderView;
    UITableViewHeaderFooterView *_peopleSectionFooterView;
    PXSharedLibraryIncludedPeopleTableViewCell *_peopleCell;
    BOOL _pickerWasPresentedFromContinueButton;
    BOOL _wantsToContinueToNextStep;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


+(id)_fetchedPeople:(id)arg0 sortedByLocalIdentifiers:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)alertConfigurationForIdentifyingPeopleInfos:(id)arg0 action:(id)arg1 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)peopleInfosToIdentifyInDataSource:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_advanceToNextStep;
-(void)_fixupStalePersonForUUID:(id)arg0 ;
-(void)_presentPickerForInfos:(id)arg0 ;
-(void)_suggestedStartDateChanged;
-(void)_updateContinueButton;
-(void)_updateFooterText;
-(void)_updateHeaderDetailText;
-(void)addLaterButtonTapped:(id)arg0 ;
-(void)cancel:(id)arg0 ;
-(void)completeRulesStep;
-(void)continueButtonTapped:(id)arg0 ;
-(void)done:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif