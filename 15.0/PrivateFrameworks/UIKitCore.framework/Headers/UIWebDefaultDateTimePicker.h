// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIWEBDEFAULTDATETIMEPICKER_H
#define UIWEBDEFAULTDATETIMEPICKER_H

@class NSString, DOMHTMLInputElement;
@protocol UIWebFormControl;

#import <Foundation/Foundation.h>

#import "UIDatePicker.h"

@interface UIWebDefaultDateTimePicker : NSObject <UIWebFormControl>

 {
    NSString *_formatString;
    BOOL _shouldRemoveTimeZoneInformation;
    BOOL _isTimeInput;
}


@property (retain, nonatomic) UIDatePicker *_datePicker; // ivar: _datePicker
@property (retain, nonatomic) DOMHTMLInputElement *_inputElement; // ivar: _inputElement


-(NSInteger)_timeZoneOffsetFromGMT:(id)arg0 ;
-(id)_sanitizeInputValueForFormatter:(id)arg0 ;
-(id)controlView;
-(id)initWithDOMHTMLInputElement:(id)arg0 datePickerMode:(NSInteger)arg1 ;
-(void)_dateChangeHandler:(id)arg0 ;
-(void)_dateChanged;
-(void)_dateChangedSetAsNumber;
-(void)_dateChangedSetAsString;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)dealloc;


@end


#endif