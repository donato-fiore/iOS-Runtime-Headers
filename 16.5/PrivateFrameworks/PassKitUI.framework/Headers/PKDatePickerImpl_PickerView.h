// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDATEPICKERIMPL_PICKERVIEW_H
#define PKDATEPICKERIMPL_PICKERVIEW_H

@class UIPickerView, NSDateFormatter, NSCalendar, NSLocale, NSDate, NSString;
@protocol PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate;



@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate>

 {
    NSUInteger _calendarUnit;
    _NSRange _possibleRange;
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
    NSLocale *_locale;
    id *_changeTarget;
    SEL _changeAction;
}


@property (retain, nonatomic) NSDate *date;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(CGFloat)pickerView:(id)arg0 widthForComponent:(NSInteger)arg1 ;
-(NSInteger)numberOfComponentsInPickerView:(id)arg0 ;
-(NSInteger)pickerView:(id)arg0 numberOfRowsInComponent:(NSInteger)arg1 ;
-(NSUInteger)_defaultIndex;
-(NSUInteger)_numberOfItems;
-(id)_dateComponentsForCalendarUnit:(NSUInteger)arg0 value:(NSInteger)arg1 ;
-(id)_dateForIndex:(NSUInteger)arg0 ;
-(id)_dateFormatForCalendarUnit:(NSUInteger)arg0 ;
-(id)_stringForIndex:(NSUInteger)arg0 ;
-(id)initShowingDay:(BOOL)arg0 month:(BOOL)arg1 year:(BOOL)arg2 useDarkAppearance:(BOOL)arg3 locale:(id)arg4 calendar:(id)arg5 ;
-(id)pickerView:(id)arg0 titleForRow:(NSInteger)arg1 forComponent:(NSInteger)arg2 ;
-(void)dealloc;
-(void)pickerView:(id)arg0 didSelectRow:(NSInteger)arg1 inComponent:(NSInteger)arg2 ;
-(void)prepareToDie;


@end


#endif