// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIGRAPHICSIMAGERENDERER_H
#define UIGRAPHICSIMAGERENDERER_H



#import "UIGraphicsRenderer.h"

@interface UIGraphicsImageRenderer : UIGraphicsRenderer



+(Class)rendererContextClass;
+(struct CGContext *)contextWithFormat:(id)arg0 ;
+(void)prepareCGContext:(struct CGContext *)arg0 withRendererContext:(id)arg1 ;
-(BOOL)allowsImageOutput;
-(id)JPEGDataWithCompressionQuality:(CGFloat)arg0 actions:(id)arg1 ;
-(id)PNGDataWithActions:(id)arg0 ;
-(id)imageWithActions:(id)arg0 ;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 ;
-(id)initWithBounds:(struct CGRect )arg0 format:(id)arg1 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(id)initWithSize:(struct CGSize )arg0 format:(id)arg1 ;
-(void)_prepareContextForReuse:(struct CGContext *)arg0 ;
-(void)pushContext:(id)arg0 ;


@end


#endif