// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VKQUAD_H
#define VKQUAD_H

@class NSArray, UIBezierPath, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "VKQuad.h"

@interface VKQuad : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSArray *allPoints;
@property (readonly, nonatomic) CGFloat angleAveragedFromBottomAndTopEdges;
@property (readonly, nonatomic) CGFloat area;
@property (readonly, nonatomic) CGPoint bottomLeft; // ivar: _bottomLeft
@property (readonly, nonatomic) CGPoint bottomRight; // ivar: _bottomRight
@property (readonly, nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) CGFloat boundingBoxArea;
@property (readonly, nonatomic) BOOL containsIntersectingLines;
@property (readonly, nonatomic) CGFloat maxHeight;
@property (readonly, nonatomic) CGRect minimumBoundingRectWithoutRotation;
@property (readonly, nonatomic) UIBezierPath *path; // ivar: _path
@property (readonly, nonatomic) VKQuad *quadByAdjustingOrientation;
@property (readonly, nonatomic) VKQuadSideLength sideLength;
@property (readonly, nonatomic) NSString *summaryDescription;
@property (readonly, nonatomic) CGPoint topLeft; // ivar: _topLeft
@property (readonly, nonatomic) CGPoint topRight; // ivar: _topRight
@property (readonly, nonatomic) CGPoint vertexCentroid;


+(BOOL)supportsSecureCoding;
+(id)quadFromCGRect:(struct CGRect )arg0 ;
+(id)quadFromUnionOfQuads:(id)arg0 baselineAngle:(CGFloat)arg1 ;
+(struct CATransform3D )transformToConvertLayer:(id)arg0 intoQuad:(id)arg1 frame:(struct CGRect *)arg2 ;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)intersectsQuad:(id)arg0 ;
-(BOOL)isCompletelyInsideRect:(struct CGRect )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)distanceFromLine:(struct CGPoint *)arg0 toPoint:(struct CGPoint )arg1 ;
-(CGFloat)mininumDistanceToPoint:(struct CGPoint )arg0 ;
-(CGFloat)pointInsideValueForStartPoint:(struct CGPoint )arg0 endPoint:(struct CGPoint )arg1 testPoint:(struct CGPoint )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugQuickLookObject;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithBottomLeft:(struct CGPoint )arg0 bottomRight:(struct CGPoint )arg1 topLeft:(struct CGPoint )arg2 topRight:(struct CGPoint )arg3 ;
-(id)initWithCRNormalizedQuad:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithPoints:(id)arg0 ;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithTopLeft:(struct CGPoint )arg0 topRight:(struct CGPoint )arg1 bottomLeft:(struct CGPoint )arg2 bottomRight:(struct CGPoint )arg3 ;
-(id)intersectionOfLineFrom:(struct CGPoint )arg0 to:(struct CGPoint )arg1 withLineFrom:(struct CGPoint )arg2 to:(struct CGPoint )arg3 ;
-(id)normalizedQuadByConvertingFromView:(id)arg0 toView:(id)arg1 toViewSize:(struct CGSize )arg2 ;
-(id)normalizedQuadFromView:(id)arg0 ;
-(id)quadByConvertingFromNormalizedRectToView:(id)arg0 contentsRect:(struct CGRect )arg1 ;
-(id)quadByConvertingFromView:(id)arg0 toView:(id)arg1 isNormalized:(BOOL)arg2 ;
-(id)quadByFlippingPointsWithSourceFrame:(struct CGRect )arg0 ;
-(id)quadFromAddingPoint:(struct CGPoint )arg0 ;
-(id)quadFromRotatingAroundCentroidWithAngle:(CGFloat)arg0 ;
-(id)quadFromRotatingAroundOriginWithAngle:(CGFloat)arg0 ;
-(id)quadFromSubtractingPoint:(struct CGPoint )arg0 ;
-(id)quadFromUnionWithQuad:(id)arg0 ;
-(id)quadMultipliedBySize:(struct CGSize )arg0 ;
-(id)subquadFromRect:(struct CGRect )arg0 ;
-(struct CGAffineTransform )rotationTransformAndBoundingBox:(struct CGRect *)arg0 ;
-(void)calcluateBoundingBox;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif