// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGSESSIONSTARTREQUEST_H
#define HMDCAMERARECORDINGSESSIONSTARTREQUEST_H

@class HMFObject, NSDictionary, NSNumber;



@interface HMDCameraRecordingSessionStartRequest : HMFObject

@property (readonly, copy) NSDictionary *homePresenceByPairingIdentity; // ivar: _homePresenceByPairingIdentity
@property (readonly) id *responseHandler; // ivar: _responseHandler
@property (readonly, copy) NSNumber *trigger; // ivar: _trigger


-(id)initWithHomePresenceByPairingIdentity:(id)arg0 trigger:(id)arg1 responseHandler:(id)arg2 ;


@end


#endif