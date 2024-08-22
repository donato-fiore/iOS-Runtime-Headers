// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCSOPENHOURS_H
#define BCSOPENHOURS_H

@class NSDictionary, NSTimeZone;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface BCSOpenHours : NSObject <NSCopying, NSSecureCoding>

 {
    NSDictionary *_timeRanges;
    NSTimeZone *_localTimeZone;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isOpenAtDate:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateWhenOpenNextAfterDate:(id)arg0 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHoursMessages:(id)arg0 timeZone:(id)arg1 ;
-(id)initWithHoursPeriodMessage:(id)arg0 timeZone:(id)arg1 ;
-(id)initWithJSONObj:(id)arg0 timeZone:(id)arg1 ;
-(id)initWithOpenHours:(id)arg0 timeZone:(id)arg1 ;
-(id)initWithTimeRanges:(id)arg0 timeZone:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif