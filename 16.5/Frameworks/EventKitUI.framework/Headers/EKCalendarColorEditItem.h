// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARCOLOREDITITEM_H
#define EKCALENDARCOLOREDITITEM_H

@class UIColorPickerViewController, NSMutableArray, NSString;
@protocol UIColorPickerViewControllerDelegate, EKCalendarColorEditItemDelegate;


#import "EKCalendarEditItem.h"
#import "EKCalendarColorViewController.h"

@interface EKCalendarColorEditItem : EKCalendarEditItem <UIColorPickerViewControllerDelegate, EKCalendarColorEditItemDelegate>

 {
    UIColorPickerViewController *_customColorPicker;
    NSMutableArray *_cells;
    NSUInteger _checkedRow;
    EKCalendarColorViewController *_layoutInlineViewController;
}


@property (weak, nonatomic) NSObject<EKCalendarColorEditItemDelegate> *colorEditItemDelegate; // ivar: _colorEditItemDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL layoutInline; // ivar: _layoutInline
@property (readonly) Class superclass;


-(BOOL)configureWithCalendar:(id)arg0 ;
-(BOOL)saveStateToCalendar:(id)arg0 ;
-(NSUInteger)lastSubitemIndex;
-(NSUInteger)numberOfSubitems;
-(id)_cellForSymbolicColor:(id)arg0 ;
-(id)_cellWithText:(id)arg0 ;
-(id)_checkmarkCellForCustomColor:(id)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)cells;
-(id)headerTitle;
-(void)_setInitialColorOnCalendar;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)colorPickerViewControllerDidSelectColor:(id)arg0 ;
-(void)editItemSelectedColor:(id)arg0 symbolicName:(id)arg1 ;
-(void)reset;
-(void)setCalendar:(id)arg0 store:(id)arg1 ;


@end


#endif