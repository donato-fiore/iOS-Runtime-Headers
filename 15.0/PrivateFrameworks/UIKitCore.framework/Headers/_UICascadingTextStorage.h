// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICASCADINGTEXTSTORAGE_H
#define _UICASCADINGTEXTSTORAGE_H

@class NSConcreteTextStorage, NSMutableDictionary, NSDictionary, UIFont;
@protocol _UITextAttributeDefaults;


#import "UIColor.h"

@interface _UICascadingTextStorage : NSConcreteTextStorage {
    NSMutableDictionary *_defaultAttributes;
}


@property (retain, nonatomic, setter=_setDefaults:) NSObject<_UITextAttributeDefaults> *_defaults; // ivar: _defaults
@property (copy, nonatomic) NSDictionary *defaultAttributes;
@property (nonatomic) NSInteger defaultBaseWritingDirection;
@property (retain, nonatomic) UIFont *font;
@property (nonatomic) NSInteger lineBreakMode;
@property (nonatomic) CGFloat shadowBlur;
@property (retain, nonatomic) UIColor *shadowColor;
@property (nonatomic) CGSize shadowOffset;
@property (nonatomic) NSInteger textAlignment;
@property (retain, nonatomic) UIColor *textColor;


+(id)defaultFont;
-(BOOL)_shouldSetOriginalFontAttribute;
-(NSInteger)_ui_resolvedTextAlignment;
-(id)_shadow;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)attributesAtIndex:(NSUInteger)arg0 longestEffectiveRange:(struct _NSRange *)arg1 inRange:(struct _NSRange )arg2 ;
-(id)init;
-(id)initWithDefaults:(id)arg0 ;
-(void)_restoreOriginalFontAttribute;
-(void)_setShadow:(id)arg0 ;


@end


#endif