// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFSLOWMOTIONRAMPCONFIGURATION_H
#define PFSLOWMOTIONRAMPCONFIGURATION_H


#import <Foundation/Foundation.h>


@interface PFSlowMotionRampConfiguration : NSObject

@property (readonly, nonatomic) NSUInteger exportNumIntermediateSteps; // ivar: _exportNumIntermediateSteps
@property (readonly, nonatomic) float exportRampCurveExponent; // ivar: _exportRampCurveExponent
@property (readonly, nonatomic) CGFloat introTime; // ivar: _introTime
@property (readonly, nonatomic) CGFloat outroTime; // ivar: _outroTime
@property (readonly, nonatomic) NSUInteger playbackNumIntermediateSteps; // ivar: _playbackNumIntermediateSteps
@property (readonly, nonatomic) float playbackRampCurveExponent; // ivar: _playbackRampCurveExponent
@property (readonly, nonatomic) CGFloat rampTime; // ivar: _rampTime
@property (readonly, nonatomic) CGFloat volumeSuppressionIntroTime; // ivar: _volumeSuppressionIntroTime
@property (readonly, nonatomic) CGFloat volumeSuppressionOutroTime; // ivar: _volumeSuppressionOutroTime


-(id)init;
-(id)initForRampDown:(BOOL)arg0 ;
-(void)computeRampToTargetRate:(float)arg0 forExport:(BOOL)arg1 outTimeSteps:(*id)arg2 outIntermediateRates:(*id)arg3 ;


@end


#endif