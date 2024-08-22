// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSSINGLELINETYPESETTER_H
#define NSSINGLELINETYPESETTER_H



#import "NSATSTypesetter.h"
#import "__NSImmutableTextStorage.h"

@interface NSSingleLineTypesetter : NSATSTypesetter {
    CGFloat _lineWidth;
    _NSRange _currentBufferRange;
    *unsigned short _glyphs;
    *NSInteger _props;
    *NSUInteger _charIndexes;
    ? _slFlags;
    __NSImmutableTextStorage *_textStorage;
}




+(BOOL)_validateAttributes:(id)arg0 measuringOnly:(BOOL)arg1 ;
+(void)initialize;
+(void)performWithSingleLineTypesetterContext:(id)arg0 ;
-(BOOL)_allowsEllipsisGlyphSubstitution;
-(BOOL)_mirrorsTextAlignment;
-(BOOL)_usesScreenFonts;
-(BOOL)synchronizesAlignmentToDirection;
-(NSUInteger)getGlyphsInRange:(struct _NSRange )arg0 glyphs:(*unsigned short)arg1 properties:(*NSInteger)arg2 characterIndexes:(*NSUInteger)arg3 bidiLevels:(char *)arg4 ;
-(NSUInteger)layoutOptions;
-(id)_textContainerForAttachmentProtocol;
-(id)_textStorageForAttachmentProtocol;
-(id)attributedString;
-(id)createRenderingContextForCharacterRange:(struct _NSRange )arg0 typesetterBehavior:(NSInteger)arg1 usesScreenFonts:(BOOL)arg2 hasStrongRight:(BOOL)arg3 maximumWidth:(CGFloat)arg4 ;
-(id)createRenderingContextForCharacterRange:(struct _NSRange )arg0 typesetterBehavior:(NSInteger)arg1 usesScreenFonts:(BOOL)arg2 hasStrongRight:(BOOL)arg3 syncDirection:(BOOL)arg4 mirrorsTextAlignment:(BOOL)arg5 maximumWidth:(CGFloat)arg6 ;
-(id)init;
-(id)substituteFontForFont:(id)arg0 ;
-(struct _NSRange )characterRangeForGlyphRange:(struct _NSRange )arg0 actualGlyphRange:(struct _NSRange *)arg1 ;
-(struct _NSRange )glyphRangeForCharacterRange:(struct _NSRange )arg0 actualCharacterRange:(struct _NSRange *)arg1 ;
-(void)dealloc;
-(void)deleteGlyphsInRange:(struct _NSRange )arg0 ;
-(void)getLineFragmentRect:(struct CGRect *)arg0 usedRect:(struct CGRect *)arg1 remainingRect:(struct CGRect *)arg2 forStartingGlyphAtIndex:(NSUInteger)arg3 proposedRect:(struct CGRect )arg4 lineSpacing:(CGFloat)arg5 paragraphSpacingBefore:(CGFloat)arg6 paragraphSpacingAfter:(CGFloat)arg7 ;
-(void)insertGlyph:(unsigned int)arg0 atGlyphIndex:(NSUInteger)arg1 characterIndex:(NSUInteger)arg2 ;
-(void)insertGlyphs:(*unsigned int)arg0 length:(NSUInteger)arg1 forStartingGlyphAtIndex:(NSUInteger)arg2 characterIndex:(NSUInteger)arg3 ;
-(void)setAttachmentSize:(struct CGSize )arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setBidiLevels:(char *)arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setDrawsOutsideLineFragment:(BOOL)arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)setGlyphs:(*unsigned short)arg0 properties:(*NSInteger)arg1 characterIndexes:(*NSUInteger)arg2 font:(id)arg3 forGlyphRange:(struct _NSRange )arg4 ;
-(void)setIntAttribute:(NSInteger)arg0 value:(NSInteger)arg1 forGlyphAtIndex:(NSUInteger)arg2 ;
-(void)setLineFragmentRect:(struct CGRect )arg0 forGlyphRange:(struct _NSRange )arg1 usedRect:(struct CGRect )arg2 baselineOffset:(CGFloat)arg3 ;
-(void)setLocation:(struct CGPoint )arg0 withAdvancements:(*CGFloat)arg1 forStartOfGlyphRange:(struct _NSRange )arg2 ;
-(void)setNotShownAttribute:(BOOL)arg0 forGlyphRange:(struct _NSRange )arg1 ;
-(void)substituteGlyphsInRange:(struct _NSRange )arg0 withGlyphs:(*unsigned int)arg1 ;


@end


#endif