// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AKANNOTATIONRENDERERUTILITIES_H
#define AKANNOTATIONRENDERERUTILITIES_H


#import <Foundation/Foundation.h>


@interface AKAnnotationRendererUtilities : NSObject



+(struct CGPath *)newStandardStrokedBorderPathWithPath:(struct CGPath *)arg0 withStrokeWidth:(CGFloat)arg1 ;
+(struct CGPoint )_shadowDirectionForAnnotation:(id)arg0 ;
+(struct CGRect )outsetRectForShadow:(struct CGRect )arg0 onAnnotation:(id)arg1 ;
+(void)beginShadowInContext:(struct CGContext *)arg0 forAnnotation:(id)arg1 ;
+(void)endShadowInContext:(struct CGContext *)arg0 ;
+(void)setStandardLineDashInContext:(struct CGContext *)arg0 forLineWidth:(CGFloat)arg1 ;
+(void)setStandardLineStateInContext:(struct CGContext *)arg0 forLineWidth:(CGFloat)arg1 ;


@end


#endif