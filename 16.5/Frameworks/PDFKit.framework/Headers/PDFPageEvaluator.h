// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFPAGEEVALUATOR_H
#define PDFPAGEEVALUATOR_H


#import <Foundation/Foundation.h>


@interface PDFPageEvaluator : NSObject {
    *CGPDFPage _page;
    CGRect _pageBounds;
    NSUInteger _pageArea;
    *CGPDFGState _gstate;
    *CGPDFOperatorTable _table;
    *CGPDFContentStream _cs;
    BOOL _scanned;
}


@property (nonatomic, getter=isCandidateForOCR) BOOL candidateForOCR; // ivar: _candidateForOCR
@property (readonly) *CGPDFContentStream contentStream; // ivar: _contentStream
@property (readonly) *CGPDFRState rstate; // ivar: _rstate


+(BOOL)isPageCandidateForOCR:(id)arg0 ;
+(id)asyncWorkQueue;
+(struct CGPDFOperatorTable *)createOperatorTable;
+(void)isPageCandidateForOCR:(id)arg0 completion:(id)arg1 ;
-(id)initWithPage:(id)arg0 ;
-(id)initWithParent:(id)arg0 ;
-(id)initWithParent:(id)arg0 stream:(struct CGPDFStream *)arg1 resources:(struct CGPDFDictionary *)arg2 ;
-(void)dealloc;
-(void)failCandidateForOCR:(struct CGPDFScanner *)arg0 ;
-(void)op_Do:(struct CGPDFScanner *)arg0 ;
-(void)op_Q:(struct CGPDFScanner *)arg0 ;
-(void)op_TJ:(struct CGPDFScanner *)arg0 ;
-(void)op_Tj:(struct CGPDFScanner *)arg0 ;
-(void)op_cm:(struct CGPDFScanner *)arg0 ;
-(void)op_doublequote:(struct CGPDFScanner *)arg0 ;
-(void)op_q:(struct CGPDFScanner *)arg0 ;
-(void)op_singlequote:(struct CGPDFScanner *)arg0 ;


@end


#endif