// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSCONSTANTINTEGERNUMBER_H
#define NSCONSTANTINTEGERNUMBER_H



#import "NSNumber.h"

@interface NSConstantIntegerNumber : NSNumber {
    char * _encoding;
    NSInteger _value;
}




+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)new;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)boolValue;
-(CGFloat)doubleValue;
-(NSInteger)integerValue;
-(NSInteger)longLongValue;
-(NSInteger)longValue;
-(NSUInteger)retainCount;
-(NSUInteger)unsignedIntegerValue;
-(NSUInteger)unsignedLongLongValue;
-(NSUInteger)unsignedLongValue;
-(char *)objCType;
-(char)charValue;
-(float)floatValue;
-(id)autorelease;
-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)retain;
-(int)intValue;
-(short)shortValue;
-(struct ? )decimalValue;
-(unsigned char)unsignedCharValue;
-(unsigned int)unsignedIntValue;
-(unsigned short)unsignedShortValue;
-(void)dealloc;
-(void)getValue:(*void)arg0 ;
-(void)getValue:(*void)arg0 size:(NSUInteger)arg1 ;
-(void)release;


@end


#endif