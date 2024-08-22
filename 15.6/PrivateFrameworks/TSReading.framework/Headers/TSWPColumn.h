// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSWPCOLUMN_H
#define TSWPCOLUMN_H

@class NSString;
@protocol TSWPOffscreenColumn, TSWPStyleProvider;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPColumn : NSObject <TSWPOffscreenColumn>

 {
    shared_ptr<TSWPLineFragmentArray> _lineFragmentArray;
    *void _paragraphAdornments;
}


@property (nonatomic) NSUInteger anchoredCharCount; // ivar: _anchoredCharCount
@property (nonatomic) _NSRange anchoredRange;
@property (nonatomic) NSUInteger characterCount; // ivar: _characterCount
@property (nonatomic) NSUInteger columnIndex; // ivar: _columnIndex
@property (nonatomic) CGFloat contentBottom; // ivar: _contentBottom
@property (readonly, nonatomic) NSUInteger countLines;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat erasableContentBottom; // ivar: _erasableContentBottom
@property (readonly, nonatomic) CGRect frameBounds;
@property (readonly) NSUInteger hash;
@property (nonatomic) int layoutResultFlags; // ivar: _layoutResultFlags
@property (nonatomic) NSUInteger nextWidowPullsDownFromCharIndex; // ivar: _nextWidowPullsDownFromCharIndex
@property (nonatomic) NSUInteger pageNumber; // ivar: _pageNumber
@property (nonatomic) _NSRange range;
@property (nonatomic) NSUInteger scaleTextPercent; // ivar: _scaleTextPercent
@property (nonatomic) NSUInteger startAnchoredCharIndex; // ivar: _startAnchoredCharIndex
@property (nonatomic) NSUInteger startCharIndex; // ivar: _startCharIndex
@property (readonly, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (retain, nonatomic) NSObject<TSWPStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat textBottom;
@property (nonatomic) BOOL textIsVertical; // ivar: _textIsVertical
@property (nonatomic) CGAffineTransform transformFromWP; // ivar: _transform
@property (readonly, nonatomic) CGAffineTransform transformToWP;
@property (readonly, nonatomic) CGRect typographicBounds;
@property (readonly, nonatomic) CGRect typographicBoundsForCell;
@property (nonatomic) CGRect wpBounds; // ivar: _frameBounds


+(NSUInteger)charIndexForPoint:(struct CGPoint )arg0 inColumnsArray:(id)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 leadingEdge:(*BOOL)arg5 ;
+(NSUInteger)charIndexForPoint:(struct CGPoint )arg0 inColumnsArray:(id)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 isAtEndOfLine:(*BOOL)arg5 leadingEdge:(*BOOL)arg6 ;
+(NSUInteger)charIndexForTopicDragAtPoint:(struct CGPoint )arg0 inColumnsArray:(id)arg1 ;
+(id)closestColumnInColumnsArray:(id)arg0 forPoint:(struct CGPoint )arg1 ignoreEmptyColumns:(BOOL)arg2 ignoreDrawableOnlyColumns:(BOOL)arg3 ;
+(id)columnForCharIndex:(NSUInteger)arg0 eol:(BOOL)arg1 withColumns:(id)arg2 ;
+(id)footnoteMarkAttachmentInColumnArray:(id)arg0 atPoint:(struct CGPoint )arg1 ;
+(id)footnoteReferenceAttachmentInColumnArray:(id)arg0 atPoint:(struct CGPoint )arg1 ;
+(id)pathForHighlightWithRange:(struct _NSRange )arg0 columnArray:(id)arg1 pathStyle:(int)arg2 ;
+(id)smartFieldWithAttributeKind:(unsigned int)arg0 inColumnArray:(id)arg1 atPoint:(struct CGPoint )arg2 ;
+(struct CGColor *)computeSingleColorWithColumns:(id)arg0 ;
+(struct CGRect )boundsRectForSelection:(id)arg0 columnArray:(id)arg1 includeRuby:(BOOL)arg2 ;
+(struct CGRect )caretRectForInsertionPoint:(id)arg0 withColumns:(id)arg1 ;
+(struct CGRect )rectForSelection:(id)arg0 withColumns:(id)arg1 ;
+(struct CGRect )rectForSelection:(id)arg0 withColumns:(id)arg1 useParagraphModeRects:(BOOL)arg2 ;
-(*void)lineFragmentArray;
-(*void)lineFragmentAtIndex:(NSUInteger)arg0 ;
-(*void)lineFragmentClosestToPoint:(struct CGPoint )arg0 knobTag:(NSUInteger)arg1 ;
-(*void)lineFragmentForCharIndex:(NSUInteger)arg0 knobTag:(NSUInteger)arg1 selectionType:(int)arg2 ;
-(*void)pColumnEndingPartitionedLineFragmentInSelectionRange:(struct _NSRange )arg0 ;
-(?)charIndexFromPoint:(?)arg0 allowPastBreak:(?)arg1 pastCenterGoesToNextChar:(?)arg2 allowNotFound:(?)arg3 isAtEndOfLine:(?)arg4 outFragmentleadingEdge;
-(?)charIndexFromWPPoint:(?)arg0 pastCenterGoesToNextChar:(?)arg1 allowNotFound:(?)arg2 outFragmentleadingEdge;
-(BOOL)isDropCapFragmentAtIndex:(NSUInteger)arg0 ;
-(BOOL)isEmptyLineFragmentAtIndex:(NSUInteger)arg0 ;
-(BOOL)isTruncatedLineFragmentAtIndex:(NSUInteger)arg0 ;
-(BOOL)onlyHasAnchoredDrawable;
-(BOOL)requiresGlyphVectorsForHeightMeasurement;
-(CGFloat)baselineOfLineFragmentAtCharIndex:(NSUInteger)arg0 ;
-(CGFloat)baselineOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(CGFloat)horizontalOffsetForCharIndex:(NSUInteger)arg0 lineFragmentIndex:(NSUInteger)arg1 bumpPastHyphen:(BOOL)arg2 allowPastLineBounds:(BOOL)arg3 ;
-(CGFloat)logicalBoundsBottom;
-(CGFloat)logicalBoundsTop;
-(CGFloat)minimumHeightForLayoutOnPage;
-(CGFloat)textHeight;
-(CGFloat)topOfCapForLogicalLineIndex:(NSUInteger)arg0 ;
-(CGFloat)topOfLineAtCharIndex:(NSUInteger)arg0 ;
-(CGFloat)trimToCharIndex:(NSUInteger)arg0 inTarget:(id)arg1 ;
-(CGFloat)typographicGlyphExtentOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)charIndexForSelectionFromPoint:(struct CGPoint )arg0 isTail:(BOOL)arg1 ;
-(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 leadingEdge:(*BOOL)arg5 ;
-(NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)lineFragmentCountForBaseline:(CGFloat)arg0 ;
-(NSUInteger)lineIndexForCharIndex:(NSUInteger)arg0 eol:(BOOL)arg1 ;
-(NSUInteger)logicalLineCount;
-(NSUInteger)truncatedCharIndexForLineFragmentAtIndex:(NSUInteger)arg0 ;
-(id)drawableIntersectionRectsForSelection:(id)arg0 inTarget:(id)arg1 ;
-(id)initWithStorage:(id)arg0 frameBounds:(struct CGRect )arg1 ;
-(id)lineSelectionsForSelection:(id)arg0 ;
-(id)pMutableRectsForSelectionRange:(struct _NSRange )arg0 selectionType:(int)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4 forParagraphMode:(BOOL)arg5 includeRuby:(BOOL)arg6 inranges:(id)arg7 outranges:(*id)arg8 ;
-(id)partitionedLayoutForInfo:(id)arg0 ;
-(id)rectsForSelection:(id)arg0 ;
-(id)rectsForSelection:(id)arg0 ranges:(*id)arg1 ;
-(id)rectsForSelectionRange:(struct _NSRange )arg0 ;
-(id)rectsForSelectionRange:(struct _NSRange )arg0 selectionType:(int)arg1 ;
-(id)rectsForSelectionRange:(struct _NSRange )arg0 selectionType:(int)arg1 forParagraphMode:(BOOL)arg2 ;
-(id)rectsForSelectionRange:(struct _NSRange )arg0 selectionType:(int)arg1 forParagraphMode:(BOOL)arg2 includeRuby:(BOOL)arg3 ;
-(id)rectsForSelectionRange:(struct _NSRange )arg0 selectionType:(int)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4 forParagraphMode:(BOOL)arg5 includeRuby:(BOOL)arg6 ;
-(id)rectsForSelectionRanges:(id)arg0 selectionType:(int)arg1 ;
-(id)singleLinePartitionedInfoAtStart:(BOOL)arg0 ;
-(id)smartFieldAtCharIndex:(NSUInteger)arg0 attributeKind:(unsigned int)arg1 ;
-(struct ? )heightInfoOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct ? )lineMetricsAtCharIndex:(NSUInteger)arg0 allowEndOfLine:(BOOL)arg1 ;
-(struct CGRect )boundsOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )caretRectForSelection:(id)arg0 ;
-(struct CGRect )columnRectForRange:(struct _NSRange )arg0 ;
-(struct CGRect )erasableBounds:(unsigned int)arg0 ;
-(struct CGRect )erasableRectForSelectionRange:(struct _NSRange )arg0 ;
-(struct CGRect )firstRectForSelection:(id)arg0 includeSpaceAfter:(BOOL)arg1 includeSpaceBefore:(BOOL)arg2 includeLeading:(BOOL)arg3 ;
-(struct CGRect )glyphRectForRange:(struct _NSRange )arg0 includingLabel:(BOOL)arg1 ;
-(struct CGRect )glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg0 glyphRange:(struct _NSRange )arg1 ;
-(struct CGRect )labelBoundsOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )typographicBoundsOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct CGSize )maxSize;
-(struct _NSRange )lineFragmentRangeForLogicalLineIndex:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct _TSWPCharIndexAndPosition )calcAttachmentPositionForDrawable:(id)arg0 atPoint:(struct CGPoint )arg1 inTextLayoutTarget:(id)arg2 tlBoundsInfluencingWrap:(struct CGPoint )arg3 wrapOutset:(struct CGSize )arg4 wrapMargin:(CGFloat)arg5 makeInline:(BOOL)arg6 ;
-(void)addAdornmentRect:(struct TSWPAdornmentRect *)arg0 ;
-(void)clearAdornments;
-(void)dealloc;
-(void)incrementRanges:(NSInteger)arg0 ;
-(void)makeEmpty:(NSUInteger)arg0 layoutResultFlags:(int)arg1 ;
-(void)normalizeLineFragmentOrigins:(struct CGPoint )arg0 ;
-(void)offsetLineFragmentsByPoint:(struct CGPoint )arg0 ;
-(void)renderWithRenderer:(id)arg0 currentSelection:(id)arg1 limitSelection:(id)arg2 listRange:(struct _NSRange )arg3 rubyGlyphRange:(struct _NSRange )arg4 isCanvasInteractive:(BOOL)arg5 spellChecker:(id)arg6 suppressedMisspellingRange:(struct _NSRange )arg7 blackAndWhite:(BOOL)arg8 dictationInterpretations:(*void)arg9 autocorrections:(*void)arg10 markedRange:(struct _NSRange )arg11 markedText:(id)arg12 renderMode:(int)arg13 pageCount:(NSUInteger)arg14 suppressInvisibles:(BOOL)arg15 currentCanvasSelection:(id)arg16 ;
-(void)renderWithRenderer:(id)arg0 pageCount:(NSUInteger)arg1 ;
-(void)setLineFragmentArray:(*void)arg0 ;
-(void)trimFromCharIndex:(NSUInteger)arg0 inTarget:(id)arg1 layoutChore:(*void)arg2 ;
-(void)trimToCharIndex:(NSUInteger)arg0 inTarget:(id)arg1 removeAutoNumberFootnoteCount:(NSUInteger)arg2 ;


@end


#endif