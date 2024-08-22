// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKVALUEHISTOGRAM_H
#define HKVALUEHISTOGRAM_H

@class NSDateInterval, NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKValueHistogram : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, copy, nonatomic) NSArray *segments; // ivar: _segments


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)fractionOfValuesInSegmentAtIndex:(NSInteger)arg0 ;
-(NSInteger)totalSampleCount;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSegments:(id)arg0 dateInterval:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif