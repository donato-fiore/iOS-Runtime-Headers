// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKCALENDARVALIDATEEDITITEM_H
#define EKCALENDARVALIDATEEDITITEM_H

@class UITableViewCell, NSString, UIActivityIndicatorView, UILabel;


#import "EKCalendarButtonEditItem.h"

@interface EKCalendarValidateEditItem : EKCalendarButtonEditItem {
    UITableViewCell *_cell;
    NSString *_buttonTitle;
    UIActivityIndicatorView *_spinner;
    UILabel *_buttonTextLabel;
}


@property (nonatomic) BOOL URLIsSpam; // ivar: _URLIsSpam
@property (nonatomic) BOOL animateSpinner; // ivar: _animateSpinner
@property (nonatomic) BOOL showError; // ivar: _showError


-(id)cellForSubitemAtIndex:(NSUInteger)arg0 ;
-(id)footerTitle;
-(id)init;
-(void)setButtonTitle:(id)arg0 ;


@end


#endif