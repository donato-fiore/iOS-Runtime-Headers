// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATEPICKERIMPL_DATEOFBIRTHDATEPICKER_H
#define PKDATEPICKERIMPL_DATEOFBIRTHDATEPICKER_H

@class DatePicker, NSDate, NSString;
@protocol PKDatePickerInternalImplementationProtocol;



@interface PKDatePickerImpl_DateOfBirthDatePicker : DatePicker <PKDatePickerInternalImplementationProtocol>



@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initShowingDay:(BOOL)arg0 month:(BOOL)arg1 year:(BOOL)arg2 useDarkAppearance:(BOOL)arg3 locale:(id)arg4 calendar:(id)arg5 ;


@end


#endif