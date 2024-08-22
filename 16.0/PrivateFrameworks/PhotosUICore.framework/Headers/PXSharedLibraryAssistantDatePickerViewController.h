// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYASSISTANTDATEPICKERVIEWCONTROLLER_H
#define PXSHAREDLIBRARYASSISTANTDATEPICKERVIEWCONTROLLER_H

@class OBTableWelcomeController, UITableViewCell, NSString, UIDatePicker, NSDate, OBBoldTrayButton;
@protocol UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXAssistantViewController, PXAssistantViewControllerDelegate;


#import "PXSharedLibraryAssistantViewModel.h"

@interface PXSharedLibraryAssistantDatePickerViewController : OBTableWelcomeController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXAssistantViewController>

 {
    UITableViewCell *_startDateCell;
    UITableViewCell *_datePickerCell;
    UITableViewCell *_countsCell;
    BOOL _isShowingFullPicker;
    NSString *_cachedFooterText;
}


@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, nonatomic) UIDatePicker *datePicker; // ivar: _datePicker
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCustomDate; // ivar: _hasCustomDate
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDate *pickedDate; // ivar: _pickedDate
@property (readonly) Class superclass;
@property (readonly, nonatomic) OBBoldTrayButton *titleButton; // ivar: _titleButton
@property (readonly, nonatomic) PXSharedLibraryAssistantViewModel *viewModel; // ivar: _viewModel


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_datePickerCellForTableView:(id)arg0 ;
-(id)_startDateCellForTableView:(id)arg0 ;
-(id)initWithViewModel:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)_continueAssistant;
-(void)_datePickerDidChange:(id)arg0 ;
-(void)_resetPickerWithDate:(id)arg0 ;
-(void)_updateFooterText;
-(void)_updateHeaderText;
-(void)_updateStartDateCell;
-(void)_updateViewModelForStartDate:(id)arg0 completionHandler:(id)arg1 ;
-(void)continueButtonTapped:(id)arg0 ;
-(void)footerTextWithCompletion:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)resetPickerDate;
-(void)restorePickerDate;
-(void)skipButtonTapped:(id)arg0 ;
-(void)skipPickedDateAndContinue;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)truncateAndSetPickedDate:(id)arg0 ;
-(void)usePickedDateAndContinueWithCompletionHandler:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif