// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSMUTABLEATTRIBUTEDSTRING_H
#define NSMUTABLEATTRIBUTEDSTRING_H



#import "NSAttributedString.h"

@interface NSMutableAttributedString : NSAttributedString



+(id)allocWithZone:(struct _NSZone *)arg0 ;
-(Class)_intentResolver;
-(Class)classForCoder;
-(id)mutableString;
-(void)_addAttributesIfNotPresentMergingInlinePresentationIntents:(id)arg0 toRange:(struct _NSRange )arg1 ;
-(void)_inflectWithReplacements:(id)arg0 ;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)addAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)addAttributesWeakly:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)appendAttributedString:(id)arg0 ;
-(void)appendLocalizedFormat:(id)arg0 ;
-(void)beginEditing;
-(void)deleteCharactersInRange:(struct _NSRange )arg0 ;
-(void)endEditing;
-(void)insertAttributedString:(id)arg0 atIndex:(NSUInteger)arg1 ;
-(void)removeAttribute:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributedString:(id)arg0 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;


@end


#endif