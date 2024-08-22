// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFDATEPICKERITEM_H
#define MFDATEPICKERITEM_H

@class NSString, NSDate, NSTimeZone;

#import <Foundation/Foundation.h>

#import "MFDatePickerItemIdentifier.h"

@interface MFDatePickerItem : NSObject

@property (nonatomic) NSInteger datePickerComponentType; // ivar: _datePickerComponentType
@property (readonly, nonatomic) MFDatePickerItemIdentifier *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *selectedCityName; // ivar: _selectedCityName
@property (retain, nonatomic) NSDate *selectedDate; // ivar: _selectedDate
@property (retain, nonatomic) NSDate *selectedTime; // ivar: _selectedTime
@property (retain, nonatomic) NSTimeZone *selectedTimeZone; // ivar: _selectedTimeZone


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithIdentifier:(id)arg0 selectedDate:(id)arg1 selectedTime:(id)arg2 selectedTimeZone:(id)arg3 selectedCityName:(id)arg4 datePickerComponentType:(NSInteger)arg5 ;


@end


#endif