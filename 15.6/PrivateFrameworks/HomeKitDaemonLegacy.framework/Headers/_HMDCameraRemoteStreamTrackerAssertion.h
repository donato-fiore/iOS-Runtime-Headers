// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _HMDCAMERAREMOTESTREAMTRACKERASSERTION_H
#define _HMDCAMERAREMOTESTREAMTRACKERASSERTION_H

@class HMFObject;


#import "HMDCameraStreamSessionID.h"
#import "HMDCameraRemoteStreamTracker.h"

@interface _HMDCameraRemoteStreamTrackerAssertion : HMFObject

@property (readonly) HMDCameraStreamSessionID *streamSessionID; // ivar: _streamSessionID
@property (weak) HMDCameraRemoteStreamTracker *streamTracker; // ivar: _streamTracker


-(id)initWithStreamTracker:(id)arg0 streamIdentifier:(id)arg1 ;
-(void)dealloc;


@end


#endif