// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKCALENDARVALIDATEEDITITEM_H
#define EKCALENDARVALIDATEEDITITEM_H

@class UITableViewCell, NSString, UIActivityIndicatorView;


#import "EKCalendarButtonEditItem.h"

@interface EKCalendarValidateEditItem : EKCalendarButtonEditItem {
    UITableViewCell *_cell;
    NSString *_buttonTitle;
    UIActivityIndicatorView *_spinner;
}


@property (nonatomic) BOOL animateSpinner; // ivar: _animateSpinner
@property (nonatomic) BOOL showError; // ivar: _showError


-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)footerTitle;
-(id)init;
-(void)setButtonTitle:(id)arg0 ;


@end


#endif