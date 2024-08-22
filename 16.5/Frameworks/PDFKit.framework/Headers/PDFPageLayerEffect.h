// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PDFPAGELAYEREFFECT_H
#define PDFPAGELAYEREFFECT_H

@class CALayer;


#import "PDFPageLayerEffectPrivate.h"

@interface PDFPageLayerEffect : CALayer {
    PDFPageLayerEffectPrivate *_private;
}




+(id)createFlashEffectForPDFLinkAnnotation:(id)arg0 withLayer:(id)arg1 forType:(NSInteger)arg2 ;
+(id)createPDFAnnotationLayerEffectForAnnotation:(id)arg0 withLayer:(id)arg1 ;
+(id)createPDFCoachmarkLayerEffectsWithFrame:(struct CGRect )arg0 withLayer:(id)arg1 ;
+(id)createPDFMarkupLayerEffectsForAnnotation:(id)arg0 withLayer:(id)arg1 ;
+(id)createPDFNoteLayerEffectForAnnotation:(id)arg0 withLayer:(id)arg1 ;
+(id)createPDFSelectionLayerEffectsForSelections:(id)arg0 withLayer:(id)arg1 ;
-(BOOL)shouldRotateContent;
-(id)UUID;
-(id)annotation;
-(id)initWithPDFPageLayer:(id)arg0 ;
-(id)pdfResult;
-(struct CGRect )pageFrame;
-(void)addSelection:(id)arg0 ;
-(void)setPageFrame:(struct CGRect )arg0 ;
-(void)setSelections:(id)arg0 ;
-(void)update;
-(void)updateColor:(NSUInteger)arg0 ;


@end


#endif