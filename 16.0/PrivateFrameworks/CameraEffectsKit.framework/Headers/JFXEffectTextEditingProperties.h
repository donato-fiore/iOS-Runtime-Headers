// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JFXEFFECTTEXTEDITINGPROPERTIES_H
#define JFXEFFECTTEXTEDITINGPROPERTIES_H

@class NSAttributedString, PVMatrix44Double, NSNumber, NSValue, UIColor, NSDictionary;

#import <Foundation/Foundation.h>

#import "JFXTextEffectFrame.h"

@interface JFXEffectTextEditingProperties : NSObject

@property (copy, nonatomic) NSAttributedString *attributedText; // ivar: _attributedText
@property (nonatomic) CGFloat baselineYOffset; // ivar: _baselineYOffset
@property (readonly, nonatomic) CGRect bounds;
@property (nonatomic) CGRect cachedBounds; // ivar: _cachedBounds
@property (nonatomic) CGRect cachedFrame; // ivar: _cachedFrame
@property (retain, nonatomic) PVMatrix44Double *cachedPartialTransformNoScaleNoTranslation; // ivar: _cachedPartialTransformNoScaleNoTranslation
@property (retain, nonatomic) NSNumber *cachedRotation; // ivar: _cachedRotation
@property (retain, nonatomic) NSValue *cachedScale; // ivar: _cachedScale
@property (copy, nonatomic) UIColor *customTextColor; // ivar: _customTextColor
@property (copy, nonatomic) UIColor *customTextEditTintColor; // ivar: _customTextEditTintColor
@property (copy, nonatomic) UIColor *defaultTextColor; // ivar: _defaultTextColor
@property (copy, nonatomic) NSDictionary *defaultTypingAttributes; // ivar: _defaultTypingAttributes
@property (retain, nonatomic) JFXTextEffectFrame *effectFrame; // ivar: _effectFrame
@property (readonly, nonatomic) CGRect frame;
@property (nonatomic) BOOL isAllCaps; // ivar: _isAllCaps
@property (nonatomic) BOOL isEmoji; // ivar: _isEmoji
@property (nonatomic) BOOL isSpecialCaseForGameOverPoster; // ivar: _isSpecialCaseForGameOverPoster
@property (nonatomic) BOOL isTextFlipped; // ivar: _isTextFlipped
@property (nonatomic) BOOL moveBeforeScalingToAvoidKeyboard; // ivar: _moveBeforeScalingToAvoidKeyboard
@property (nonatomic) NSUInteger numberOfLines; // ivar: _numberOfLines
@property (nonatomic, getter=isOutlineDisabled) BOOL outlineDisabled; // ivar: _outlineDisabled
@property (readonly, nonatomic) CGAffineTransform partialTransformNoScaleNoTranslation;
@property (readonly, nonatomic) CGFloat rotation;
@property (readonly, nonatomic) CGPoint scale;
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment
@property (nonatomic) BOOL useFullTransform; // ivar: _useFullTransform


+(id)textEditingPropertiesWithTextEffect:(id)arg0 withText:(id)arg1 relativeTo:(struct CGRect )arg2 atTime:(struct ? )arg3 index:(NSUInteger)arg4 moveBeforeScalingToAvoidKeyboard:(BOOL)arg5 ;
-(id)description;
-(id)initWithTextEffect:(id)arg0 withText:(id)arg1 relativeTo:(struct CGRect )arg2 atTime:(struct ? )arg3 index:(NSUInteger)arg4 moveBeforeScalingToAvoidKeyboard:(BOOL)arg5 ;
-(void)JFX_configureWithAttributedString:(id)arg0 text:(id)arg1 ;
-(void)JFX_configureWithDefaultTypingAttributes:(id)arg0 ;
-(void)JFX_configureWithEffect:(id)arg0 ;
-(void)JFX_modifyAttributedString:(id)arg0 ;
-(void)JFX_modifyEntireAttributedString:(id)arg0 forTargetSize:(struct CGSize )arg1 fontColor:(id)arg2 ;
-(void)JFX_modifyRangesOfAttributedString:(id)arg0 isOutlineDisabled:(BOOL)arg1 ;


@end


#endif