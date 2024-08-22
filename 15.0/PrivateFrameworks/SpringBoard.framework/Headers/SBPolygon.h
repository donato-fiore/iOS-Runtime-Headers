// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBPOLYGON_H
#define SBPOLYGON_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface SBPolygon : NSObject

@property (nonatomic, getter=_centroid, setter=_setCentroid:) CGPoint centroid; // ivar: _centroid
@property (readonly, nonatomic) CGFloat distanceOfFarthestPointFromCentroid;
@property (retain, nonatomic, getter=_points, setter=_setPoints:) NSMutableArray *mutablePoints; // ivar: _mutablePoints
@property (readonly, nonatomic, getter=_perimeter) CGFloat perimeter;
@property (readonly, nonatomic) NSUInteger pointCount;
@property (nonatomic, getter=_weightedCentroid, setter=_setWeightedCentroid:) CGPoint weightedCentroid; // ivar: _weightedCentroid
@property (retain, nonatomic, getter=_weights, setter=_setWeights:) NSMutableArray *weights; // ivar: _weights


+(id)_sortPoints:(id)arg0 ;
+(struct CGPoint )_pointAtIndex:(NSUInteger)arg0 ofPointArray:(id)arg1 ;
-(BOOL)_isLeftHanded;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)_baseOrientation;
-(CGFloat)_meanFingertipRowAngle;
-(CGFloat)_meanRadius;
-(CGFloat)_weightAtIndex:(NSUInteger)arg0 ;
-(NSUInteger)_thumbIndex;
-(id)description;
-(id)initWithPoints:(id)arg0 ;
-(id)initWithPoints:(struct CGPoint *)arg0 pointCount:(NSUInteger)arg1 ;
-(id)points;
-(struct CGPoint )_pointAtIndex:(NSUInteger)arg0 ;
-(void)_applyTransform:(struct CGAffineTransform )arg0 ;
-(void)_flipHorizontally;
-(void)_rotate:(CGFloat)arg0 ;
-(void)_scale:(CGFloat)arg0 ;
-(void)_translate:(struct CGPoint )arg0 ;
-(void)_updateCentroid;
-(void)_updateProperties;
-(void)_updateWeightedCentroid;
-(void)_updateWeights;
-(void)enumeratePointsUsingBlock:(id)arg0 ;


@end


#endif