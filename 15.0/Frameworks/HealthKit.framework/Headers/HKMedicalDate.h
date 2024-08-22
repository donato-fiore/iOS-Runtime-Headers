// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKMEDICALDATE_H
#define HKMEDICALDATE_H

@class NSDate, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKMedicalDate : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDate *dateForUTC;
@property (readonly, nonatomic) NSInteger form; // ivar: _form
@property (readonly, copy, nonatomic) NSString *originalTimeZoneString; // ivar: _originalTimeZoneString
@property (readonly, copy, nonatomic) NSDate *underlyingDate; // ivar: _underlyingDate


+(BOOL)_validForm:(NSInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_calendarUnitForForm:(NSInteger)arg0 ;
+(id)_adjustDate:(id)arg0 calendar:(id)arg1 form:(NSInteger)arg2 ;
+(id)_descriptionForForm:(NSInteger)arg0 ;
+(id)_medicalDateWithForm:(NSInteger)arg0 underlyingDate:(id)arg1 originalTimeZoneString:(id)arg2 ;
+(id)medicalDateFromComponents:(id)arg0 originalTimeZoneString:(id)arg1 form:(NSInteger)arg2 error:(*id)arg3 ;
+(id)medicalDateFromDate:(id)arg0 originalTimeZone:(id)arg1 ;
+(id)medicalDateWithYear:(NSInteger)arg0 error:(*id)arg1 ;
+(id)medicalDateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 error:(*id)arg3 ;
+(id)medicalDateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 hour:(NSInteger)arg3 minute:(NSInteger)arg4 second:(NSInteger)arg5 nanosecond:(NSInteger)arg6 originalTimeZoneString:(id)arg7 error:(*id)arg8 ;
+(id)medicalDateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 day:(NSInteger)arg2 hour:(NSInteger)arg3 minute:(NSInteger)arg4 second:(NSInteger)arg5 originalTimeZoneString:(id)arg6 error:(*id)arg7 ;
+(id)medicalDateWithYear:(NSInteger)arg0 month:(NSInteger)arg1 error:(*id)arg2 ;
+(id)referenceCalendar;
+(id)referenceCalendarWithLocalTimezone;
-(BOOL)isCompatibleWithMedicalDateForm:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithForm:(NSInteger)arg0 underlyingDate:(id)arg1 originalTimeZoneString:(id)arg2 ;
-(id)adjustedDateForCalendar:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif