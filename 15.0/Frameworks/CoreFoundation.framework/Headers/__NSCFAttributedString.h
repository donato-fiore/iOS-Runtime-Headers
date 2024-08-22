// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSCFATTRIBUTEDSTRING_H
#define __NSCFATTRIBUTEDSTRING_H

@class NSCFType;



@interface __NSCFAttributedString : NSCFType



+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAttributedString:(id)arg0 ;
-(Class)classForCoder;
-(NSUInteger)length;
-(NSUInteger)retainCount;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributedSubstringFromRange:(struct _NSRange )arg0 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)retain;
-(id)string;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)addAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)appendAttributedString:(id)arg0 ;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)insertAttributedString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)release;
-(void)removeAttribute:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributedString:(id)arg0 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif