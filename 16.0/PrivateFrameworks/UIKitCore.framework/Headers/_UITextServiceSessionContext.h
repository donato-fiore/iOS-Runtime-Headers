// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITEXTSERVICESESSIONCONTEXT_H
#define _UITEXTSERVICESESSIONCONTEXT_H

@class RVItem, UIResponder<UITextInput>, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIView.h"

@interface _UITextServiceSessionContext : NSObject <NSSecureCoding>



@property (readonly, nonatomic) CGRect presentationRect; // ivar: _presentationRect
@property (readonly, copy, nonatomic) RVItem *rvItemWithContext; // ivar: _rvItemWithContext
@property (readonly, nonatomic) _NSRange selectedRange; // ivar: _selectedRange
@property (readonly, nonatomic) UIResponder<UITextInput> *textInput; // ivar: _textInput
@property (readonly, copy, nonatomic) NSString *textWithContext; // ivar: _textWithContext
@property (retain, nonatomic) UIView *view; // ivar: _view


+(BOOL)supportsSecureCoding;
+(id)selectedTextRangeForTextInput:(id)arg0 ;
+(id)sessionContextForType:(NSInteger)arg0 withTextInput:(id)arg1 ;
+(id)sessionContextWithText:(id)arg0 withRect:(struct CGRect )arg1 withRange:(struct _NSRange )arg2 withView:(id)arg3 ;
+(id)sessionContextWithText:(id)arg0 withRect:(struct CGRect )arg1 withView:(id)arg2 ;
+(struct CGRect )selectionBoundingBoxForTextInput:(id)arg0 ;
-(BOOL)_typeRequiresContext:(NSInteger)arg0 ;
-(id)initForType:(NSInteger)arg0 withText:(id)arg1 withTextInput:(id)arg2 withView:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_gatherAdditionalContext;
-(void)convertRectToView:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif