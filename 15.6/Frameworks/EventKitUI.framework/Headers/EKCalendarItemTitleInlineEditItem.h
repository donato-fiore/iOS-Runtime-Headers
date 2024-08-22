// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARITEMTITLEINLINEEDITITEM_H
#define EKCALENDARITEMTITLEINLINEEDITITEM_H

@class UITableViewCell, NSString, UITextField;
@protocol UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem;


#import "EKCalendarItemEditItem.h"

@interface EKCalendarItemTitleInlineEditItem : EKCalendarItemEditItem <UITextFieldDelegate, EKEditItemViewControllerDelegate, EKCalendarItemInlineEditItem>

 {
    UITableViewCell *_titleCell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL drawsOwnRowSeparators; // ivar: _drawsOwnRowSeparators
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UITextField *titleTextField;


-(BOOL)editor:(id)arg0 canSelectSubitem:(NSUInteger)arg1 ;
-(BOOL)isInline;
-(BOOL)isSaveable;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(BOOL)usesDetailViewControllerForSubitem:(NSUInteger)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(NSUInteger)numberOfSubitems;
-(id)_makeCell:(NSUInteger)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)searchStringForEventAutocomplete;
-(void)_contentSizeCategoryChanged:(id)arg0 ;
-(void)addStylingToCell:(id)arg0 forSubitemAtIndex:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidChange:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif