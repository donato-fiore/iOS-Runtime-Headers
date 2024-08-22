// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WKDATETIMEPICKER_H
#define WKDATETIMEPICKER_H

@class NSString;
@protocol WKFormControl;

#import <Foundation/Foundation.h>

#import "WKContentView.h"

@interface WKDateTimePicker : NSObject <WKFormControl>

 {
    NSString *_formatString;
    RetainPtr<NSString> _initialValue;
    WKContentView *_view;
    CGPoint _interactionPoint;
    RetainPtr<UIDatePicker> _datePicker;
    BOOL _isDismissingDatePicker;
    RetainPtr<_UIDatePickerOverlayPresentation> _datePickerPresentation;
    RetainPtr<UIToolbar> _accessoryView;
}


@property (readonly, nonatomic) NSString *calendarType;
@property (readonly, nonatomic) CGFloat hour;
@property (readonly, nonatomic) CGFloat minute;


-(BOOL)shouldForceGregorianCalendar;
-(id)_sanitizeInputValueForFormatter:(id)arg0 ;
-(id)controlView;
-(id)initWithView:(id)arg0 datePickerMode:(NSInteger)arg1 ;
-(struct RetainPtr<NSDateFormatter> )dateFormatterForPicker;
-(void)_dateChanged;
-(void)controlBeginEditing;
-(void)controlEndEditing;
-(void)datePickerChanged:(id)arg0 ;
-(void)dealloc;
-(void)done:(id)arg0 ;
-(void)handleDatePickerPresentationDismissal;
-(void)removeDatePickerPresentation;
-(void)reset:(id)arg0 ;
-(void)setDateTimePickerToInitialValue;
-(void)showDateTimePicker;


@end


#endif