// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKWORKOUTBUILDERQUANTITY_H
#define HKWORKOUTBUILDERQUANTITY_H

@class NSDateInterval;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKWorkoutBuilderQuantity : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) HKQuantity *quantity; // ivar: _quantity


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuantity:(id)arg0 dateInterval:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif