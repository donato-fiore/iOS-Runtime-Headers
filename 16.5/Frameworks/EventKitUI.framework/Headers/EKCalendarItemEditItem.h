// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARITEMEDITITEM_H
#define EKCALENDARITEMEDITITEM_H

@class EKEventStore, UIViewController<EKEditItemViewControllerProtocol>, EKCalendarItem, NSString, UIResponder;
@protocol EKEditItemViewControllerDelegate, EKCalendarItemEditItemDelegate, EKStyleProvider;

#import <Foundation/Foundation.h>


@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate>

 {
    EKEventStore *_store;
    UIViewController<EKEditItemViewControllerProtocol> *_viewController;
    EKCalendarItem *_calendarItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<EKCalendarItemEditItemDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIResponder *selectedResponder; // ivar: _selectedResponder
@property (retain, nonatomic) NSObject<EKStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;


-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)configureForCalendarConstraints:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editor:(id)arg0 canSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)editor:(id)arg0 shouldClearSelectionFromSubitem:(NSUInteger)arg1 ;
-(BOOL)forceRefreshAlarmItemOnSave;
-(BOOL)forceRefreshInviteesItemOnSave;
-(BOOL)forceRefreshLocationItemOnSave;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)forceRefreshURLItemOnSave;
-(BOOL)forceTableReloadOnSave;
-(BOOL)isInline;
-(BOOL)prefersTargettedTableReloadOnSave;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)shouldAppearWithVisibility:(int)arg0 ;
-(BOOL)shouldPinKeyboard;
-(BOOL)usesDetailViewControllerForSubitem:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(CGFloat)footerHeightForWidth:(CGFloat)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)calendarItem;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 inEditor:(id)arg1 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)editItemEventToDetach;
-(id)footerTitle;
-(id)footerView;
-(id)headerTitle;
-(id)injectableViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)trailingSwipeActionsConfigurationForRowAtIndex:(NSInteger)arg0 ;
-(id)viewForActionSheet;
-(void)addStylingToCell:(id)arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)applicationDidResume;
-(void)editItemViewController:(id)arg0 didCompleteWithAction:(int)arg1 ;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg0 ;
-(void)editor:(id)arg0 didDeselectSubitem:(NSUInteger)arg1 ;
-(void)editor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)editor:(id)arg0 didStartEditingItem:(id)arg1 ;
-(void)editor:(id)arg0 requestsInjectableViewControllerToBeShownForSubitem:(NSUInteger)arg1 ;
-(void)editorDidScroll:(id)arg0 ;
-(void)endInlineEditing;
-(void)notifyDidEndEditing;
-(void)notifyDidStartEditing;
-(void)notifyRequiresHeightChange;
-(void)notifySubitemDidSave:(NSUInteger)arg0 ;
-(void)notifyTextChanged;
-(void)prepareForReload;
-(void)refreshFromCalendarItemAndStore;
-(void)reset;
-(void)setCalendarItem:(id)arg0 store:(id)arg1 ;
-(void)showViewController:(id)arg0 editor:(id)arg1 animated:(BOOL)arg2 ;
-(void)tableViewDidScroll;


@end


#endif