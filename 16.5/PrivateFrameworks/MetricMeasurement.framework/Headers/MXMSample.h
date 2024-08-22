// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MXMSAMPLE_H
#define MXMSAMPLE_H

@class NSUnit, NSData, NSMeasurement, NSNumber, NSSet, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "MXMSampleTag.h"

@interface MXMSample : NSObject <NSSecureCoding, NSCopying>

 {
    NSUnit *_unit;
    NSData *_underlyingValue;
    NSUInteger _underlyingValueLength;
}


@property (readonly, copy, nonatomic) NSMeasurement *asMeasurementValue;
@property (readonly, copy, nonatomic) NSNumber *asNumberValue;
@property (readonly, copy, nonatomic) NSSet *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSData *date; // ivar: _date
@property (readonly, nonatomic) CGFloat floatValue;
@property (readonly, nonatomic) NSInteger integerValue;
@property (readonly, nonatomic) NSUInteger length; // ivar: _length
@property (readonly, copy, nonatomic) NSString *shortDesc;
@property (readonly, nonatomic) MXMSampleTag *tag; // ivar: _tag
@property (readonly, nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (readonly, copy, nonatomic) NSUnit *unit;
@property (readonly, nonatomic) NSUInteger unsignedValue;
@property (readonly, nonatomic) NSUInteger valueType; // ivar: _valueType


+(BOOL)supportsSecureCoding;
-(id)attributeWithName:(id)arg0 ;
-(id)convertToUnit:(id)arg0 ;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTag:(id)arg0 attributes:(id)arg1 doubleValue:(CGFloat)arg2 ;
-(id)initWithTag:(id)arg0 attributes:(id)arg1 doubleValue:(CGFloat)arg2 unit:(id)arg3 ;
-(id)initWithTag:(id)arg0 attributes:(id)arg1 doubleValue:(CGFloat)arg2 unit:(id)arg3 timestamp:(NSUInteger)arg4 ;
-(id)initWithTag:(id)arg0 attributes:(id)arg1 pixelBufferValue:(struct __CVBuffer *)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif