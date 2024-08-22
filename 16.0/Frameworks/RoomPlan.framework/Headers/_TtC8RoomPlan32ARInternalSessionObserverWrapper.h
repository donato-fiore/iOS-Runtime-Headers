// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8ROOMPLAN32ARINTERNALSESSIONOBSERVERWRAPPER_H
#define _TTC8ROOMPLAN32ARINTERNALSESSIONOBSERVERWRAPPER_H

@protocol ARInternalSessionObserver, ARReplayConfigurationDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8RoomPlan32ARInternalSessionObserverWrapper : NSObject <ARInternalSessionObserver, ARReplayConfigurationDelegate>

 {
    ? captureSession;
}




-(BOOL)sessionShouldAttemptRelocalization:(id)arg0 ;
-(id)init;
-(void)replayConfigurationDidFinishReplaying:(id)arg0 ;
-(void)session:(id)arg0 didFailWithError:(id)arg1 ;
-(void)session:(id)arg0 didUpdateFrame:(id)arg1 ;
-(void)session:(id)arg0 didUpdateSpatialMappingPointClouds:(id)arg1 ;
-(void)session:(id)arg0 willRunWithConfiguration:(id)arg1 ;
-(void)sessionWasInterrupted:(id)arg0 ;


@end


#endif