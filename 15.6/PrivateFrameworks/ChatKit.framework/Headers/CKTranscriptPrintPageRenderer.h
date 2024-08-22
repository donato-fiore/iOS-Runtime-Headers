// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSCRIPTPRINTPAGERENDERER_H
#define CKTRANSCRIPTPRINTPAGERENDERER_H

@class UIPrintPageRenderer, UIScrollView;


#import "CKPrintTranscriptCollectionViewController.h"

@interface CKTranscriptPrintPageRenderer : UIPrintPageRenderer

@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (retain, nonatomic) CKPrintTranscriptCollectionViewController *transcriptCollectionViewController; // ivar: _transcriptCollectionViewController


+(void)renderViewWithText:(id)arg0 withOffsetVertical:(CGFloat)arg1 ;
-(NSInteger)numberOfPages;
-(id)initWithTranscriptCollectionViewController:(id)arg0 ;
-(void)drawPageAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;
-(void)drawScrollViewAtIndex:(NSInteger)arg0 inRect:(struct CGRect )arg1 ;


@end


#endif