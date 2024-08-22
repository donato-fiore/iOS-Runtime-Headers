// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLFEATUREVALUE_H
#define MLFEATUREVALUE_H

@class NSDictionary, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MLMultiArray.h"
#import "MLSequence.h"

@interface MLFeatureValue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *dictionaryValue;
@property (readonly, nonatomic) CGFloat doubleValue;
@property (readonly, nonatomic) *__CVBuffer imageBufferValue;
@property (readonly, nonatomic) NSInteger int64Value;
@property (readonly, nonatomic) MLMultiArray *multiArrayValue;
@property (retain, nonatomic) NSObject *objectValue; // ivar: _objectValue
@property (readonly, nonatomic) MLSequence *sequenceValue;
@property (readonly, copy, nonatomic) NSString *stringValue;
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic, getter=isUndefined) BOOL undefined; // ivar: _undefined
@property (retain) id *value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(NSUInteger)visionCropAndScaleOptionFromOptions:(id)arg0 ;
+(id)featureValueOfType:(NSInteger)arg0 fromObject:(id)arg1 error:(*id)arg2 ;
+(id)featureValueWithCGImage:(struct CGImage *)arg0 constraint:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)featureValueWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 constraint:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)featureValueWithCGImage:(struct CGImage *)arg0 orientation:(unsigned int)arg1 pixelsWide:(NSInteger)arg2 pixelsHigh:(NSInteger)arg3 pixelFormatType:(unsigned int)arg4 options:(id)arg5 error:(*id)arg6 ;
+(id)featureValueWithCGImage:(struct CGImage *)arg0 pixelsWide:(NSInteger)arg1 pixelsHigh:(NSInteger)arg2 pixelFormatType:(unsigned int)arg3 options:(id)arg4 error:(*id)arg5 ;
+(id)featureValueWithDictionary:(id)arg0 error:(*id)arg1 ;
+(id)featureValueWithDouble:(CGFloat)arg0 ;
+(id)featureValueWithImageAtURL:(id)arg0 constraint:(id)arg1 options:(id)arg2 error:(*id)arg3 ;
+(id)featureValueWithImageAtURL:(id)arg0 orientation:(unsigned int)arg1 constraint:(id)arg2 options:(id)arg3 error:(*id)arg4 ;
+(id)featureValueWithImageAtURL:(id)arg0 orientation:(unsigned int)arg1 pixelsWide:(NSInteger)arg2 pixelsHigh:(NSInteger)arg3 pixelFormatType:(unsigned int)arg4 options:(id)arg5 error:(*id)arg6 ;
+(id)featureValueWithImageAtURL:(id)arg0 pixelsWide:(NSInteger)arg1 pixelsHigh:(NSInteger)arg2 pixelFormatType:(unsigned int)arg3 options:(id)arg4 error:(*id)arg5 ;
+(id)featureValueWithInt64:(NSInteger)arg0 ;
+(id)featureValueWithInt64KeyDictionary:(id)arg0 ;
+(id)featureValueWithMultiArray:(id)arg0 ;
+(id)featureValueWithPixelBuffer:(struct __CVBuffer *)arg0 ;
+(id)featureValueWithSequence:(id)arg0 ;
+(id)featureValueWithString:(id)arg0 ;
+(id)featureValueWithStringKeyDictionary:(id)arg0 ;
+(id)undefinedFeatureValueWithType:(NSInteger)arg0 ;
+(struct CGRect )cropRectFromOptions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFeatureValue:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)getFeatureSize:(*id)arg0 ;
-(id)getFeatureSize:(*id)arg0 ndArrayMode:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUndefinedValueAndType:(NSInteger)arg0 ;
-(id)initWithValue:(id)arg0 type:(NSInteger)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif