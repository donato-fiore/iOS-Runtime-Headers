// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFCHARACTERSET_H
#define __NSCFCHARACTERSET_H

@class NSCFType;
@protocol NSSecureCoding;



@interface __NSCFCharacterSet : NSCFType <NSSecureCoding>





+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(BOOL)supportsSecureCoding;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)characterIsMember:(unsigned short)arg0 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSupersetOfSet:(id)arg0 ;
-(BOOL)longCharacterIsMember:(unsigned int)arg0 ;
-(Class)classForCoder;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)bitmapRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)invertedSet;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(void)addCharactersInRange:(struct _NSRange )arg0 ;
-(void)addCharactersInString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)formIntersectionWithCharacterSet:(id)arg0 ;
-(void)formUnionWithCharacterSet:(id)arg0 ;
-(void)invert;
-(void)makeCharacterSetCompact;
-(void)makeCharacterSetFast;
-(void)release;
-(void)removeCharactersInRange:(struct _NSRange )arg0 ;
-(void)removeCharactersInString:(id)arg0 ;


@end


#endif