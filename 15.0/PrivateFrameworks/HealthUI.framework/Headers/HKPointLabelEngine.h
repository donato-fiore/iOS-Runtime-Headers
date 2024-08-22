// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKPOINTLABELENGINE_H
#define HKPOINTLABELENGINE_H


#import <Foundation/Foundation.h>


@interface HKPointLabelEngine : NSObject

@property (readonly, nonatomic) CGRect boundingRegion; // ivar: _boundingRegion
@property (nonatomic) ? currentRenderingData; // ivar: _currentRenderingData
@property (nonatomic) CGPoint currentTransformedPoint; // ivar: _currentTransformedPoint
@property (nonatomic) CGPoint currentUntransformedPoint; // ivar: _currentUntransformedPoint
@property (nonatomic) BOOL isLabelShiftingEnabled; // ivar: _isLabelShiftingEnabled
@property (nonatomic) BOOL lastRenderOverlapped; // ivar: _lastRenderOverlapped
@property (nonatomic) ? previousRenderingData; // ivar: _previousRenderingData
@property (nonatomic) CGPoint previousTransformedPoint; // ivar: _previousTransformedPoint
@property (nonatomic) CGPoint previousUntransformedPoint; // ivar: _previousUntransformedPoint
@property (readonly, copy, nonatomic) id *sizeForValue; // ivar: _sizeForValue
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)processLastPoint;
-(BOOL)processTransformedPoint:(struct CGPoint )arg0 untransformedPoint:(struct CGPoint )arg1 ;
-(NSInteger)_slopeForPoint:(struct CGPoint )arg0 otherPoint:(struct CGPoint )arg1 ;
-(id)initWithBoundingRegion:(struct CGRect )arg0 isLabelShiftingEnabled:(BOOL)arg1 labelSizeBlock:(id)arg2 ;
-(struct ? )_computeRenderingDataForValue:(CGFloat)arg0 transformedPoint:(struct CGPoint )arg1 previousSlope:(NSInteger)arg2 nextSlope:(NSInteger)arg3 previousOptions:(NSInteger)arg4 ;
-(struct ? )renderingData;
-(void)_layoutTransformRectVerticallyForData:(struct ? *)arg0 withTransformedPoint:(struct CGPoint )arg1 ;
-(void)_transformRectIfNeededForData:(struct ? *)arg0 withTransformedPoint:(struct CGPoint )arg1 ;


@end


#endif