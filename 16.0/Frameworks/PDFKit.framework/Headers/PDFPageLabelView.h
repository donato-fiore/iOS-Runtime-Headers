// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDFPAGELABELVIEW_H
#define PDFPAGELABELVIEW_H

@class UIView;


#import "PDFPageLabelViewPrivate.h"

@interface PDFPageLabelView : UIView {
    PDFPageLabelViewPrivate *_private;
}




-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_startFade;
-(void)setCurrentPageNumber:(NSUInteger)arg0 forPageCount:(NSUInteger)arg1 ;
-(void)updateEffect;


@end


#endif