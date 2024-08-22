// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMRECURRENCEEND_H
#define REMRECURRENCEEND_H

@class NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface REMRecurrenceEnd : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUInteger occurrenceCount; // ivar: _occurrenceCount


+(BOOL)supportsSecureCoding;
+(id)recurrenceEndWithEndDate:(id)arg0 ;
+(id)recurrenceEndWithOccurrenceCount:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)usesEndDate;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEndDate:(id)arg0 ;
-(id)initWithOccurrenceCount:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif