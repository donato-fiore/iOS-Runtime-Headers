// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCONCRETETEXTSTORAGE_H
#define NSCONCRETETEXTSTORAGE_H



#import "NSTextStorage.h"
#import "NSConcreteNotifyingMutableAttributedString.h"

@interface NSConcreteTextStorage : NSTextStorage {
    NSConcreteNotifyingMutableAttributedString *_contents;
    _opaque_pthread_rwlock_t _lock;
    ? _pFlags;
}




+(NSUInteger)_writerCountTSDKey;
-(BOOL)_attributeFixingInProgress;
-(BOOL)_forceFixAttributes;
-(BOOL)_lockForReading;
-(BOOL)_lockForWritingWithExceptionHandler:(BOOL)arg0 ;
-(BOOL)_mayRequireIntentResolution;
-(BOOL)fixesAttributesLazily;
-(Class)classForCoder;
-(NSUInteger)length;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)init;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 ;
-(id)string;
-(void)_initLocks;
-(void)_markIntentsResolved;
-(void)_setAttributeFixingInProgress:(BOOL)arg0 ;
-(void)_setForceFixAttributes:(BOOL)arg0 ;
-(void)_unlock;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)addAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)dealloc;
-(void)removeAttribute:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif