// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFBOOLEAN_H
#define HMFBOOLEAN_H

@class NSNumber;



@interface HMFBoolean : NSNumber



+(BOOL)supportsSecureCoding;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)booleanWithBool:(BOOL)arg0 ;
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
-(BOOL)boolValue;
-(Class)classForCoder;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(char *)objCType;
-(char)charValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBool:(BOOL)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;
-(void)getValue:(*void)arg0 size:(NSUInteger)arg1 ;


@end


#endif