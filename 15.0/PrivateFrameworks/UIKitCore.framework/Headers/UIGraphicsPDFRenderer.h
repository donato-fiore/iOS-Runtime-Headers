// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIGRAPHICSPDFRENDERER_H
#define UIGRAPHICSPDFRENDERER_H



#import "UIGraphicsRenderer.h"

@interface UIGraphicsPDFRenderer : UIGraphicsRenderer



+(Class)rendererContextClass;
+(struct CGContext *)contextWithFormat:(id)arg0 ;
+(void)prepareCGContext:(struct CGContext *)arg0 withRendererContext:(id)arg1 ;
// -(BOOL)writePDFToURL:(id)arg0 withActions:(id)arg1 error:(unk)arg2  ;
-(id)PDFDataWithActions:(id)arg0 ;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(id)initWithBounds:(struct CGRect )arg0 format:(id)arg1 ;
-(void)popContext:(id)arg0 ;
-(void)pushContext:(id)arg0 ;


@end


#endif