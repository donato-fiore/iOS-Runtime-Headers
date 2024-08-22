// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSTEXTATTRIBUTESTORAGE_H
#define _NSTEXTATTRIBUTESTORAGE_H

@class NSTextRunStorage;



@interface _NSTextAttributeStorage : NSTextRunStorage



-(BOOL)_attributesInTextRange:(id)arg0 areEqualToAttributes:(id)arg1 ;
-(BOOL)_setAttributes:(id)arg0 forTextRange:(id)arg1 checkForChange:(BOOL)arg2 ;
-(BOOL)addAttribute:(id)arg0 value:(id)arg1 forTextRange:(id)arg2 ;
-(BOOL)removeAttribute:(id)arg0 forTextRange:(id)arg1 ;
-(BOOL)setAttribute:(id)arg0 value:(id)arg1 forTextRange:(id)arg2 ;
-(BOOL)setAttributes:(id)arg0 forTextRange:(id)arg1 ;
-(void)enumerateAttributesFromLocation:(id)arg0 reverse:(BOOL)arg1 usingBlock:(id)arg2 ;


@end


#endif