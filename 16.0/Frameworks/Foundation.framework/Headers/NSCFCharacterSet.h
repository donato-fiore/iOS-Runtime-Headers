// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSCFCHARACTERSET_H
#define NSCFCHARACTERSET_H



#import "NSMutableCharacterSet.h"

@interface NSCFCharacterSet : NSMutableCharacterSet



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)allowsWeakReference;
-(BOOL)characterIsMember:(unsigned short)arg0 ;
-(BOOL)hasMemberInPlane:(unsigned char)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSupersetOfSet:(id)arg0 ;
-(BOOL)longCharacterIsMember:(unsigned int)arg0 ;
-(BOOL)retainWeakReference;
-(Class)classForArchiver;
-(Class)classForKeyedArchiver;
-(NSUInteger)hash;
-(NSUInteger)retainCount;
-(id)bitmapRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
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