// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCOMPOSERECIPIENTTABLEVIEWCONTROLLER_H
#define PXCOMPOSERECIPIENTTABLEVIEWCONTROLLER_H

@class UITableViewController, NSIndexPath, UITableViewHeaderFooterView, NSString;
@protocol PXComposeRecipientDataSourceManagerDelegate, PXComposeRecipientSelectionManagerDelegate, PXComposeRecipientValidationManagerDelegate, CNContactViewControllerDelegate, PXPhotoRecipientViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXPersonSuggestion, PXComposeRecipientTableViewControllerDelegate;


#import "PXPhotoRecipientViewController.h"
#import "PXComposeRecipientSelectionManager.h"
#import "PXComposeRecipientValidationManager.h"
#import "PXComposeRecipientTableViewModel.h"

@interface PXComposeRecipientTableViewController : UITableViewController <PXComposeRecipientDataSourceManagerDelegate, PXComposeRecipientSelectionManagerDelegate, PXComposeRecipientValidationManagerDelegate, CNContactViewControllerDelegate, PXPhotoRecipientViewControllerDelegate, UITableViewDataSource, UITableViewDelegate, PXChangeObserver>

 {
    PXPhotoRecipientViewController *_bootstrapRecipientViewController;
    id<PXPersonSuggestion> *_personSuggestionForBootstrapping;
    NSIndexPath *_indexPathForBootstrapping;
    PXPhotoRecipientViewController *_addPeopleRecipientViewController;
    UITableViewHeaderFooterView *_footerView;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXComposeRecipientTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat footerHeight; // ivar: _footerHeight
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headerHeight; // ivar: _headerHeight
@property (retain, nonatomic) PXComposeRecipientSelectionManager *selectionManager; // ivar: _selectionManager
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat tableViewHeight; // ivar: _tableViewHeight
@property (retain, nonatomic) PXComposeRecipientValidationManager *validationManager; // ivar: _validationManager
@property (retain, nonatomic) PXComposeRecipientTableViewModel *viewModel; // ivar: _viewModel


+(BOOL)_isGreenTeaAndAccessDenied;
+(id)_contactViewControllerToPresentForRecipientViewController:(id)arg0 ;
-(BOOL)_updateFooterHeight;
-(BOOL)_updateHeaderHeight;
-(BOOL)_updateRowHeight;
-(BOOL)isValidAddressForComposeRecipient:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_footerView;
-(id)_tableView:(id)arg0 participantCellForRowAtIndexPath:(id)arg1 ;
-(id)cellModelAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(void)_contactViewController:(id)arg0 didSelectContact:(id)arg1 ;
-(void)_contentSizeCategoryDidChange:(id)arg0 ;
-(void)_dismissRecipientViewController:(id)arg0 ;
-(void)_handleAddRecipient:(id)arg0 ;
-(void)bootstrapPersonSuggestion:(id)arg0 withContact:(id)arg1 ;
-(void)composeRecipientDataSourceManager:(id)arg0 didUpdateDataSourceWithChangeDetails:(id)arg1 ;
-(void)composeRecipientSelectionManager:(id)arg0 didUpdateSelectionSnapshotWithChangeDetails:(id)arg1 ;
-(void)composeRecipientValidationManager:(id)arg0 didUpdateValidationWithChangedIndexes:(id)arg1 ;
-(void)configureCellModel:(id)arg0 withComposeRecipient:(id)arg1 ;
-(void)configureWithViewModel:(id)arg0 ;
-(void)contactViewController:(id)arg0 didCompleteWithContact:(id)arg1 ;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoRecipientViewController:(id)arg0 didCompleteWithRecipients:(id)arg1 ;
-(void)photoRecipientViewControllerDidCancel:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateTableViewHeight;
-(void)viewWillLayoutSubviews;


@end


#endif