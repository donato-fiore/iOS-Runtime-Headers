// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PDFPAGELAYERSELECTIONEFFECT_H
#define PDFPAGELAYERSELECTIONEFFECT_H



#import "PDFPageLayerEffect.h"

@interface PDFPageLayerSelectionEffect : PDFPageLayerEffect



-(id)initWithPDFPageLayer:(id)arg0 ;
-(void)_generateRects;
-(void)addSelection:(id)arg0 ;
-(void)setSelections:(id)arg0 ;
-(void)update;
-(void)updateColor:(NSUInteger)arg0 ;


@end


#endif