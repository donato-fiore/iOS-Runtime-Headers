// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSWPCOLUMN_H
#define TSWPCOLUMN_H

@class NSMutableArray, NSString;
@protocol TSWPOffscreenColumn, TSWPStyleProvider;

#import <Foundation/Foundation.h>

#import "TSWPStorage.h"

@interface TSWPColumn : NSObject <TSWPOffscreenColumn>

 {
    _NSRange _anchoredAttachmentRange;
    shared_ptr<TSWPLineFragmentArray> _lineFragmentArray;
    NSMutableArray *_paragraphAdornments;
}


@property (nonatomic) _NSRange anchoredRange;
@property (nonatomic) NSUInteger characterCount; // ivar: _characterCount
@property (nonatomic) NSUInteger columnIndex; // ivar: _columnIndex
@property (nonatomic) CGFloat contentBlockBottom; // ivar: _contentBottom
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat erasableContentBottom; // ivar: _erasableContentBottom
@property (readonly, nonatomic) CGRect frameBounds;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL lastLineIsEmptyAndHasListLabel;
@property (nonatomic) NSUInteger layoutResultFlags; // ivar: _layoutResultFlags
@property (readonly, nonatomic) NSUInteger lineCount;
@property (nonatomic) CGFloat nextLinePosition; // ivar: _nextLinePosition
@property (nonatomic) NSUInteger nextWidowPullsDownFromCharIndex; // ivar: _nextWidowPullsDownFromCharIndex
@property (nonatomic) NSUInteger pageNumber; // ivar: _pageNumber
@property (nonatomic) _NSRange range;
@property (nonatomic) NSUInteger scaleTextPercent; // ivar: _scaleTextPercent
@property (nonatomic) NSUInteger startCharIndex; // ivar: _startCharIndex
@property (readonly, nonatomic) TSWPStorage *storage; // ivar: _storage
@property (nonatomic) NSUInteger storageChangeCount; // ivar: _storageChangeCount
@property (weak, nonatomic) NSObject<TSWPStyleProvider> *styleProvider; // ivar: _styleProvider
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL terminatedByBreak;
@property (readonly, nonatomic) CGFloat textBlockBottom;
@property (nonatomic) BOOL textIsVertical; // ivar: _textIsVertical
@property (nonatomic) CGAffineTransform transformFromWP; // ivar: _transform
@property (readonly, nonatomic) CGAffineTransform transformToWP;
@property (readonly, nonatomic) CGRect typographicBounds;
@property (nonatomic) CGRect wpBounds; // ivar: _frameBounds


+(BOOL)partitionedAttachmentStartsAtCharIndex:(NSUInteger)arg0 withColumns:(id)arg1 ;
+(NSUInteger)charIndexForPoint:(struct CGPoint )arg0 inColumnsArray:(id)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 ignoreEmptyColumns:(BOOL)arg4 isAtEndOfLine:(*BOOL)arg5 leadingEdge:(*BOOL)arg6 ;
+(NSUInteger)charIndexForPoint:(struct CGPoint )arg0 inColumnsArray:(id)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 constrainToAscentAndDescent:(BOOL)arg5 ignoreEmptyColumns:(BOOL)arg6 isAtEndOfLine:(*BOOL)arg7 leadingEdge:(*BOOL)arg8 ;
+(NSUInteger)charIndexForPoint:(struct CGPoint )arg0 inColumnsArray:(id)arg1 allowPastBreak:(BOOL)arg2 allowNotFound:(BOOL)arg3 pastCenterGoesToNextChar:(BOOL)arg4 ignoreEmptyColumns:(BOOL)arg5 isAtEndOfLine:(*BOOL)arg6 leadingEdge:(*BOOL)arg7 ;
+(NSUInteger)charIndexForPointWithPinning:(struct CGPoint )arg0 inLayoutTarget:(id)arg1 ;
+(NSUInteger)charIndexForPointWithPinning:(struct CGPoint )arg0 isTail:(BOOL)arg1 selectionType:(int)arg2 inLayoutTarget:(id)arg3 ;
+(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 allowNotFound:(BOOL)arg2 constrainToAscentAndDescent:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 leadingEdge:(*BOOL)arg5 inLayoutTarget:(id)arg6 ;
+(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 allowNotFound:(BOOL)arg2 isAtEndOfLine:(*BOOL)arg3 leadingEdge:(*BOOL)arg4 inLayoutTarget:(id)arg5 ;
+(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 allowNotFound:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 constrainToAscentAndDescent:(BOOL)arg4 isAtEndOfLine:(*BOOL)arg5 leadingEdge:(*BOOL)arg6 ignoreEmptyColumns:(BOOL)arg7 inLayoutTarget:(id)arg8 ;
+(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 allowNotFound:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 constrainToAscentAndDescent:(BOOL)arg4 isAtEndOfLine:(*BOOL)arg5 leadingEdge:(*BOOL)arg6 inLayoutTarget:(id)arg7 ;
+(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 allowNotFound:(BOOL)arg2 pastCenterGoesToNextChar:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 leadingEdge:(*BOOL)arg5 inLayoutTarget:(id)arg6 ;
+(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 constrainToAscentAndDescent:(BOOL)arg2 isAtEndOfLine:(*BOOL)arg3 inLayoutTarget:(id)arg4 ;
+(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 isAtEndOfLine:(*BOOL)arg2 inLayoutTarget:(id)arg3 ;
+(id)closestColumnInColumnsArray:(id)arg0 forPoint:(struct CGPoint )arg1 ignoreEmptyColumns:(BOOL)arg2 ignoreDrawableOnlyColumns:(BOOL)arg3 ;
+(id)columnForCharIndex:(NSUInteger)arg0 allowEndOfColumn:(BOOL)arg1 withColumns:(id)arg2 ;
+(id)commentKnobBaseOriginForHighlightAtTextRange:(struct _NSRange )arg0 withColumns:(id)arg1 positionForRTL:(BOOL)arg2 ;
+(id)contentRectsToAvoidPencilAnnotationOverlapWithColumns:(id)arg0 ;
+(id)footnoteMarkAttachmentInColumnArray:(id)arg0 atPoint:(struct CGPoint )arg1 ;
+(id)footnoteReferenceAttachmentInColumnArray:(id)arg0 atPoint:(struct CGPoint )arg1 ;
+(id)pathForHighlightWithRange:(struct _NSRange )arg0 columnArray:(id)arg1 pathStyle:(int)arg2 ;
+(id)pencilAnnotationRectsForSelection:(id)arg0 withColumns:(id)arg1 outRanges:(*id)arg2 ;
+(id)selectionRectsforColumns:(id)arg0 forSelection:(id)arg1 ;
+(id)smartFieldWithAttributeKind:(NSUInteger)arg0 inColumnArray:(id)arg1 atPoint:(struct CGPoint )arg2 ;
+(struct ? )pencilAnnotationLineMetricsAtCharIndex:(NSUInteger)arg0 withColumns:(id)arg1 ;
+(struct CGPoint )connectionLinePointForChangeRange:(struct _NSRange )arg0 withColumns:(id)arg1 layoutTarget:(id)arg2 ;
+(struct CGPoint )p_pinPoint:(struct CGPoint )arg0 toRect:(struct CGRect )arg1 ;
+(struct CGPoint )pinPoint:(struct CGPoint )arg0 toBottomOfLineFragmentInColumns:(id)arg1 ;
+(struct CGPoint )pinToNaturalBounds:(struct CGPoint )arg0 andLastLineFragment:(BOOL)arg1 inLayoutTarget:(id)arg2 ;
+(struct CGRect )boundsRectForSelection:(id)arg0 columnArray:(id)arg1 includeRuby:(BOOL)arg2 includePaginatedAttachments:(BOOL)arg3 ;
+(struct CGRect )caretRectForInsertionPoint:(id)arg0 withColumns:(id)arg1 ;
+(struct CGRect )columnRectForRange:(struct _NSRange )arg0 withColumns:(id)arg1 ;
+(struct CGRect )frameBoundsOfColumns:(id)arg0 ;
+(struct CGRect )labelRectForCharIndex:(NSUInteger)arg0 withColumns:(id)arg1 ;
+(struct CGRect )rectForSelection:(id)arg0 withColumns:(id)arg1 ;
+(struct CGRect )rectForSelection:(id)arg0 withColumns:(id)arg1 useParagraphModeRects:(BOOL)arg2 ;
+(struct CGSize )layoutSizeForParagraphEnumerator:(struct TSWPParagraphEnumerator *)arg0 inColumns:(id)arg1 lineCount:(*NSUInteger)arg2 nextLineOffset:(*CGFloat)arg3 ;
+(struct _NSRange )charRangeForPencilAnnotationStartPoint:(struct CGPoint )arg0 toEndPoint:(struct CGPoint )arg1 inLayoutTarget:(id)arg2 onSingleLineFragment:(BOOL)arg3 ;
+(struct _NSRange )rangeOfColumns:(id)arg0 ;
-(*void)lineFragmentArray;
-(*void)lineFragmentArrayForUnitTests;
-(*void)lineFragmentAtIndex:(NSUInteger)arg0 ;
-(*void)nearestLineFragmentWithSameVerticalPositionAs:(NSUInteger)arg0 xPos:(CGFloat)arg1 ;
-(*void)pColumnEndingPartitionedLineFragmentInSelectionRange:(struct _NSRange )arg0 ;
-(?)charIndexFromPoint:(?)arg0 allowPastBreak:(?)arg1 pastCenterGoesToNextChar:(?)arg2 allowNotFound:(?)arg3 constrainToAscentAndDescent:(?)arg4 isAtEndOfLine:(?)arg5 outFragmentleadingEdge;
-(?)charIndexFromWPPoint:(?)arg0 pastCenterGoesToNextChar:(?)arg1 allowNotFound:(?)arg2 constrainToAscentAndDescent:(?)arg3 outFragmentleadingEdge;
-(?)p_charIndexWithTextClosestToWPPoint:(?)arg0 pastCenterGoesToNextChar:(?)arg1 outFragmentleadingEdge;
-(BOOL)hasPartitionedAttachmentAtStart:(BOOL)arg0 ;
-(BOOL)isLastLineFragmentPartitioned;
-(BOOL)onlyHasAnchoredDrawable;
-(BOOL)onlyHasPartitionedAttachments;
-(BOOL)p_isFirstPartitionForCharIndex:(NSUInteger)arg0 ;
-(BOOL)p_pencilAnnotationsShouldSkipLineFragment:(*void)arg0 ;
-(BOOL)requiresGlyphVectorsForHeightMeasurement;
-(CGFloat)baselineOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(CGFloat)horizontalOffsetForCharIndex:(NSUInteger)arg0 lineFragmentIndex:(NSUInteger)arg1 bumpPastHyphen:(BOOL)arg2 allowPastLineBounds:(BOOL)arg3 ;
-(CGFloat)logicalBoundsBottom;
-(CGFloat)logicalBoundsTop;
-(CGFloat)minimumHeightForLayoutOnPage;
-(CGFloat)textHeight;
-(NSUInteger)anchoredCharCount;
-(NSUInteger)charIndexForSelectionFromPoint:(struct CGPoint )arg0 isTail:(BOOL)arg1 ;
-(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 constrainToAscentAndDescent:(BOOL)arg4 isAtEndOfLine:(*BOOL)arg5 leadingEdge:(*BOOL)arg6 ;
-(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 leadingEdge:(*BOOL)arg5 ;
-(NSUInteger)charIndexFromPoint:(struct CGPoint )arg0 allowPastBreak:(BOOL)arg1 pastCenterGoesToNextChar:(BOOL)arg2 allowNotFound:(BOOL)arg3 isAtEndOfLine:(*BOOL)arg4 outFragment:(struct TSWPLineFragment **)arg5 leadingEdge:(*BOOL)arg6 ;
-(NSUInteger)glyphCountForRubyFieldAtCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)lineFragmentCountForBaseline:(CGFloat)arg0 ;
-(NSUInteger)lineIndexForCharIndex:(NSUInteger)arg0 eol:(BOOL)arg1 ;
-(NSUInteger)pRemapCharIndex:(NSUInteger)arg0 outIsAfterBreak:(*BOOL)arg1 outWithTextSource:(*id)arg2 ;
-(NSUInteger)startAnchoredCharIndex;
-(id)drawableIntersectionRectsForSelection:(id)arg0 inTarget:(id)arg1 ;
-(id)initForTestingWithStorage:(id)arg0 frameBounds:(struct CGRect )arg1 ;
-(id)initWithStorage:(id)arg0 frameBounds:(struct CGRect )arg1 ;
-(id)layoutsForInlineDrawables:(id)arg0 ;
-(id)lineSelectionsForSelection:(id)arg0 ;
-(id)pMutableRectsForSelectionRange:(struct _NSRange )arg0 selectionType:(int)arg1 includeSpaceAfter:(BOOL)arg2 includeSpaceBefore:(BOOL)arg3 includeLeading:(BOOL)arg4 forParagraphMode:(BOOL)arg5 includeRuby:(BOOL)arg6 includePaginatedAttachments:(BOOL)arg7 inranges:(id)arg8 outranges:(*id)arg9 ;
-(id)pTransformReturnRects:(id)arg0 ;
-(id)partitionedLayoutForInfo:(id)arg0 ;
-(id)partitionedLayoutOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(id)rectsForSelection:(id)arg0 ranges:(*id)arg1 ;
-(id)rectsForSelection:(id)arg0 ranges:(*id)arg1 includePaginatedAttachments:(BOOL)arg2 ;
-(id)rectsForSelectionRange:(struct _NSRange )arg0 selectionType:(int)arg1 forParagraphMode:(BOOL)arg2 includeRuby:(BOOL)arg3 includePaginatedAttachments:(BOOL)arg4 ;
-(id)rectsForSelectionRanges:(id)arg0 selectionType:(int)arg1 ;
-(id)singleLinePartitionedInfoAtStart:(BOOL)arg0 ;
-(id)smartFieldAtCharIndex:(NSUInteger)arg0 attributeKind:(NSUInteger)arg1 ;
-(id)textAdornmentOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct ? )lineMetricsAtCharIndex:(NSUInteger)arg0 allowEndOfLine:(BOOL)arg1 ;
-(struct CGRect )boundsIncludingDropCapRectsForSelectionType:(int)arg0 ;
-(struct CGRect )boundsOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct CGRect )caretRectForSelection:(id)arg0 ;
-(struct CGRect )changeBarRectForLineFragment:(*void)arg0 layoutTarget:(id)arg1 ;
-(struct CGRect )columnRectForRange:(struct _NSRange )arg0 ;
-(struct CGRect )erasableBounds:(NSUInteger)arg0 ;
-(struct CGRect )erasableRectForSelectionRange:(struct _NSRange )arg0 ;
-(struct CGRect )firstRectForSelection:(id)arg0 includeSpaceAfter:(BOOL)arg1 includeSpaceBefore:(BOOL)arg2 includeLeading:(BOOL)arg3 ;
-(struct CGRect )glyphRectForRange:(struct _NSRange )arg0 includingLabel:(BOOL)arg1 ;
-(struct CGRect )glyphRectForRubyFieldAtCharIndex:(NSUInteger)arg0 glyphRange:(struct _NSRange )arg1 ;
-(struct CGRect )rawGlyphRectOfRange:(struct _NSRange )arg0 ;
-(struct CGSize )maxSize;
-(struct TSWPFontHeightInfo )fontHeightInfoAtCharIndex:(NSUInteger)arg0 ;
-(struct _NSRange )rangeOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(struct _TSWPCharIndexAndPosition )calcAttachmentPositionForDrawable:(id)arg0 atPoint:(struct CGPoint )arg1 inTextLayoutTarget:(id)arg2 startOfBoundsInfluencingWrap:(struct CGPoint )arg3 wrapOutset:(struct CGSize )arg4 wrapMargin:(CGFloat)arg5 makeInline:(BOOL)arg6 ;
-(unsigned int)fontTraitsForRange:(struct _NSRange )arg0 includingLabel:(BOOL)arg1 ;
-(unsigned int)hyphenCharOfLineFragmentAtIndex:(NSUInteger)arg0 ;
-(void)addAdornmentRect:(id)arg0 ;
-(void)clearAdornments;
-(void)dealloc;
-(void)enumerateParagraphAdornmentsUsingBlock:(id)arg0 ;
-(void)incrementRanges:(NSInteger)arg0 startingAt:(NSUInteger)arg1 ;
-(void)makeEmpty:(NSUInteger)arg0 anchoredRange:(struct _NSRange )arg1 layoutResultFlags:(NSUInteger)arg2 ;
-(void)offsetLineFragmentsBy:(struct CGSize )arg0 ;
-(void)pInfoForCharIndex:(NSUInteger)arg0 isAtStart:(*BOOL)arg1 isAtEnd:(*BOOL)arg2 ;
-(void)renderWithRenderer:(id)arg0 currentSelection:(id)arg1 limitSelection:(id)arg2 listRange:(struct _NSRange )arg3 rubyGlyphRange:(struct _NSRange )arg4 isCanvasInteractive:(BOOL)arg5 isInDrawingMode:(BOOL)arg6 suppressedMisspellingRange:(struct _NSRange )arg7 blackAndWhite:(BOOL)arg8 dictationInterpretations:(id)arg9 autocorrections:(id)arg10 markedRange:(struct _NSRange )arg11 markedText:(id)arg12 renderMode:(NSUInteger)arg13 pageCount:(NSUInteger)arg14 suppressInvisibles:(BOOL)arg15 currentCanvasSelection:(id)arg16 ;
-(void)setLineFragmentArray:(*void)arg0 ;
-(void)trimToCharIndex:(NSUInteger)arg0 inTarget:(id)arg1 removeFootnoteReferenceCount:(NSUInteger)arg2 removeAutoNumberFootnoteCount:(NSUInteger)arg3 ;


@end


#endif