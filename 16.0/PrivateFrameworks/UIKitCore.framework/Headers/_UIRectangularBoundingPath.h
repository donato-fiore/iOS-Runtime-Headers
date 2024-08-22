// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIRECTANGULARBOUNDINGPATH_H
#define _UIRECTANGULARBOUNDINGPATH_H

@class UIBoundingPath;



@interface _UIRectangularBoundingPath : UIBoundingPath

@property (readonly, nonatomic) CGRect boundingRect; // ivar: _boundingRect


+(BOOL)supportsSecureCoding;
-(BOOL)_validateBoundingRect:(struct CGRect )arg0 forCoordinateSpace:(id)arg1 ;
-(BOOL)isNonRectangular;
-(BOOL)validateForCoordinateSpace;
-(id)_imageRepresentation;
-(id)boundingPathForCoordinateSpace:(id)arg0 ;
-(id)boundingPathForCoordinateSpace:(id)arg0 withCornerRadii:(struct UIRectCornerRadii )arg1 orientation:(NSInteger)arg2 scale:(CGFloat)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCoordinateSpace:(id)arg0 boundingRect:(struct CGRect )arg1 ;
-(struct CGRect )_inscribedRectInBoundingPathAndRect:(struct CGRect )arg0 byInsettingRect:(struct CGRect )arg1 onEdges:(NSUInteger)arg2 withOptions:(NSUInteger)arg3 ;
-(struct CGRect )_largestInscribedRectInBoundingPathAndRect:(struct CGRect )arg0 withCenter:(struct CGPoint )arg1 aspectRatio:(CGFloat)arg2 ;
-(struct CGRect )_rectTuckedAgainstEdge:(NSUInteger)arg0 ofBoundingPathAndRect:(struct CGRect )arg1 withSize:(CGFloat)arg2 cornerRadii:(struct UIRectCornerRadii )arg3 minimumPadding:(CGFloat)arg4 ;
-(struct CGRect )_rectTuckedInCorner:(NSUInteger)arg0 ofBoundingPathAndRect:(struct CGRect )arg1 withSize:(struct CGSize )arg2 cornerRadii:(struct UIRectCornerRadii )arg3 minimumPadding:(CGFloat)arg4 ;
-(struct UIEdgeInsets )_centerEdgeInsetsOfBoundingPathAndRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setCoordinateSpace:(id)arg0 ;


@end


#endif