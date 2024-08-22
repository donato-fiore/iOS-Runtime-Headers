// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PFCACHEDNUMBER_H
#define _PFCACHEDNUMBER_H

@class NSNumber;



@interface _PFCachedNumber : NSNumber



+(id)alloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)copyWithZone:(struct _NSZone *)arg0 ;
+(id)new;
+(id)value:(*void)arg0 withObjCType:(char *)arg1 ;
+(id)valueWithBytes:(*void)arg0 objCType:(char *)arg1 ;
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
-(id)description;
-(id)descriptionWithLocale:(id)arg0 ;
-(id)init;
-(id)initWithBytes:(*void)arg0 objCType:(char *)arg1 ;
-(id)retain;
-(id)stringValue;
-(int)intValue;
-(short)shortValue;
-(unsigned char)unsignedCharValue;
-(unsigned int)unsignedIntValue;
-(unsigned short)unsignedShortValue;
-(void)dealloc;
-(void)getValue:(*void)arg0 ;
-(void)release;


@end


#endif