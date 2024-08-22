// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERAIDSSESSIONINVITERDEVICEVERIFIER_H
#define HMDCAMERAIDSSESSIONINVITERDEVICEVERIFIER_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDDevice.h"

@interface HMDCameraIDSSessionInviterDeviceVerifier : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDevice *expectedInviter; // ivar: _expectedInviter
@property (readonly) NSUInteger hash;
@property (readonly) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)canAcceptInvitationFromDeviceWithHandle:(id)arg0 forSessionWithIdentifier:(id)arg1 ;
-(id)initWithSessionID:(id)arg0 expectedInviter:(id)arg1 ;
-(id)logIdentifier;


@end


#endif