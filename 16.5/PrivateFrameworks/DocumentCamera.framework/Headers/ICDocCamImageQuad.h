// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICDOCCAMIMAGEQUAD_H
#define ICDOCCAMIMAGEQUAD_H

@class NSString;
@protocol ICDocCamImageQuad, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICDocCamImageQuad : NSObject <ICDocCamImageQuad, NSSecureCoding>



@property (nonatomic) CGPoint bottomLeft; // ivar: _bottomLeft
@property (nonatomic) CGPoint bottomRight; // ivar: _bottomRight
@property (nonatomic) CGRect boundingBox; // ivar: _boundingBox
@property (readonly, nonatomic) CGRect bounds;
@property (readonly, nonatomic) BOOL containsAngleOutOfValidThreshold;
@property (readonly, nonatomic) BOOL containsIntersectingLines;
@property (readonly, nonatomic) BOOL containsPointOutsideOfExtendedImageBounds;
@property (readonly, nonatomic) BOOL containsPointsLessThanDistanceThreshold;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isConvex;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) CGFloat mininumAllowedDistanceBetweenPoints;
@property (readonly) Class superclass;
@property (nonatomic) CGPoint topLeft; // ivar: _topLeft
@property (nonatomic) CGPoint topRight; // ivar: _topRight


+(BOOL)supportsSecureCoding;
+(id)quadFromCGRect:(struct CGRect )arg0 ;
+(id)quadFromVNRectangle:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flippedQuadFromSourceFrame:(struct CGRect )arg0 ;
-(id)imageQuadByScalingBy:(struct CGSize )arg0 ;
-(id)initWithBottomLeft:(struct CGPoint )arg0 bottomRight:(struct CGPoint )arg1 topLeft:(struct CGPoint )arg2 topRight:(struct CGPoint )arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)intersectionOfLineFrom:(struct CGPoint )arg0 to:(struct CGPoint )arg1 withLineFrom:(struct CGPoint )arg2 to:(struct CGPoint )arg3 ;
-(id)normalizedQuadByConvertingFromView:(id)arg0 toView:(id)arg1 toViewSize:(struct CGSize )arg2 ;
-(id)quadByConvertingFromView:(id)arg0 toView:(id)arg1 isNormalized:(BOOL)arg2 ;
-(struct CGPoint )pointRotatedClockwiseAroundOrigin:(struct CGPoint )arg0 ;
-(struct CGSize )perspectiveCorrectedSize;
-(void)addPointToQuadPoints:(struct CGPoint )arg0 ;
-(void)applyOrientation:(NSInteger)arg0 boundingBox:(struct CGRect )arg1 ;
-(void)clampQuadToRect:(struct CGRect )arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)flipPointsWithSourceFrame:(struct CGRect )arg0 ;
-(void)orientIfNecessary;
-(void)removeOrientation:(NSInteger)arg0 boundingBox:(struct CGRect )arg1 ;
-(void)rotatePointsByOrientation:(NSInteger)arg0 ;
-(void)rotatePointsClockwise;
-(void)rotatePointsRemovingOrientation:(NSInteger)arg0 ;


@end


#endif