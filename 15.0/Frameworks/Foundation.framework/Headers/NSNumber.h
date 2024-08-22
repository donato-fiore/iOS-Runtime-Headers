// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSNUMBER_H
#define NSNUMBER_H



#import "NSValue.h"
#import "NSString.h"

@interface NSNumber : NSValue

@property (readonly) BOOL boolValue;
@property (readonly) char charValue;
@property (readonly) ? decimalValue;
@property (readonly) CGFloat doubleValue;
@property (readonly) float floatValue;
@property (readonly) int intValue;
@property (readonly) NSInteger integerValue;
@property (readonly) NSInteger longLongValue;
@property (readonly) NSInteger longValue;
@property (readonly) short shortValue;
@property (readonly, copy) NSString *stringValue;
@property (readonly) unsigned char unsignedCharValue;
@property (readonly) unsigned int unsignedIntValue;
@property (readonly) NSUInteger unsignedIntegerValue;
@property (readonly) NSUInteger unsignedLongLongValue;
@property (readonly) NSUInteger unsignedLongValue;
@property (readonly) unsigned short unsignedShortValue;


+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
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
+(void)initialize;
-(BOOL)_allowsDirectEncoding;
-(BOOL)_getCString:(char *)arg0 length:(int)arg1 multiplier:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNumber:(id)arg0 ;
-(BOOL)isNSNumber__;
-(Class)classForCoder;
-(NSInteger)_cfNumberType;
-(NSInteger)_reverseCompare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)initWithBool:(BOOL)arg0 ;
-(id)initWithChar:(char)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithFloat:(float)arg0 ;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInteger:(NSInteger)arg0 ;
-(id)initWithLong:(NSInteger)arg0 ;
-(id)initWithLongLong:(NSInteger)arg0 ;
-(id)initWithShort:(short)arg0 ;
-(id)initWithUnsignedChar:(unsigned char)arg0 ;
-(id)initWithUnsignedInt:(unsigned int)arg0 ;
-(id)initWithUnsignedInteger:(NSUInteger)arg0 ;
-(id)initWithUnsignedLong:(NSUInteger)arg0 ;
-(id)initWithUnsignedLongLong:(NSUInteger)arg0 ;
-(id)initWithUnsignedShort:(unsigned short)arg0 ;
-(id)redactedDescription;
-(unsigned char)_getValue:(*void)arg0 forType:(NSInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif