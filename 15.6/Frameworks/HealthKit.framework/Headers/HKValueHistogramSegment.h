// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKVALUEHISTOGRAMSEGMENT_H
#define HKVALUEHISTOGRAMSEGMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKQuantityRange.h"

@interface HKValueHistogramSegment : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger count; // ivar: _count
@property (readonly, copy, nonatomic) HKQuantityRange *quantityRange; // ivar: _quantityRange


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuantityRange:(id)arg0 count:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif