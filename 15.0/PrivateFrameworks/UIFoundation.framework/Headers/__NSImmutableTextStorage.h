// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSIMMUTABLETEXTSTORAGE_H
#define __NSIMMUTABLETEXTSTORAGE_H

@class NSAttributedString;


#import "NSTextStorage.h"
#import "NSLayoutManager.h"
#import "NSTextContainer.h"

@interface __NSImmutableTextStorage : NSTextStorage {
    NSAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
}


@property (readonly) NSLayoutManager *layoutManager;
@property (readonly) NSTextContainer *textContainer;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)initWithAttributedString:(id)arg0 ;
-(id)string;
-(void)dealloc;
-(void)fixAttributesInRange:(struct _NSRange )arg0 ;
-(void)processEditing;
-(void)release;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif