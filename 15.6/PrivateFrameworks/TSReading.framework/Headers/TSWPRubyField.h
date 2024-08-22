// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPRUBYFIELD_H
#define TSWPRUBYFIELD_H

@class NSString;


#import "TSWPSmartField.h"

@interface TSWPRubyField : TSWPSmartField

@property (readonly, nonatomic) NSString *baseText;
@property (readonly, nonatomic) int baseTextScript;
@property (copy, nonatomic) NSString *rubyText; // ivar: _rubyText


-(BOOL)allowsEditing;
-(BOOL)canCopy:(struct _NSRange )arg0 ;
-(id)copyWithContext:(id)arg0 ;
-(id)initWithContext:(id)arg0 rubyText:(id)arg1 ;
-(id)text;
-(int)elementKind;
-(int)styleAttributeArrayKind;
-(unsigned int)attributeArrayKind;
-(void)dealloc;


@end


#endif