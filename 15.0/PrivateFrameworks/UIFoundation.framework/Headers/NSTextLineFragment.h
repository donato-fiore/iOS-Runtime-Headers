// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSTEXTLINEFRAGMENT_H
#define NSTEXTLINEFRAGMENT_H

@class NSAttributedString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UIFont.h"
#import "NSTextLayoutFragment.h"

@interface NSTextLineFragment : NSObject <NSSecureCoding>

 {
    NSInteger _applicationFrameworkContext;
    *__CTLine _lineRef;
    *unsigned short _glyphs;
    *CGSize _advances;
    NSInteger _glyphCount;
    NSInteger _elasticGlyphCount;
    UIFont *_font;
    *__CTRun _activeRun;
    NSInteger _activeRunIndex;
    CGRect _imageBounds;
    ? _flags;
    CGPoint _cachedPoint;
    NSInteger _cachedCharacterIndex;
    CGFloat _cachedFractionWithinGlyph;
}


@property (copy) id *_renderingAttributesProvider; // ivar: __renderingAttributesProvider
@property (readonly) NSAttributedString *attributedString; // ivar: _attributedString
@property (readonly) _NSRange characterRange; // ivar: _characterRange
@property CGPoint glyphOrigin; // ivar: _glyphOrigin
@property CGFloat padding; // ivar: _padding
@property BOOL rendersTextCorrectionMarkers;
@property (weak) NSTextLayoutFragment *textLayoutFragment; // ivar: _textLayoutFragment
@property CGRect typographicBounds; // ivar: _typographicBounds


+(BOOL)supportsSecureCoding;
-(CGFloat)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint )arg0 ;
-(NSInteger)applicationFrameworkContext;
-(NSInteger)characterIndexForPoint:(struct CGPoint )arg0 ;
-(NSInteger)characterIndexForPoint:(struct CGPoint )arg0 fractionOfDistanceThroughGlyph:(*CGFloat)arg1 ;
-(NSUInteger)numberOfGlyphs;
-(id)_defaultRenderingAttributesAtCharacterIndex:(NSInteger)arg0 effectiveRange:(struct _NSRange *)arg1 ;
-(id)description;
-(id)initWithAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 attributes:(id)arg1 range:(struct _NSRange )arg2 ;
-(struct CGPoint )locationForCharacterAtIndex:(NSInteger)arg0 ;
-(struct CGRect )boundsWithType:(NSInteger)arg0 options:(NSUInteger)arg1 ;
-(struct CGRect )imageBounds;
-(struct CGRect )typographicUsedBounds;
-(struct _NSRange )_rangeOfLigatureContainingCharacterIndex:(NSUInteger)arg0 ;
-(struct __CTLine *)lineRef;
-(struct __CTRun *)_findRunForStringIndex:(NSInteger)arg0 runIndex:(*NSInteger)arg1 ;
-(void)_drawMarkedTextBackground:(id)arg0 inTextRange:(id)arg1 atOrigin:(struct CGPoint )arg2 graphicsContext:(id)arg3 ;
-(void)_drawMarkedTextUnderline:(id)arg0 inTextRange:(id)arg1 atOrigin:(struct CGPoint )arg2 graphicsContext:(id)arg3 ;
-(void)_drawTexCorrectionMarker:(NSInteger)arg0 characterRange:(struct _NSRange )arg1 atOrigin:(struct CGPoint )arg2 graphicsContext:(id)arg3 ;
-(void)_enumerateTextAttachmentFramesInCharacterRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)_enumerateTextSegmentsInCharacterRange:(struct _NSRange )arg0 usingBlock:(id)arg1 ;
-(void)_getCaretPositionsForCharactersInRange:(struct _NSRange )arg0 positionsCache:(**CGFloat)arg1 positionsCacheSize:(*NSUInteger)arg2 block:(id)arg3 ;
-(void)_processCaretGlyphRunForTextSelectionProvider:(id)arg0 baseLocation:(id)arg1 runRange:(struct _NSRange )arg2 glyphOffset:(CGFloat)arg3 positionsCache:(**CGFloat)arg4 positionsCacheSize:(*NSUInteger)arg5 stop:(*BOOL)arg6 usingBlock:(id)arg7 ;
-(void)_setColor:(id)arg0 inGraphicsContext:(id)arg1 ;
-(void)_setCurrentGraphicsContext:(id)arg0 duringBlock:(id)arg1 ;
-(void)dealloc;
-(void)drawAtPoint:(struct CGPoint )arg0 context:(struct CGContext *)arg1 ;
-(void)drawAtPoint:(struct CGPoint )arg0 graphicsContext:(id)arg1 ;
-(void)drawAtPoint:(struct CGPoint )arg0 inContext:(struct CGContext *)arg1 ;
-(void)drawMarkedTextIndicatorAtPoint:(struct CGPoint )arg0 context:(struct CGContext *)arg1 ;
-(void)drawMarkedTextIndicatorAtPoint:(struct CGPoint )arg0 graphicsContext:(id)arg1 ;
-(void)drawTextAttachmentsAtPoint:(struct CGPoint )arg0 graphicsContext:(id)arg1 ;
-(void)drawTextCorrectionMarkersAtPoint:(struct CGPoint )arg0 context:(struct CGContext *)arg1 ;
-(void)drawTextCorrectionMarkersAtPoint:(struct CGPoint )arg0 graphicsContext:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateCaretOffsetsWithTextSelectionDataSource:(id)arg0 baseLocation:(id)arg1 usingBlock:(id)arg2 ;
-(void)enumerateTextSegmentBoundsInTextRange:(id)arg0 withTextSElementProvider:(id)arg1 baseLocation:(id)arg2 usingBlock:(id)arg3 ;
-(void)invalidateCache;
-(void)setApplicationFrameworkContext:(NSInteger)arg0 ;
-(void)setGlyphs:(*unsigned short)arg0 advances:(struct CGSize *)arg1 count:(NSInteger)arg2 elasticCount:(NSUInteger)arg3 font:(id)arg4 ;
-(void)setLineRef:(struct __CTLine *)arg0 ;


@end


#endif