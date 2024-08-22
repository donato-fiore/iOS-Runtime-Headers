// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSDECIMALNUMBERPLACEHOLDER_H
#define NSDECIMALNUMBERPLACEHOLDER_H



#import "NSDecimalNumber.h"

@interface NSDecimalNumberPlaceholder : NSDecimalNumber



+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(Class)classForCoder;
-(NSUInteger)retainCount;
-(id)autorelease;
-(id)init;
-(id)initWithBool:(BOOL)arg0 ;
-(id)initWithChar:(char)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDecimal:(struct ? )arg0 ;
-(id)initWithDouble:(CGFloat)arg0 ;
-(id)initWithFloat:(float)arg0 ;
-(id)initWithInt:(int)arg0 ;
-(id)initWithInteger:(NSInteger)arg0 ;
-(id)initWithLong:(NSInteger)arg0 ;
-(id)initWithLongLong:(NSInteger)arg0 ;
-(id)initWithMantissa:(NSUInteger)arg0 exponent:(short)arg1 isNegative:(BOOL)arg2 ;
-(id)initWithShort:(short)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 locale:(id)arg1 ;
-(id)initWithUnsignedChar:(unsigned char)arg0 ;
-(id)initWithUnsignedInt:(unsigned int)arg0 ;
-(id)initWithUnsignedInteger:(NSUInteger)arg0 ;
-(id)initWithUnsignedLong:(NSUInteger)arg0 ;
-(id)initWithUnsignedLongLong:(NSUInteger)arg0 ;
-(id)initWithUnsignedShort:(unsigned short)arg0 ;
-(id)retain;
-(void)release;


@end


#endif