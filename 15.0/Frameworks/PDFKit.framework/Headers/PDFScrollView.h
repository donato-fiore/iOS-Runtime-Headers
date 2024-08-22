// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PDFSCROLLVIEW_H
#define PDFSCROLLVIEW_H

@class UIScrollView, NSString;
@protocol UIScrollViewDelegate;


#import "PDFScrollViewPrivate.h"

@interface PDFScrollView : UIScrollView <UIScrollViewDelegate>

 {
    PDFScrollViewPrivate *_private;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pdfDocumentView;
-(id)viewForZoomingInScrollView:(id)arg0 ;
-(void)centerAlign;
-(void)dealloc;
-(void)scrollViewDidEndDecelerating:(id)arg0 ;
-(void)scrollViewDidEndDragging:(id)arg0 willDecelerate:(BOOL)arg1 ;
-(void)scrollViewDidEndZooming:(id)arg0 withView:(id)arg1 atScale:(CGFloat)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewDidZoom:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillBeginZooming:(id)arg0 withView:(id)arg1 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setContentInset:(struct UIEdgeInsets )arg0 ;
-(void)setDocument:(id)arg0 ;
-(void)setForcesTopAlignment:(BOOL)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setPDFView:(id)arg0 ;
-(void)updateLayout;


@end


#endif