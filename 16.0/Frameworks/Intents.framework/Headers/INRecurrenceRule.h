// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INRECURRENCERULE_H
#define INRECURRENCERULE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface INRecurrenceRule : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger frequency; // ivar: _frequency
@property (readonly, nonatomic) NSUInteger interval; // ivar: _interval
@property (readonly, nonatomic) NSUInteger weeklyRecurrenceDays; // ivar: _weeklyRecurrenceDays


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithInterval:(NSUInteger)arg0 frequency:(NSInteger)arg1 ;
-(id)initWithInterval:(NSUInteger)arg0 frequency:(NSInteger)arg1 weeklyRecurrenceDays:(NSUInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif