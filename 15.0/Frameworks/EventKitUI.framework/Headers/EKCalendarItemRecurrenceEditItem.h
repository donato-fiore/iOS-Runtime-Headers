// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EKCALENDARITEMRECURRENCEEDITITEM_H
#define EKCALENDARITEMRECURRENCEEDITITEM_H

@class NSDate, NSString;
@protocol EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener;


#import "EKCalendarItemEditItem.h"
#import "PreferencesValueCell.h"
#import "EKRecurrenceTypeEditItemViewController.h"
#import "EKCalendarItemRecurrenceEndCell.h"

@interface EKCalendarItemRecurrenceEditItem : EKCalendarItemEditItem <EKRecurrenceTypeEditItemViewControllerDelegate, EKCellShortener>

 {
    NSInteger _repeatType;
    NSInteger _originalRepeatType;
    NSDate *_repeatEnd;
    NSDate *_originalRepeatEnd;
    NSString *_customRepeatDescription;
    NSUInteger _disclosedSubitem;
    int _shorteningStatus;
    PreferencesValueCell *_repeatEndDateCell;
    EKRecurrenceTypeEditItemViewController *_recurrenceTypeVC;
    EKCalendarItemRecurrenceEndCell *_repeatEndPickerCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_neverLocalizedString;
-(BOOL)_validateRecurrenceType:(id)arg0 ;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 ;
-(BOOL)editItemViewControllerSave:(id)arg0 notify:(BOOL)arg1 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(NSInteger)repeatTypeForRecurrenceRule:(id)arg0 ;
-(NSUInteger)numberOfSubitems;
-(id)_recurrenceTypeVC;
-(id)_repeatEndPickerCell;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)detailViewControllerWithFrame:(struct CGRect )arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(id)init;
-(id)minRecurrenceEndDate;
-(id)recurrenceDate;
-(id)recurrenceTimeZone;
-(id)stringForDate:(id)arg0 ;
-(void)_contentSizeCategoryChanged:(id)arg0 ;
-(void)_neverRepeatButtonTapped:(id)arg0 ;
-(void)_repeatEndDateChanged:(id)arg0 ;
-(void)_updateRepeatEndDateCell;
-(void)dealloc;
-(void)refreshFromCalendarItemAndStore;
-(void)reset;
-(void)shortenCell:(id)arg0 ;


@end


#endif