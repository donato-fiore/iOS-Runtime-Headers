// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRIMAGESPACEQUAD_H
#define CRIMAGESPACEQUAD_H

@class NSString;
@protocol CRCodable, CRQuad;

#import <Foundation/Foundation.h>


@interface CRImageSpaceQuad : NSObject <CRCodable, CRQuad>



@property (readonly, nonatomic) CGPoint bottomLeft; // ivar: _bottomLeft
@property (readonly, nonatomic) CGPoint bottomRight; // ivar: _bottomRight
@property (readonly, nonatomic) CGRect boundingBox;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGPoint midPoint;
@property (readonly, nonatomic) CGSize size;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGPoint topLeft; // ivar: _topLeft
@property (readonly, nonatomic) CGPoint topRight; // ivar: _topRight


+(BOOL)supportsSecureCoding;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)linesIntersectLine1P1:(struct CGPoint )arg0 line1P2:(struct CGPoint )arg1 line2P1:(struct CGPoint )arg2 line2P2:(struct CGPoint )arg3 ;
-(BOOL)overlapsQuad:(id)arg0 ;
-(BOOL)point:(struct CGPoint )arg0 onSegmentWithP1:(struct CGPoint )arg1 segmentP2:(struct CGPoint )arg2 ;
-(CGFloat)distanceFromPoint:(struct CGPoint )arg0 lineP1:(struct CGPoint )arg1 lineP2:(struct CGPoint )arg2 ;
-(CGFloat)shortestDistanceFromPoint:(struct CGPoint )arg0 ;
-(NSInteger)orientationOfP1:(struct CGPoint )arg0 p2:(struct CGPoint )arg1 p3:(struct CGPoint )arg2 ;
-(float)angle;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)crCodableDataRepresentation;
-(id)initWithBoundingBox:(struct CGRect )arg0 ;
-(id)initWithCRCodableDataRepresentation:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTopLeft:(struct CGPoint )arg0 topRight:(struct CGPoint )arg1 bottomRight:(struct CGPoint )arg2 bottomLeft:(struct CGPoint )arg3 ;
-(id)normalizedQuadForImageSize:(struct CGSize )arg0 ;
-(id)rotatedAroundPoint:(struct CGPoint )arg0 angle:(float)arg1 ;
-(id)unionWithQuad:(id)arg0 baselineAngle:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif