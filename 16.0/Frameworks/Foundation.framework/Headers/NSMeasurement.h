// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSMEASUREMENT_H
#define NSMEASUREMENT_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSUnit.h"

@interface NSMeasurement : NSObject <NSCopying, NSSecureCoding>

 {
    NSUnit *_unit;
    CGFloat _doubleValue;
}


@property (readonly) CGFloat doubleValue;
@property (readonly, copy) NSUnit *unit;


+(BOOL)supportsSecureCoding;
-(BOOL)canBeConvertedToUnit:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_performOperation:(NSInteger)arg0 withMeasurement:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDoubleValue:(CGFloat)arg0 unit:(id)arg1 ;
-(id)measurementByAddingMeasurement:(id)arg0 ;
-(id)measurementByConvertingToUnit:(id)arg0 ;
-(id)measurementBySubtractingMeasurement:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif