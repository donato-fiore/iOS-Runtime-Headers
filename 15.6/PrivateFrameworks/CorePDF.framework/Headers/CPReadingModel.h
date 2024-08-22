// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPREADINGMODEL_H
#define CPREADINGMODEL_H

@class NSString, NSAttributedString, NSMutableArray;

#import <Foundation/Foundation.h>

#import "CPRMList.h"

@interface CPReadingModel : NSObject {
    NSInteger _count;
    *? _textLineRanges;
    *? _stringLineRanges;
    *NSInteger _pageNumbers;
    ? _pageRange;
    *CGPDFDocument _document;
    NSInteger _numberOfLines;
    NSInteger _numberOfParagraphs;
    NSInteger _numberOfColumns;
    NSInteger _numberOfLayoutAreas;
    NSString *_cachedString;
    NSAttributedString *_cachedAttributedString;
    NSInteger _pageNumber;
    NSInteger _pos;
    NSMutableArray *_tables;
    NSMutableArray *_lists;
    NSMutableArray *_headings;
    NSInteger _pageNumberMemo;
    ? _textRangeMemo;
    _NSRange _rangeMemo;
    CPRMList *_currentList;
}




-(NSInteger)findParagraph:(struct CGPDFNode *)arg0 inListArray:(id)arg1 ;
-(NSInteger)indexOfFirstLineOnPage:(NSUInteger)arg0 ;
-(NSInteger)lineIndexForPoint:(struct CGPoint )arg0 onPage:(NSUInteger)arg1 ;
-(NSUInteger)addRangeForLine:(NSUInteger)arg0 from:(NSUInteger)arg1 ;
-(NSUInteger)lineCount;
-(NSUInteger)lineForIndex:(NSUInteger)arg0 ;
-(NSUInteger)pageNumberForLine:(NSUInteger)arg0 ;
-(id)attributedString;
-(id)attributedStringForLine:(NSUInteger)arg0 ;
-(id)attributedStringForRange:(struct _NSRange )arg0 ;
-(id)headings;
-(id)initWithDocument:(struct CGPDFDocument *)arg0 ;
-(id)initWithDocument:(struct CGPDFDocument *)arg0 withPageRange:(struct _NSRange )arg1 ;
-(id)lists;
-(id)string;
-(id)stringForLine:(NSUInteger)arg0 ;
-(id)stringForRange:(struct _NSRange )arg0 ;
-(id)tables;
-(struct ? )mapStringRange:(struct _NSRange )arg0 ;
-(struct ? )textRangeForStringRange:(struct _NSRange )arg0 ;
-(struct CGPDFNode *)firstParagraphInList:(id)arg0 ;
-(struct CGRect )pdfBoundsForCursor:(struct _NSRange )arg0 ;
-(struct CGRect )pdfBoundsForLine:(NSUInteger)arg0 ;
-(struct CGRect )pdfBoundsForNewLine:(struct ? )arg0 ;
-(struct CGRect )pdfBoundsForRange:(struct _NSRange )arg0 ;
-(struct _NSRange )linesForPage:(NSUInteger)arg0 ;
-(struct _NSRange )pageRangeForStringRange:(struct ? )arg0 ;
-(struct _NSRange )rangeForLine:(NSUInteger)arg0 ;
-(struct _NSRange )stringRangeForLine:(NSUInteger)arg0 ;
-(struct _NSRange )stringRangeForTextRange:(struct ? )arg0 onPageNumber:(NSUInteger)arg1 ;
-(struct _NSRange )textRangeForLine:(NSUInteger)arg0 ;
-(void)addListsInColumn:(struct CGPDFNode *)arg0 ;
-(void)addRange:(struct ? )arg0 ;
-(void)addTable:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1 ;
-(void)buildModel:(struct CGPDFDocument *)arg0 ;
-(void)buildModel:(struct CGPDFDocument *)arg0 pageRange:(struct _NSRange )arg1 ;
-(void)clearCache;
-(void)dealloc;
-(void)headings:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1 ;
-(void)increamentLayoutAreaCount;
-(void)incrementColumnCount;
-(void)incrementLineCount;
-(void)incrementParagraphCount;
-(void)lists:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1 ;
-(void)stringLineRanges;
-(void)tables:(struct CGPDFNode *)arg0 layout:(struct CGPDFLayout *)arg1 ;
-(void)visitColumns:(struct CGPDFNode *)arg0 completion:(id)arg1 ;
-(void)visitLayoutAreas:(struct CGPDFNode *)arg0 completion:(id)arg1 ;
-(void)visitParagraphs:(struct CGPDFNode *)arg0 completion:(id)arg1 ;
-(void)visitTextLines:(struct CGPDFNode *)arg0 completion:(id)arg1 ;


@end


#endif