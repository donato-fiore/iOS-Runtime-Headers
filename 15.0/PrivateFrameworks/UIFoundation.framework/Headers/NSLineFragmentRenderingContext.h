// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLINEFRAGMENTRENDERINGCONTEXT_H
#define NSLINEFRAGMENTRENDERINGCONTEXT_H

@class CUICatalog, CUIStyleEffectConfiguration, NSString;
@protocol NSTextApplicationFrameworkContextClient;

#import <Foundation/Foundation.h>

#import "__NSImmutableTextStorage.h"

@interface NSLineFragmentRenderingContext : NSObject <NSTextApplicationFrameworkContextClient>

 {
    *void _runs;
    NSInteger _numRuns;
    *unsigned short _glyphs;
    *CGSize _advancements;
    CGFloat _leftSideDelta;
    CGFloat _lineWidth;
    CGFloat _leftControlWidth;
    CGFloat _rightControlWidth;
    CGFloat _elasticWidth;
    CGRect _imageBounds;
    ? _flags;
    __NSImmutableTextStorage *_textStorage;
    NSInteger _appContext;
}


@property NSInteger applicationFrameworkContext;
@property (retain, nonatomic) CUICatalog *cuiCatalog; // ivar: _catalog
@property (retain, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // ivar: _styleEffects
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property NSInteger resolvedBaseWritingDirection; // ivar: _resolvedDirection
@property NSInteger resolvedTextAlignment; // ivar: _resolvedAlignment
@property (readonly) Class superclass;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;


+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(void)initialize;
-(BOOL)isRTL;
-(CGFloat)elasticWidth;
-(CGFloat)lineFragmentWidth;
-(id)initWithTextStorage:(id)arg0 runs:(struct __CFArray *)arg1 glyphOrigin:(CGFloat)arg2 lineFragmentWidth:(CGFloat)arg3 elasticWidth:(CGFloat)arg4 usesScreenFonts:(BOOL)arg5 isRTL:(BOOL)arg6 applicationFrameworkContext:(NSInteger)arg7 ;
-(struct CGRect )imageBounds;
-(struct CGSize )sizeWithBehavior:(NSInteger)arg0 usesFontLeading:(BOOL)arg1 baselineDelta:(*CGFloat)arg2 ;
-(void)dealloc;
-(void)drawAtPoint:(struct CGPoint )arg0 inContext:(struct CGContext *)arg1 ;
-(void)finalize;
-(void)getMaximumAscender:(*CGFloat)arg0 minimumDescender:(*CGFloat)arg1 ;
-(void)release;


@end


#endif