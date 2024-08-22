// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKEVENTNOTESINLINEEDITITEM_H
#define EKEVENTNOTESINLINEEDITITEM_H

@class NSString;
@protocol UITextViewDelegate, EKCalendarItemInlineEditItem;


#import "EKEventEditItem.h"
#import "CalendarNotesCell.h"

@interface EKEventNotesInlineEditItem : EKEventEditItem <UITextViewDelegate, EKCalendarItemInlineEditItem>

 {
    CalendarNotesCell *_cell;
    NSString *_lastTextChange;
    CGRect _keyboardRect;
    BOOL _textViewDirty;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isInline;
-(BOOL)isSaveable;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)textViewShouldReturn:(id)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)searchStringForEventAutocomplete;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)reset;
-(void)tableViewDidScroll;
-(void)textViewDidBeginEditing:(id)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)textViewDidEndEditing:(id)arg0 ;


@end


#endif