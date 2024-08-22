// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWSCENESTABILITYMONITOR_H
#define BWSCENESTABILITYMONITOR_H


#import <Foundation/Foundation.h>


@interface BWSceneStabilityMonitor : NSObject {
    ? _aeMatrixStorage;
    ? _pixelSumStorage;
    int _lastAFStatus;
}


@property (readonly, nonatomic, getter=isAFCompleted) BOOL afCompleted; // ivar: _isAFCompletedOnLastFrame
@property (readonly, nonatomic) BOOL processedSceneMotion; // ivar: _processedSceneMotion
@property (readonly, nonatomic) float sceneMotionOffsetX; // ivar: _sceneMotionOffsetX
@property (readonly, nonatomic) float sceneMotionOffsetY; // ivar: _sceneMotionOffsetY
@property (readonly, nonatomic) float stabilityMetric; // ivar: _stabilityMetric
@property (readonly, nonatomic, getter=isStable) BOOL stable; // ivar: _isLastSceneStable
@property (readonly, nonatomic) ? stableStartTime; // ivar: _stableStartTime
@property (readonly, nonatomic) ? unstableStartTime; // ivar: _unstableStartTime


+(void)initialize;
-(BOOL)_calculateStabilityWithAEMatrixFromMetadata:(id)arg0 ;
-(BOOL)_calculateStabilityWithSceneMotionForPixelBuffer:(struct __CVBuffer *)arg0 pts:(struct ? )arg1 ;
-(id)init;
-(void)_resetAEMatrixStorage;
-(void)_resetPixelSumStorage;
-(void)_updateAFStatusFromMetadata:(id)arg0 ;
-(void)calculateStabilityWithPixelBuffer:(struct __CVBuffer *)arg0 pts:(struct ? )arg1 metadataDictionary:(id)arg2 forceSceneMotion:(BOOL)arg3 ;
-(void)dealloc;
-(void)reset;


@end


#endif