// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKRANGE_H
#define SKRANGE_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SKRange : NSObject <NSSecureCoding, NSCopying>



@property CGFloat lowerLimit; // ivar: _lowerLimit
@property CGFloat upperLimit; // ivar: _upperLimit


+(BOOL)supportsSecureCoding;
+(id)rangeWithConstantValue:(CGFloat)arg0 ;
+(id)rangeWithLowerLimit:(CGFloat)arg0 ;
+(id)rangeWithLowerLimit:(CGFloat)arg0 upperLimit:(CGFloat)arg1 ;
+(id)rangeWithNoLimits;
+(id)rangeWithUpperLimit:(CGFloat)arg0 ;
+(id)rangeWithValue:(CGFloat)arg0 variance:(CGFloat)arg1 ;
-(BOOL)isEqualToRange:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithLowerLimit:(CGFloat)arg0 upperLimit:(CGFloat)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif