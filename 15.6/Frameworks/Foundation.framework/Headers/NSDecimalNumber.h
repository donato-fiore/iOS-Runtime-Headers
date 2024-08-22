// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSDECIMALNUMBER_H
#define NSDECIMALNUMBER_H



#import "NSNumber.h"

@interface NSDecimalNumber : NSNumber {
    BOOL _exponent;
    BOOL _length;
    BOOL _isNegative;
    BOOL _isCompact;
    BOOL _reserved;
    BOOL _hasExternalRefCount;
    BOOL _refs;
    unsigned short _mantissa;
}


@property (readonly) ? decimalValue;
@property (readonly) CGFloat doubleValue;
@property (readonly) char * objCType;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)decimalNumberWithDecimal:(struct ? )arg0 ;
+(id)decimalNumberWithMantissa:(NSUInteger)arg0 exponent:(short)arg1 isNegative:(BOOL)arg2 ;
+(id)decimalNumberWithString:(id)arg0 ;
+(id)decimalNumberWithString:(id)arg0 locale:(id)arg1 ;
+(id)defaultBehavior;
+(id)maximumDecimalNumber;
+(id)minimumDecimalNumber;
+(id)notANumber;
+(id)numberWithBool:(BOOL)arg0 ;
+(id)numberWithChar:(char)arg0 ;
+(id)numberWithDouble:(CGFloat)arg0 ;
+(id)numberWithFloat:(float)arg0 ;
+(id)numberWithInt:(int)arg0 ;
+(id)numberWithInteger:(NSInteger)arg0 ;
+(id)numberWithLong:(NSInteger)arg0 ;
+(id)numberWithLongLong:(NSInteger)arg0 ;
+(id)numberWithShort:(short)arg0 ;
+(id)numberWithUnsignedChar:(unsigned char)arg0 ;
+(id)numberWithUnsignedInt:(unsigned int)arg0 ;
+(id)numberWithUnsignedInteger:(NSUInteger)arg0 ;
+(id)numberWithUnsignedLong:(NSUInteger)arg0 ;
+(id)numberWithUnsignedLongLong:(NSUInteger)arg0 ;
+(id)numberWithUnsignedShort:(unsigned short)arg0 ;
+(id)one;
+(id)zero;
+(void)initialize;
+(void)setDefaultBehavior:(id)arg0 ;
-(BOOL)_allowsDirectEncoding;
-(BOOL)_getCString:(char *)arg0 length:(int)arg1 multiplier:(CGFloat)arg2 ;
-(BOOL)boolValue;
-(BOOL)isEqual:(id)arg0 ;
-(Class)classForCoder;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)longLongValue;
-(NSInteger)longValue;
-(NSUInteger)unsignedLongLongValue;
-(NSUInteger)unsignedLongValue;
-(char)charValue;
-(float)floatValue;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)decimalNumberByAdding:(id)arg0 ;
-(id)decimalNumberByAdding:(id)arg0 withBehavior:(id)arg1 ;
-(id)decimalNumberByDividingBy:(id)arg0 ;
-(id)decimalNumberByDividingBy:(id)arg0 withBehavior:(id)arg1 ;
-(id)decimalNumberByMultiplyingBy:(id)arg0 ;
-(id)decimalNumberByMultiplyingBy:(id)arg0 withBehavior:(id)arg1 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg0 ;
-(id)decimalNumberByMultiplyingByPowerOf10:(short)arg0 withBehavior:(id)arg1 ;
-(id)decimalNumberByRaisingToPower:(NSUInteger)arg0 ;
-(id)decimalNumberByRaisingToPower:(NSUInteger)arg0 withBehavior:(id)arg1 ;
-(id)decimalNumberByRoundingAccordingToBehavior:(id)arg0 ;
-(id)decimalNumberBySubstracting:(id)arg0 ;
-(id)decimalNumberBySubstracting:(id)arg0 withBehavior:(id)arg1 ;
-(id)decimalNumberBySubtracting:(id)arg0 ;
-(id)decimalNumberBySubtracting:(id)arg0 withBehavior:(id)arg1 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDecimal:(struct ? )arg0 ;
-(id)initWithMantissa:(NSUInteger)arg0 exponent:(short)arg1 isNegative:(BOOL)arg2 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 locale:(id)arg1 ;
-(int)intValue;
-(short)shortValue;
-(unsigned char)unsignedCharValue;
-(unsigned int)unsignedIntValue;
-(unsigned short)unsignedShortValue;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;


@end


#endif