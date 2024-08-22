// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARBUTTONEDITITEM_H
#define EKCALENDARBUTTONEDITITEM_H

@class UITableViewCell, NSString, UIView;


#import "EKCalendarEditItem.h"

@interface EKCalendarButtonEditItem : EKCalendarEditItem {
    UITableViewCell *_cell;
    id *_buttonTarget;
    SEL _buttonAction;
    NSString *_buttonTitle;
}


@property (readonly, nonatomic) UIView *buttonView;


-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(void)calendarEditor:(id)arg0 didSelectSubitem:(NSUInteger)arg1 ;
-(void)setButtonTarget:(id)arg0 action:(SEL)arg1 ;
-(void)setButtonTitle:(id)arg0 ;


@end


#endif