// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHEARTRATESUMMARYREADING_H
#define HKHEARTRATESUMMARYREADING_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKHeartRateSummaryReading : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSInteger context; // ivar: _context
@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) HKQuantity *quantity; // ivar: _quantity


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDate:(id)arg0 quantity:(id)arg1 ;
-(id)initWithDate:(id)arg0 quantity:(id)arg1 context:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif