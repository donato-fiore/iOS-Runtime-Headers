// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSDATE_H
#define NSDATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSDate : NSObject <NSCopying, NSSecureCoding>



@property (readonly) CGFloat timeIntervalSinceReferenceDate;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)date;
+(id)dateWithDate:(id)arg0 ;
+(id)dateWithString:(id)arg0 ;
+(id)dateWithTimeInterval:(CGFloat)arg0 sinceDate:(id)arg1 ;
+(id)dateWithTimeIntervalSince1970:(CGFloat)arg0 ;
+(id)dateWithTimeIntervalSinceNow:(CGFloat)arg0 ;
+(id)dateWithTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;
+(id)distantFuture;
+(id)distantPast;
+(id)now;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 toUnitGranularity:(NSUInteger)arg1 ;
-(BOOL)isEqualToDate:(id)arg0 ;
-(BOOL)isInSameDayAsDate:(id)arg0 ;
-(BOOL)isInToday;
-(BOOL)isInTomorrow;
-(BOOL)isInYesterday;
-(BOOL)isNSDate__;
-(CGFloat)timeIntervalSince1970;
-(CGFloat)timeIntervalSinceDate:(id)arg0 ;
-(CGFloat)timeIntervalSinceNow;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 toUnitGranularity:(NSUInteger)arg1 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(id)addTimeInterval:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dateByAddingTimeInterval:(CGFloat)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)earlierDate:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithTimeInterval:(CGFloat)arg0 sinceDate:(id)arg1 ;
-(id)initWithTimeIntervalSince1970:(CGFloat)arg0 ;
-(id)initWithTimeIntervalSinceNow:(CGFloat)arg0 ;
-(id)initWithTimeIntervalSinceReferenceDate:(CGFloat)arg0 ;
-(id)laterDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif