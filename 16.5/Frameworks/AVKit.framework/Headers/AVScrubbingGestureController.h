// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVSCRUBBINGGESTURECONTROLLER_H
#define AVSCRUBBINGGESTURECONTROLLER_H

@class NSTimer, NSString;
@protocol AVScrubbingGesturePlatformAdapterDelegate, AVScrubbingGestureControllerDelegate;

#import <Foundation/Foundation.h>

#import "AVScrubbingGesturePlatformAdapter.h"
#import "AVObservationController.h"
#import "AVScrubbingGestureConfiguration.h"
#import "AVPlayerController.h"

@interface AVScrubbingGestureController : NSObject <AVScrubbingGesturePlatformAdapterDelegate>

 {
    AVScrubbingGesturePlatformAdapter *_platformAdapter;
    AVObservationController *_observationController;
    AVScrubbingGestureConfiguration *_gestureConfiguration;
    float _currentScrubRate;
    float _startingMomentumRate;
    NSTimer *_scrubMomentumIncrementTimer;
    float _preScrubbingRate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<AVScrubbingGestureControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL enabled; // ivar: _enabled
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVPlayerController *playerController; // ivar: _playerController
@property (nonatomic) BOOL scrubsHaveMomentum; // ivar: _scrubsHaveMomentum
@property (readonly, nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;


-(BOOL)scrubbingGesturePlatformAdapterIsActivelyScrubbing:(id)arg0 ;
-(id)configurationForScrubbingGesturePlatformAdapter:(id)arg0 ;
-(id)initWithPlatformAdapter:(id)arg0 ;
-(void)dealloc;
-(void)reset;
-(void)scrubbingGesturePlatformAdapterDidBeginScrubbing:(id)arg0 ;
-(void)scrubbingGesturePlatformAdapterDidContinueScrubbing:(id)arg0 ;
-(void)scrubbingGesturePlatformAdapterDidEndScrubbing:(id)arg0 ;


@end


#endif