// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TABOVERVIEWINTERPOLATEDLOCATION_H
#define TABOVERVIEWINTERPOLATEDLOCATION_H


#import <Foundation/Foundation.h>


@interface TabOverviewInterpolatedLocation : NSObject {
    ? _instantaneousTargetLocation;
    CGPoint _interactionFixedPoint;
    BOOL _interactionIncludesScale;
    BOOL _interacting;
    CGFloat _interactionLogScaleVelocity;
    CGFloat _previousInteractionLogScaleVelocity;
    CGPoint _interactionVelocity;
    CGFloat _lastInteractionTimestamp;
    ? _lastRenderedLocation;
    ? _interactionLocation;
}


@property (nonatomic) CGFloat decelerationFactor; // ivar: _decelerationFactor
@property (readonly, nonatomic) ? location; // ivar: _location
@property (nonatomic) CGFloat minimumTranslationSpeed; // ivar: _minimumTranslationSpeed
@property (nonatomic) ? targetLocation; // ivar: _targetLocation


-(BOOL)interpolateByTimeInterval:(CGFloat)arg0 roundingAtSize:(struct CGSize )arg1 zScaleFactor:(CGFloat)arg2 withHorizontalBounceFactor:(CGFloat)arg3 verticalBounceFactor:(CGFloat)arg4 constraints:(id)arg5 ;
-(BOOL)isInSteadyStateWithConstraints:(id)arg0 ;
// -(BOOL)isInSteadyStateWithConstraints:(id)arg0 epsilon:(unk)arg1  ;
-(CGFloat)decelerationFactorForTargetLocation:(struct ? )arg0 ;
-(id)description;
-(id)initWithLocation:(struct ? )arg0 decelerationFactor:(CGFloat)arg1 ;
-(void)beginInteractionAtTime:(CGFloat)arg0 ;
-(void)endInteraction;
-(void)endInteractionWithVelocity:(struct CGPoint )arg0 ;
-(void)moveBy:(struct CGPoint )arg0 atTime:(CGFloat)arg1 ;
-(void)moveInstantaneouslyBy:(struct CGPoint )arg0 ;
-(void)moveLogScaleBy:(CGFloat)arg0 centeringOffset:(struct CGPoint )arg1 withLastCenteringOffset:(struct CGPoint )arg2 atTime:(CGFloat)arg3 ;
-(void)moveLogScaleBy:(CGFloat)arg0 centeringOffset:(struct CGPoint )arg1 withLastCenteringOffset:(struct CGPoint )arg2 atTime:(CGFloat)arg3 shiftLocation:(BOOL)arg4 ;
-(void)resetRenderedLocation;
-(void)resetToLocation:(struct ? )arg0 ;
-(void)shiftTargetLocation:(struct ? )arg0 ;


@end


#endif