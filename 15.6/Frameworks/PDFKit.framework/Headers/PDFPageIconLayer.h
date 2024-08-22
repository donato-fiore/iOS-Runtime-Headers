// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGEICONLAYER_H
#define PDFPAGEICONLAYER_H

@class CALayer;


#import "PDFDocument.h"

@interface PDFPageIconLayer : CALayer {
    int _pageIndex;
    CGSize _frameSize;
    BOOL _needsUpdate;
}


@property (weak, nonatomic) PDFDocument *document; // ivar: _document
@property (readonly, nonatomic) int pageIndex;


-(id)initWithSize:(struct CGSize )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsUpdate;
-(void)updateAsPageIndex:(int)arg0 forDocument:(id)arg1 ;


@end


#endif