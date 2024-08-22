// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIDATEPICKERMODE_CUSTOM_H
#define _UIDATEPICKERMODE_CUSTOM_H

@class UIDatePickerMode, NSString, NSArray;



@interface _UIDatePickerMode_Custom : UIDatePickerMode {
    NSString *_originalFormat;
    NSArray *_components;
    NSArray *_sortedComponents;
    NSInteger _displayedUnits;
    NSInteger _desiredUnits;
}




-(CGFloat)widthForCalendarUnit:(NSUInteger)arg0 font:(id)arg1 maxWidth:(CGFloat)arg2 ;
-(NSInteger)componentForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)displayedCalendarUnits;
-(NSInteger)numberOfRowsInComponent:(NSInteger)arg0 ;
-(NSInteger)titleAlignmentForCalendarUnit:(NSUInteger)arg0 ;
-(NSInteger)valueForRow:(NSInteger)arg0 inCalendarUnit:(NSUInteger)arg1 ;
-(NSUInteger)calendarUnitForComponent:(NSInteger)arg0 ;
-(NSUInteger)extractableCalendarUnits;
-(NSUInteger)nextUnitLargerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)nextUnitSmallerThanUnit:(NSUInteger)arg0 ;
-(NSUInteger)numberOfComponents;
-(id)_componentForCalendarUnit:(NSUInteger)arg0 ;
-(id)components;
-(id)dateForRow:(NSInteger)arg0 inCalendarUnit:(NSUInteger)arg1 ;
-(id)dateFormatForCalendarUnit:(NSUInteger)arg0 ;
-(id)initWithFormatString:(id)arg0 datePickerView:(id)arg1 ;
-(void)noteCalendarChanged;
-(void)resetComponentWidths;


@end


#endif