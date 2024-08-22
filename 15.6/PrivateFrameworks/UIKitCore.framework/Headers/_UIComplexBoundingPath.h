// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UICOMPLEXBOUNDINGPATH_H
#define _UICOMPLEXBOUNDINGPATH_H

@class UIBoundingPath;


#import "_UIBoundingPathBitmap.h"

@interface _UIComplexBoundingPath : UIBoundingPath {
    CGFloat _scale;
    NSInteger _orientation;
    _UIBoundingPathBitmap *_bitmap;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_validateBitmap:(id)arg0 withOrientation:(NSInteger)arg1 scale:(CGFloat)arg2 forCoordinateSpace:(id)arg3 ;
-(BOOL)isNonRectangular;
-(BOOL)validateForCoordinateSpace;
-(id)_imageRepresentation;
-(id)boundingPathForCoordinateSpace:(id)arg0 ;
-(id)boundingPathForCoordinateSpace:(id)arg0 withCornerRadii:(struct UIRectCornerRadii )arg1 orientation:(NSInteger)arg2 scale:(CGFloat)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinateSpace:(id)arg0 orientation:(NSInteger)arg1 scale:(CGFloat)arg2 boundingPathBitmap:(id)arg3 ;
-(id)initWithRectangularCoordinateSpace:(id)arg0 orientation:(NSInteger)arg1 scale:(CGFloat)arg2 ;
-(struct CGRect )_inscribedRectInBoundingPathAndRect:(struct CGRect )arg0 byInsettingRect:(struct CGRect )arg1 onEdges:(NSUInteger)arg2 withOptions:(NSUInteger)arg3 ;
-(struct CGRect )_largestInscribedPortraitPixelRectInBoundingPathWithPortraitPixelRect:(struct CGRect )arg0 portraitAspectRatio:(CGFloat)arg1 ;
-(struct CGRect )_largestInscribedRectInBoundingPathAndRect:(struct CGRect )arg0 withCenter:(struct CGPoint )arg1 aspectRatio:(CGFloat)arg2 ;
-(struct CGRect )_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(CGFloat)arg0 againstPortraitEdge:(NSUInteger)arg1 fromPortraitPixelRect:(struct CGRect )arg2 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii )arg3 ;
-(struct CGRect )_portaitPixelRectWithPixelMinimumPaddingFromBoundingPath:(CGFloat)arg0 inPortaitCorner:(NSUInteger)arg1 fromPortraitPixelRect:(struct CGRect )arg2 withPortraitPixelCornerRadii:(struct _UIIntegralCornerRadii )arg3 ;
-(struct CGRect )_rectTuckedAgainstEdge:(NSUInteger)arg0 ofBoundingPathAndRect:(struct CGRect )arg1 withSize:(CGFloat)arg2 cornerRadii:(struct UIRectCornerRadii )arg3 minimumPadding:(CGFloat)arg4 ;
-(struct CGRect )_rectTuckedInCorner:(NSUInteger)arg0 ofBoundingPathAndRect:(struct CGRect )arg1 withSize:(struct CGSize )arg2 cornerRadii:(struct UIRectCornerRadii )arg3 minimumPadding:(CGFloat)arg4 ;
-(struct _UIIntegralRect )_rectByHorizontallyInsettingPortraitPixelRect:(struct _UIIntegralRect )arg0 onPortraitEdges:(NSUInteger)arg1 performCompleteTest:(BOOL)arg2 ;
-(struct _UIIntegralRect )_rectByVerticallyInsettingPortraitPixelRect:(struct _UIIntegralRect )arg0 onPortraitEdges:(NSUInteger)arg1 performCompleteTest:(BOOL)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCoordinateSpace:(id)arg0 ;


@end


#endif