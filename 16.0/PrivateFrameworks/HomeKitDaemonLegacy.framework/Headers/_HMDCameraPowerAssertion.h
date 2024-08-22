// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _HMDCAMERAPOWERASSERTION_H
#define _HMDCAMERAPOWERASSERTION_H

@class HMFObject;


#import "HMDCameraPowerAssertionHandler.h"
#import "HMDCameraSessionID.h"

@interface _HMDCameraPowerAssertion : HMFObject

@property (readonly, weak, nonatomic) HMDCameraPowerAssertionHandler *assertionHandler; // ivar: _assertionHandler
@property (readonly, nonatomic) HMDCameraSessionID *remoteRequestHandlerSessionID; // ivar: _remoteRequestHandlerSessionID


-(id)initWithPowerAssertionHandler:(id)arg0 remoteRequestHandlerSessionID:(id)arg1 ;
-(void)dealloc;


@end


#endif