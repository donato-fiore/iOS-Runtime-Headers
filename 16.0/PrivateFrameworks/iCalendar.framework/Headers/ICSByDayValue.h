// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICSBYDAYVALUE_H
#define ICSBYDAYVALUE_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICSByDayValue : NSObject <NSSecureCoding>

 {
    NSNumber *_number;
}


@property (retain, nonatomic) NSNumber *number;
@property (nonatomic) NSInteger weekday; // ivar: _weekday


+(BOOL)supportsSecureCoding;
+(NSInteger)weekdayFromICSString:(id)arg0 ;
+(id)byDayValueFromICSString:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithWeekday:(NSInteger)arg0 ;
-(id)initWithWeekday:(NSInteger)arg0 number:(id)arg1 ;
-(void)_ICSStringWithOptions:(NSUInteger)arg0 appendingToString:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif