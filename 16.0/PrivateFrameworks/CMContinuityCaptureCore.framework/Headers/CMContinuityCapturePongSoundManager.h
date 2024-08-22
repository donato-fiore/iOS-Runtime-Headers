// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CMCONTINUITYCAPTUREPONGSOUNDMANAGER_H
#define CMCONTINUITYCAPTUREPONGSOUNDMANAGER_H

@class NSString;
@protocol CMContinuityCaptureProximityMonitorDelegate, OS_dispatch_source;

#import <Foundation/Foundation.h>

#import "CMContinuityCaptureProximityMonitor.h"
#import "CMContinuityCaptureRemoteCompositeDevice.h"

@interface CMContinuityCapturePongSoundManager : NSObject <CMContinuityCaptureProximityMonitorDelegate>

 {
    NSString *_playedPongForIdentifier;
    CMContinuityCaptureProximityMonitor *_proximityMonitor;
    NSObject<OS_dispatch_source> *_proximityTimer;
}


@property (readonly, weak, nonatomic) CMContinuityCaptureRemoteCompositeDevice *compositeDevice; // ivar: _compositeDevice


-(BOOL)_shouldUseNearbyInteractionToDeterminePongSound;
-(id)initWithCompositeDevice:(id)arg0 ;
-(void)_playPongSoundForIdentifier:(id)arg0 ;
-(void)device:(id)arg0 isNearby:(BOOL)arg1 ;
-(void)pongIfNeededWithShouldConsiderPongHistory:(BOOL)arg0 ;


@end


#endif