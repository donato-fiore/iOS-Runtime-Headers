// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PFPARALLAXLAYOUTUTILITIES_H
#define PFPARALLAXLAYOUTUTILITIES_H


#import <Foundation/Foundation.h>


@interface PFParallaxLayoutUtilities : NSObject



+(BOOL)_rectIsValid:(struct CGRect )arg0 ;
+(BOOL)facePositionAcceptable:(struct CGRect )arg0 imageAspect:(CGFloat)arg1 ;
+(CGFloat)cropScoreThresholdForClassification:(NSUInteger)arg0 ;
+(CGFloat)timeOverlapCheckThresholdForTopRect:(struct CGRect )arg0 ;
+(NSUInteger)clockIntersectionFromTopRectMatteCoverage:(CGFloat)arg0 bottomRectMatteCoverage:(CGFloat)arg1 ;
+(id)computeLayoutWithHelper:(id)arg0 ;
+(id)computeLayoutsWithHelper:(id)arg0 ;
+(struct ? )facePositionLimits;
+(struct CGRect )effectiveAcceptableRectForClassification:(NSUInteger)arg0 havePetFaces:(BOOL)arg1 sourcePreferredCropRectNormalized:(struct CGRect )arg2 sourceAcceptableCropRectNormalized:(struct CGRect )arg3 sourceFaceAreaRectNormalized:(struct CGRect )arg4 ;
+(struct CGRect )effectivePreferredRectForClassification:(NSUInteger)arg0 havePetFaces:(BOOL)arg1 sourcePreferredCropRectNormalized:(struct CGRect )arg2 sourceAcceptableCropRectNormalized:(struct CGRect )arg3 sourceFaceAreaRectNormalized:(struct CGRect )arg4 ;


@end


#endif