// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDATEPICKERIMPL_CCEXPIRYPICKERVIEW_H
#define PKDATEPICKERIMPL_CCEXPIRYPICKERVIEW_H

@class UIPickerView, NSNumber, NSCalendar, NSLocale, UIFont, NSDate, NSString;
@protocol PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate;



@interface PKDatePickerImpl_CCExpiryPickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    NSUInteger _calendarUnit;
    _NSRange _possibleRange;
    CGFloat _width;
    NSDateFormatter" _dateFormatter;
    NSNumber *_useDoubleMonthStyle;
    NSCalendar *_calendar;
    NSLocale *_locale;
    UIFont *_font;
    id *_changeTarget;
    SEL _changeAction;
}


@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_useDoubleMonthStyle;
-(CGFloat)_calculateWidthForComponent:(NSInteger)arg0 usingFont:(id)arg1 ;
-(CGFloat)_widthForComponent:(NSInteger)arg0 ;
-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(NSInteger)_numberOfItemsForComponent:(NSInteger)arg0 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSUInteger)_defaultIndexForComponent:(NSInteger)arg0 ;
-(id)_dateForComponent:(NSInteger)arg0 index:(NSUInteger)arg1 ;
-(id)_dateFormatForCalendarUnit:(NSUInteger)arg0 ;
-(id)_dateWithCalendarUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ;
-(id)_stringForComponent:(NSInteger)arg0 index:(NSUInteger)arg1 ;
-(id)initShowingDay:(BOOL)arg0 month:(BOOL)arg1 year:(BOOL)arg2 useDarkAppearance:(BOOL)arg3 locale:(id)arg4 calendar:(id)arg5 ;
-(id)pickerView:(id)arg0 viewForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 reusingView:(id)arg3 ;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)prepareToDie;


@end


#endif