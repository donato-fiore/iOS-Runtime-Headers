// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSDATEINTERVAL_H
#define NSDATEINTERVAL_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>



@property (readonly) CGFloat duration;
@property (readonly, copy) NSDate *endDate;
@property (readonly, copy) NSDate *startDate;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)containsDate:(id)arg0 ;
-(BOOL)intersectsDateInterval:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToDateInterval:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartDate:(id)arg0 duration:(CGFloat)arg1 ;
-(id)initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)intersectionWithDateInterval:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif