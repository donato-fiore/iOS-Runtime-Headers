// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPASSSHARETIMESCHEDULE_H
#define PKPASSSHARETIMESCHEDULE_H

@class NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPassShareTimeSchedule : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSArray *daysOfMonth; // ivar: _daysOfMonth
@property (retain, nonatomic) NSArray *daysOfWeek; // ivar: _daysOfWeek
@property (nonatomic) NSUInteger frequency; // ivar: _frequency
@property (retain, nonatomic) NSArray *hoursOfDay; // ivar: _hoursOfDay
@property (nonatomic) NSUInteger interval; // ivar: _interval


+(BOOL)supportsSecureCoding;
+(id)emptySchedule;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPassShareTimeSchedule:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)intersect:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif