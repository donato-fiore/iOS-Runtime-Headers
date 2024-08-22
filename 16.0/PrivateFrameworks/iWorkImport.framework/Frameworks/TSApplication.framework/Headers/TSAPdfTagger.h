// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSAPDFTAGGER_H
#define TSAPDFTAGGER_H

@class NSMutableArray, NSString;
@protocol TSDPdfTagger, TSWPPdfTagger, TSTPdfTagger, TSCHPdfTagger, TSAPdfTagger;

#import <Foundation/Foundation.h>

#import "TSARenderingExporter.h"

@interface TSAPdfTagger : NSObject <TSDPdfTagger, TSWPPdfTagger, TSTPdfTagger, TSCHPdfTagger, TSAPdfTagger>

 {
    BOOL _stateIsValid;
    NSMutableArray *_contextStack;
    NSMutableArray *_tagStack;
    NSMutableArray *_paragraphLevelResolverStack;
}


@property (nonatomic) *CGContext CGContext; // ivar: _CGContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) TSARenderingExporter *exporter; // ivar: _exporter
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger taggingPreventionDepth; // ivar: _taggingPreventionDepth


+(BOOL)isHeaderTag:(int)arg0 ;
+(BOOL)isHeadingStyle:(id)arg0 headingIndex:(*int)arg1 ;
+(BOOL)shouldMapDrawableRep:(id)arg0 ;
+(BOOL)totalCellNumberInAllTablesExceedsMaxAllowedInDocument:(id)arg0 ;
-(BOOL)charIndexIsAtEndOfParagraph:(NSUInteger)arg0 ;
-(BOOL)charIndexIsAtStartOfParagraph:(NSUInteger)arg0 ;
-(BOOL)currentParagraphHasContents;
-(BOOL)currentParagraphNeedsSpans;
-(BOOL)needsSeparateRunsForLineFragmentWithRange:(struct _NSRange )arg0 ;
-(BOOL)textStorageChunkIsFootnote:(id)arg0 ;
-(BOOL)topOfContextStackIsParagraph;
-(NSUInteger)depthOfContext:(id)arg0 ;
-(NSUInteger)depthOfTopmostTagOfType:(int)arg0 ;
-(NSUInteger)indexOfFirstVisibleCharInParagraphAtOrAfterCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)indexOfLastVisibleCharInParagraphBeforeCharIndex:(NSUInteger)arg0 ;
-(NSUInteger)tagStackHeight;
-(id)canvas;
-(id)documentRoot;
-(id)imager;
-(id)initWithRenderingExporter:(id)arg0 ;
-(id)regularDrawableRepForObjectRep:(id)arg0 ;
-(id)retrieveHighestInfoAtCharIndex:(NSUInteger)arg0 returnTagType:(*int)arg1 ;
-(id)state;
-(id)topOfContextStack;
-(id)topOfContextStackWithExpectedClass:(Class)arg0 ;
-(id)topmostColumn;
-(id)topmostColumnContext;
-(id)topmostContextOfClass:(Class)arg0 ;
-(id)topmostParagraphContext;
-(id)topmostParagraphLevelResolver;
-(id)topmostTextStorage;
-(id)topmostTocChunkContext;
-(int)tagTypeAtDepth:(NSUInteger)arg0 ;
-(int)topmostTagType;
-(struct _NSRange )topmostColumnRange;
-(void)advanceParagraphEnumeratorToCharIndex:(NSUInteger)arg0 ;
-(void)assertCharIndexRelativeToParagraphRange:(BOOL)arg0 ;
-(void)assertTopOfContextStackIsParagraph:(BOOL)arg0 ;
-(void)beginAncillaryTextRunWithRange:(struct _NSRange )arg0 baseTextRange:(struct _NSRange )arg1 ;
-(void)beginChartTitle;
-(void)beginCheckboxCell:(BOOL)arg0 ;
-(void)beginComment;
-(void)beginDrawable:(id)arg0 ;
-(void)beginFreehandDrawing:(id)arg0 ;
-(void)beginLineFragmentBodyWithRange:(struct _NSRange )arg0 ;
-(void)beginLineFragmentWithRange:(struct _NSRange )arg0 ;
-(void)beginListLabel;
-(void)beginMultiParagraphEntityWithLineFragmentRange:(struct _NSRange )arg0 ;
-(void)beginObject:(id)arg0 ;
-(void)beginOneColumnText:(id)arg0 column:(id)arg1 limitSelection:(id)arg2 ;
-(void)beginPage;
-(void)beginParagraphBodyWithLineFragmentRange:(struct _NSRange )arg0 ;
-(void)beginParagraphWithLineFragmentRange:(struct _NSRange )arg0 ;
-(void)beginPencilAnnotation:(id)arg0 ;
-(void)beginPrimaryTextRunWithRange:(struct _NSRange )arg0 hasActualContents:(BOOL)arg1 ;
-(void)beginRatingCell:(CGFloat)arg0 ;
-(void)beginRubyRunWithRange:(struct _NSRange )arg0 baseTextRange:(struct _NSRange )arg1 ;
-(void)beginTOCChunk:(id)arg0 ;
-(void)beginTableCell:(id)arg0 withCellID:(struct TSUCellCoord )arg1 cellHasContents:(BOOL)arg2 cellIsPrimary:(BOOL)arg3 ;
-(void)beginTableChunk:(id)arg0 ;
-(void)beginTableLayoutSpace:(id)arg0 ;
-(void)beginTableNameForChunk:(id)arg0 ;
-(void)beginTableRow:(unsigned int)arg0 ;
-(void)beginTagWithType:(int)arg0 ;
-(void)beginTagWithType:(int)arg0 tagProperties:(id)arg1 ;
-(void)beginTateChuYokoRunWithRange:(struct _NSRange )arg0 baseTextRange:(struct _NSRange )arg1 ;
-(void)beginTextColumn:(id)arg0 limitSelection:(id)arg1 ;
-(void)beginTextStorageChunk:(id)arg0 limitSelection:(id)arg1 ;
// -(void)dispatchObject:(id)arg0 tableBlock:(id)arg1 tocBlock:(unk)arg2 drawableBlock:(id)arg3  ;
-(void)endAncillaryTextRunWithRange:(struct _NSRange )arg0 baseTextRange:(struct _NSRange )arg1 ;
-(void)endChartTitle;
-(void)endCheckboxCell;
-(void)endComment;
-(void)endDrawable:(id)arg0 ;
-(void)endFreehandDrawing:(id)arg0 ;
-(void)endLineFragmentBodyWithRange:(struct _NSRange )arg0 ;
-(void)endLineFragmentWithRange:(struct _NSRange )arg0 ;
-(void)endListLabel;
-(void)endMultiParagraphEntityWithLineFragmentRange:(struct _NSRange )arg0 ;
-(void)endObject:(id)arg0 ;
-(void)endOneColumnText:(id)arg0 column:(id)arg1 ;
-(void)endPage;
-(void)endParagraphBodyWithLineFragmentRange:(struct _NSRange )arg0 ;
-(void)endParagraphWithLineFragmentRange:(struct _NSRange )arg0 ;
-(void)endPencilAnnotation:(id)arg0 ;
-(void)endPrimaryTextRunWithRange:(struct _NSRange )arg0 hasActualContents:(BOOL)arg1 ;
-(void)endRatingCell;
-(void)endRubyRunWithRange:(struct _NSRange )arg0 baseTextRange:(struct _NSRange )arg1 ;
-(void)endTOCChunk:(id)arg0 ;
-(void)endTableCell:(id)arg0 withCellID:(struct TSUCellCoord )arg1 cellHasContents:(BOOL)arg2 cellIsPrimary:(BOOL)arg3 ;
-(void)endTableChunk:(id)arg0 ;
-(void)endTableLayoutSpace:(id)arg0 ;
-(void)endTableNameForChunk:(id)arg0 ;
-(void)endTableRow:(unsigned int)arg0 ;
-(void)endTag;
-(void)endTateChuYokoRunWithRange:(struct _NSRange )arg0 baseTextRange:(struct _NSRange )arg1 ;
-(void)endTextColumn:(id)arg0 ;
-(void)endTextStorageChunk:(id)arg0 ;
-(void)executeBlock:(id)arg0 ;
-(void)executeBlockForCurrentParagraph:(id)arg0 ;
-(void)handleDropCapAdornment:(id)arg0 ;
// -(void)handleObject:(id)arg0 tableBlock:(id)arg1 tocBlock:(unk)arg2 drawableBlock:(id)arg3  ;
-(void)popContextWithExpectedClass:(Class)arg0 ;
-(void)popTagStackUntilReachingHeight:(NSUInteger)arg0 ;
-(void)pushContext:(id)arg0 ;
-(void)restoreStateFromTopOfContextStackWithExpectedClass:(Class)arg0 ;
-(void)setState:(id)arg0 ;
-(void)setUp;


@end


#endif