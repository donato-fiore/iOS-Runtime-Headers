// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIOBSCURABLETEXTCONTENTSTORAGE_H
#define _UIOBSCURABLETEXTCONTENTSTORAGE_H

@class NSTextContentStorage, NSAttributedString;


#import "_UICascadingTextStorage.h"

@interface _UIObscurableTextContentStorage : NSTextContentStorage {
    _UICascadingTextStorage *_cascadingTextStorage;
    NSAttributedString *_obscuredAttributedString;
}


@property (nonatomic, getter=isObscured) BOOL obscured; // ivar: _obscured
@property (readonly, nonatomic) NSAttributedString *obscuredAttributedString;
@property (nonatomic) _NSRange unobscuredRange; // ivar: _unobscuredRange


-(id)attributedString;
-(id)initWithTextStorage:(id)arg0 ;
-(void)_invalidateObscuredAttributedString;
-(void)_validateUnobscuredRange;
-(void)processEditingForTextStorage:(id)arg0 edited:(NSUInteger)arg1 range:(struct _NSRange )arg2 changeInLength:(NSInteger)arg3 invalidatedRange:(struct _NSRange )arg4 ;
-(void)setTextStorage:(id)arg0 ;


@end


#endif