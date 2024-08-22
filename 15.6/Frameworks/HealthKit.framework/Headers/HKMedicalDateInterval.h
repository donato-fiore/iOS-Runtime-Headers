// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKMEDICALDATEINTERVAL_H
#define HKMEDICALDATEINTERVAL_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKMedicalDate.h"

@interface HKMedicalDateInterval : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) HKMedicalDate *endDate; // ivar: _endDate
@property (readonly, copy, nonatomic) HKMedicalDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
+(id)medicalDateIntervalWithEndDate:(id)arg0 ;
+(id)medicalDateIntervalWithStartDate:(id)arg0 ;
+(id)medicalDateIntervalWithStartDate:(id)arg0 endDate:(id)arg1 error:(*id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif