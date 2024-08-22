// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSTRINGDRAWINGTEXTSTORAGE_H
#define NSSTRINGDRAWINGTEXTSTORAGE_H

@class CUICatalog, CUIStyleEffectConfiguration, NSString;
@protocol NSLayoutManagerDelegate;


#import "NSTextStorage.h"
#import "NSConcreteNotifyingMutableAttributedString.h"
#import "NSLayoutManager.h"
#import "NSTextContainer.h"

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate>

 {
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    CGFloat _baselineDelta;
    ? _sdflags;
}


@property (retain, nonatomic) CUICatalog *cuiCatalog; // ivar: _catalog
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // ivar: _styleEffects
@property (readonly, copy) NSString *debugDescription;
@property CGFloat defaultTighteningFactor; // ivar: _defaultTighteningFactor
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;


+(BOOL)_hasCustomSettings;
+(id)stringDrawingTextStorage;
+(void)_setHasCustomSettings:(BOOL)arg0 ;
+(void)initialize;
+(void)performLayoutOperation:(id)arg0 ;
-(BOOL)_baselineMode;
-(BOOL)_forceWordWrapping;
-(BOOL)_isStringDrawingTextStorage;
-(BOOL)_shouldSetOriginalFontAttribute;
-(BOOL)_wrappedByCluster;
-(CGFloat)_baselineDelta;
-(NSInteger)_applicationFrameworkContext;
-(NSInteger)typesetterBehavior;
-(NSUInteger)length;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 effectiveRange:(struct _NSRange *)arg2 ;
-(id)attribute:(id)arg0 atIndex:(NSUInteger)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange )arg3 ;
-(id)attributesAtIndex:(NSUInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)init;
-(id)layoutManager;
-(id)string;
-(id)textContainer;
-(id)textContainerForAttributedString:(id)arg0 ;
-(id)textContainerForAttributedString:(id)arg0 containerSize:(struct CGSize )arg1 lineFragmentPadding:(CGFloat)arg2 ;
-(struct CGPoint )defaultTextContainerOriginForRect:(struct CGRect )arg0 ;
-(struct CGRect )usedRectForTextContainer:(id)arg0 ;
-(void)_setApplicationFrameworkContext:(NSInteger)arg0 ;
-(void)_setBaselineDelta:(CGFloat)arg0 ;
-(void)_setBaselineMode:(BOOL)arg0 ;
-(void)_setForceWordWrapping:(BOOL)arg0 ;
-(void)_setWrappedByCluster:(BOOL)arg0 ;
-(void)addAttribute:(id)arg0 value:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)dealloc;
-(void)drawTextContainer:(id)arg0 range:(struct _NSRange )arg1 withRect:(struct CGRect )arg2 graphicsContext:(struct CGContext *)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(CGFloat)arg6 ;
-(void)drawTextContainer:(id)arg0 withRect:(struct CGRect )arg1 graphicsContext:(struct CGContext *)arg2 baselineMode:(BOOL)arg3 scrollable:(BOOL)arg4 padding:(CGFloat)arg5 ;
-(void)fontSetChanged;
-(void)processEditing;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withAttributedString:(id)arg1 ;
-(void)replaceCharactersInRange:(struct _NSRange )arg0 withString:(id)arg1 ;
-(void)setAttributes:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)setGraphicsContext:(id)arg0 ;


@end


#endif