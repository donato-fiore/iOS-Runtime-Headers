// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASEROOMSIMULATIONVIEW_H
#define PHASEROOMSIMULATIONVIEW_H


#import <Foundation/Foundation.h>

#import "PHASEEngine.h"

@interface PHASERoomSimulationView : NSObject {
    RuntimeDebugParameters _runtimeDebugParameters;
}


@property (weak, nonatomic) PHASEEngine *engine; // ivar: _engine


-(id)initWithEngine:(id)arg0 ;
-(void)beginTrackingEnergyHistogram:(id)arg0 callback:(id)arg1 ;
-(void)beginTrackingImageSourceLocations:(id)arg0 callback:(id)arg1 ;
-(void)beginTrackingListenerEarlyResponseMetadata:(id)arg0 callback:(id)arg1 ;
-(void)beginTrackingListenerLateReverbMetadata:(id)arg0 callback:(id)arg1 ;
-(void)beginTrackingRayTraceIntersections:(id)arg0 callback:(id)arg1 ;
-(void)endTrackingEnergyHistogram:(id)arg0 ;
-(void)endTrackingImageSourceLocations:(id)arg0 ;
-(void)endTrackingListenerEarlyResponseMetadata:(id)arg0 ;
-(void)endTrackingListenerLateReverbMetadata:(id)arg0 ;
-(void)endTrackingRayTraceIntersections:(id)arg0 ;
-(void)setEarlyReflectionsAggregationCoef:(float)arg0 ;
-(void)setEarlyScatteringAggregationCoef:(float)arg0 ;
-(void)setEarlyScatteringEnabled:(NSUInteger)arg0 ;
-(void)setImageSourceOrder:(NSUInteger)arg0 ;
-(void)setLateReverbAggregationCoef:(float)arg0 ;
-(void)setRayTraceComputeTimeLimit:(float)arg0 ;
-(void)setRayTraceIntersectionHandleCountLimit:(NSUInteger)arg0 ;
-(void)setTailcorrectionEnabled:(NSUInteger)arg0 ;


@end


#endif