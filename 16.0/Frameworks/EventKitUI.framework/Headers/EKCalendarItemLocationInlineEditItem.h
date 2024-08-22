// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARITEMLOCATIONINLINEEDITITEM_H
#define EKCALENDARITEMLOCATIONINLINEEDITITEM_H

@class NSString;
@protocol UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailSuggestedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem;


#import "EKEventEditItem.h"
#import "EKUILocationEditItemModel.h"
#import "EKCalendarItemEditor.h"
#import "EKLocationEditItemViewController.h"

@interface EKCalendarItemLocationInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKEventDetailSuggestedLocationCellDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, EKCalendarItemInlineEditItem>

 {
    EKUILocationEditItemModel *_viewModel;
    EKCalendarItemEditor *_editor;
    EKLocationEditItemViewController *_currentLocationEditController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editor:(id)arg0 canSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)forceRefreshURLItemOnSave;
-(BOOL)forceTableReloadOnSave;
-(BOOL)isInline;
-(BOOL)isSaveable;
-(BOOL)isSubitemAtIndexSaveable:(NSUInteger)arg0 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)usesDetailViewControllerForSubitem:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)_supportedSearchTypesForSubitemAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 inEditor:(id)arg1 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)searchStringForEventAutocomplete;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(void)_clearButtonTapped:(id)arg0 ;
-(void)_clearLocationAtIndex:(NSUInteger)arg0 ;
-(void)_scribbleInteraction:(id)arg0 didFinishWritingInElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)_setEditor:(id)arg0 andUpdateScribbleInteractionOnCell:(id)arg1 addScribbleInteraction:(BOOL)arg2 ;
-(void)_updateClearButtonAndMakeVisible:(id)arg0 index:(NSUInteger)arg1 ;
-(void)_updateMapLocationCell:(id)arg0 index:(NSUInteger)arg1 location:(id)arg2 ;
-(void)_updateVirtualConferenceCell:(id)arg0 index:(NSUInteger)arg1 virtualConference:(id)arg2 ;
-(void)addStylingToCell:(id)arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)didTapAddSuggestedLocationCell:(id)arg0 disambiguatedLocation:(id)arg1 ;
-(void)didTapDismissSuggestedLocationCell:(id)arg0 ;
-(void)editItemPendingVideoConferenceCompleted:(id)arg0 ;
-(void)refreshFromCalendarItemAndStore;
-(void)reset;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif