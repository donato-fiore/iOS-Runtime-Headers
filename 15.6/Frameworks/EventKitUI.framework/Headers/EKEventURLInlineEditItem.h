// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKEVENTURLINLINEEDITITEM_H
#define EKEVENTURLINLINEEDITITEM_H

@class UITableViewCell, NSString;
@protocol UITextFieldDelegate, EKCalendarItemInlineEditItem;


#import "EKEventEditItem.h"

@interface EKEventURLInlineEditItem : EKEventEditItem <UITextFieldDelegate, EKCalendarItemInlineEditItem>

 {
    UITableViewCell *_cell;
    BOOL _tokenized;
    BOOL _hasChanges;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg0 ;
-(BOOL)isInline;
-(BOOL)isSaveable;
-(BOOL)saveAndDismissWithForce:(BOOL)arg0 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)searchStringForEventAutocomplete;
-(void)_setTokenized:(BOOL)arg0 ;
-(void)refreshFromCalendarItemAndStore;
-(void)reset;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif