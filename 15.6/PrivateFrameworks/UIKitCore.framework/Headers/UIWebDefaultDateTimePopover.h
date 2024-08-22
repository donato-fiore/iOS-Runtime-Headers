// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIWEBDEFAULTDATETIMEPOPOVER_H
#define UIWEBDEFAULTDATETIMEPOPOVER_H

@protocol UIWebFormControl;


#import "UIWebFormRotatingAccessoryPopover.h"
#import "UIWebDateTimePopoverViewController.h"

@interface UIWebDefaultDateTimePopover : UIWebFormRotatingAccessoryPopover <UIWebFormControl>



@property (retain, nonatomic) UIWebDateTimePopoverViewController *_webDateTimeViewController; // ivar: _webDateTimeViewController


-(id)controlView;
-(id)initWithDOMHTMLInputElement:(id)arg0 datePickerMode:(NSInteger)arg1 ;
-(void)clear:(id)arg0 ;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;


@end


#endif