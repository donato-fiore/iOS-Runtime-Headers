// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNRECTANGLEOBSERVATION_H
#define VNRECTANGLEOBSERVATION_H



#import "VNDetectedObjectObservation.h"

@interface VNRectangleObservation : VNDetectedObjectObservation

@property (readonly, nonatomic) CGPoint bottomLeft; // ivar: _bottomLeft
@property (readonly, nonatomic) CGPoint bottomRight; // ivar: _bottomRight
@property (readonly, nonatomic) CGPoint topLeft; // ivar: _topLeft
@property (readonly, nonatomic) CGPoint topRight; // ivar: _topRight


+(BOOL)boundingBoxIsCalculatedProperty;
+(BOOL)supportsSecureCoding;
+(id)defaultOriginatingRequestClassNameForRequestRevision:(NSUInteger)arg0 ;
+(id)observationWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 ;
+(id)rectangleObservationWithRequestRevision:(NSUInteger)arg0 topLeft:(struct CGPoint )arg1 bottomLeft:(struct CGPoint )arg2 bottomRight:(struct CGPoint )arg3 topRight:(struct CGPoint )arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)debugQuickLookObject;
-(id)initWithBoundingBox:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 boundingBox:(struct CGRect )arg1 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 topLeft:(struct CGPoint )arg1 bottomLeft:(struct CGPoint )arg2 bottomRight:(struct CGPoint )arg3 topRight:(struct CGPoint )arg4 ;
-(id)initWithOriginatingRequestSpecifier:(id)arg0 topLeft:(struct CGPoint )arg1 bottomLeft:(struct CGPoint )arg2 bottomRight:(struct CGPoint )arg3 topRight:(struct CGPoint )arg4 boundingBox:(struct CGRect )arg5 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 boundingBox:(struct CGRect )arg1 ;
-(id)initWithRequestRevision:(NSUInteger)arg0 topLeft:(struct CGPoint )arg1 bottomLeft:(struct CGPoint )arg2 bottomRight:(struct CGPoint )arg3 topRight:(struct CGPoint )arg4 ;
-(id)initWithTopLeft:(struct CGPoint )arg0 bottomLeft:(struct CGPoint )arg1 bottomRight:(struct CGPoint )arg2 topRight:(struct CGPoint )arg3 ;
-(id)vn_cloneObject;
-(void)encodeWithCoder:(id)arg0 ;
-(void)getTopLeftPoint:(struct CGPoint *)arg0 topRightPoint:(struct CGPoint *)arg1 bottomRightPoint:(struct CGPoint *)arg2 bottomLeftPoint:(struct CGPoint *)arg3 inTopLeftOrigin:(BOOL)arg4 orientation:(unsigned int)arg5 ;
-(void)setBoundingBox:(struct CGRect )arg0 ;
-(void)setBoundingBoxFromQuadrilateralPointsAtTopLeft:(struct CGPoint )arg0 topRight:(struct CGPoint )arg1 bottomRight:(struct CGPoint )arg2 bottomLeft:(struct CGPoint )arg3 ;


@end


#endif