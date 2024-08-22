// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKQUANTITYDATUM_H
#define HKQUANTITYDATUM_H

@class NSUUID, NSDateInterval, NSData;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKQuantityDatum : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) HKQuantity *quantity; // ivar: _quantity
@property (readonly, copy, nonatomic) NSData *resumeContext; // ivar: _resumeContext
@property (copy, nonatomic) id *saveCompletion; // ivar: _saveCompletion


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateInterval:(id)arg1 quantity:(id)arg2 resumeContext:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif