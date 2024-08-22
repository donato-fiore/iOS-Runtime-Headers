// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASIGNIFICANTEVENTFETCHHEROFRAMECONTEXT_H
#define HMDCAMERASIGNIFICANTEVENTFETCHHEROFRAMECONTEXT_H

@class HMFObject, HMCameraSignificantEvent;


#import "HMDCameraSnapshotIDSRelayReceiver.h"

@interface HMDCameraSignificantEventFetchHeroFrameContext : HMFObject

@property (readonly) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // ivar: _relayReceiver
@property (readonly) HMCameraSignificantEvent *significantEvent; // ivar: _significantEvent


-(id)initWithSignificantEvent:(id)arg0 relayReceiver:(id)arg1 ;


@end


#endif