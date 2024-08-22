// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKVALUEHISTOGRAMCOLLECTION_H
#define HKVALUEHISTOGRAMCOLLECTION_H

@class NSDate, NSDateComponents, NSArray, NSDictionary;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_HKDateIntervalCollection.h"

@interface HKValueHistogramCollection : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDate *anchorDate; // ivar: _anchorDate
@property (readonly, nonatomic) _HKDateIntervalCollection *intervalCollection; // ivar: _intervalCollection
@property (readonly, copy, nonatomic) NSDateComponents *intervalComponents; // ivar: _intervalComponents
@property (readonly, copy, nonatomic) NSArray *quantityRanges; // ivar: _quantityRanges
@property (readonly, copy, nonatomic) NSArray *valueHistograms;
@property (readonly, nonatomic) NSDictionary *valueHistogramsByDateIntervalIndex; // ivar: _valueHistogramsByDateIntervalIndex


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithQuantityRanges:(id)arg0 valueHistogramsByDateIntervalIndex:(id)arg1 anchorDate:(id)arg2 intervalComponents:(id)arg3 ;
-(id)valueHistogramForDate:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif