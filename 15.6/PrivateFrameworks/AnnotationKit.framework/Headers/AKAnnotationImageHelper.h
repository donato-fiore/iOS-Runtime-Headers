// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AKANNOTATIONIMAGEHELPER_H
#define AKANNOTATIONIMAGEHELPER_H


#import <Foundation/Foundation.h>


@interface AKAnnotationImageHelper : NSObject



+(id)_imageOfSize:(struct CGSize )arg0 forAnnotation:(id)arg1 strokeWidth:(CGFloat)arg2 withFillColor:(BOOL)arg3 ;
+(id)imageForShapeTag:(NSInteger)arg0 ;
+(id)imageOfSize:(struct CGSize )arg0 forAnnotation:(id)arg1 ;
+(id)imageOfSize:(struct CGSize )arg0 forAnnotationTag:(NSInteger)arg1 ;
+(id)imageOfSize:(struct CGSize )arg0 forPath:(id)arg1 ;
+(id)imageOfSize:(struct CGSize )arg0 withFillColor:(id)arg1 forSignature:(id)arg2 ;
+(struct CGImage *)createImageOfAnnotation:(id)arg0 withScale:(CGFloat)arg1 ;
+(void)_drawFilledShapeImageForAnnotation:(id)arg0 inRect:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 ;
+(void)_drawImageForPath:(id)arg0 inRect:(struct CGRect )arg1 inContext:(struct CGContext *)arg2 ;
+(void)_drawImageForSignature:(id)arg0 withFillColor:(id)arg1 scale:(CGFloat)arg2 pathOffset:(struct CGPoint )arg3 inContext:(struct CGContext *)arg4 ;


@end


#endif