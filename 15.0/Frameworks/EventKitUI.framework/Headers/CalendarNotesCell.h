// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CALENDARNOTESCELL_H
#define CALENDARNOTESCELL_H

@class UITextView, NSString;


#import "EKUITableViewCell.h"

@interface CalendarNotesCell : EKUITableViewCell {
    UITextView *_textView;
}


@property (retain, nonatomic) NSString *placeholder;
@property (copy, nonatomic) NSString *text; // ivar: _text
@property (readonly, retain, nonatomic) UITextView *textView;


-(BOOL)becomeFirstResponder;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)layoutSubviews;


@end


#endif