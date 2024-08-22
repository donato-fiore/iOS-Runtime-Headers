// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFNUMBER_H
#define __NSCFNUMBER_H

@class NSCFType;



@interface __NSCFNumber : NSCFType



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)boolValue;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToNumber:(id)arg0 ;
-(BOOL)isNSNumber__;
-(CGFloat)doubleValue;
-(NSInteger)_cfNumberType;
-(NSInteger)_reverseCompare:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSInteger)integerValue;
-(NSInteger)longLongValue;
-(NSInteger)longValue;
-(NSUInteger)_cfTypeID;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(NSUInteger)unsignedIntegerValue;
-(NSUInteger)unsignedLongLongValue;
-(NSUInteger)unsignedLongValue;
-(char *)objCType;
-(char)charValue;
-(float)floatValue;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)retain;
-(id)stringValue;
-(int)intValue;
-(short)shortValue;
-(unsigned char)_getValue:(*void)arg0 forType:(NSInteger)arg1 ;
-(unsigned char)unsignedCharValue;
-(unsigned int)unsignedIntValue;
-(unsigned short)unsignedShortValue;
-(void)getValue:(*void)arg0 ;
-(void)release;


@end


#endif