// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMTIMEASVALUE_H
#define CMTIMEASVALUE_H

@class NSValue;



@interface CMTimeAsValue : NSValue {
    ? _time;
}




+(BOOL)supportsSecureCoding;
+(id)valueWithCMTime:(struct ? )arg0 ;
-(BOOL)boolValue;
-(BOOL)isEqualToValue:(id)arg0 ;
-(CGFloat)doubleValue;
-(Class)classForCoder;
-(NSInteger)integerValue;
-(NSInteger)longLongValue;
-(NSInteger)longValue;
-(NSUInteger)hash;
-(NSUInteger)unsignedIntegerValue;
-(NSUInteger)unsignedLongLongValue;
-(NSUInteger)unsignedLongValue;
-(char *)objCType;
-(char)charValue;
-(float)floatValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(int)intValue;
-(short)shortValue;
-(struct ? )CMTimeValue;
-(unsigned char)unsignedCharValue;
-(unsigned int)unsignedIntValue;
-(unsigned short)unsignedShortValue;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getValue:(*void)arg0 ;


@end


#endif