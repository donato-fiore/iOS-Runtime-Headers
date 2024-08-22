// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKCALENDARTITLEEDITITEM_H
#define EKCALENDARTITLEEDITITEM_H

@class UITableViewCell, NSString;
@protocol UITextFieldDelegate;


#import "EKCalendarEditItem.h"

@interface EKCalendarTitleEditItem : EKCalendarEditItem <UITextFieldDelegate>

 {
    UITableViewCell *_cell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *prefillTitle; // ivar: _prefillTitle
@property (nonatomic) BOOL showHeader; // ivar: _showHeader
@property (readonly) Class superclass;


-(BOOL)becomeFirstResponder;
-(BOOL)saveStateToCalendar:(id)arg0 ;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(CGFloat)defaultCellHeightForSubitemAtIndex:(NSUInteger)arg0 forWidth:(CGFloat)arg1 ;
-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)headerTitle;
-(void)reset;
-(void)textFieldDidEndEditing:(id)arg0 ;


@end


#endif