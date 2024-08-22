// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDDEVICEHOMEKITSETUPSESSION_H
#define HMDDEVICEHOMEKITSETUPSESSION_H

@class HMFObject;


#import "HMDXPCClientConnection.h"

@interface HMDDeviceHomeKitSetupSession : HMFObject

@property (readonly, weak) HMDXPCClientConnection *clientConnection; // ivar: _clientConnection
@property (getter=isFirstResidentForHome) BOOL firstResidentForHome; // ivar: _firstResidentForHome
@property BOOL hasFailedRelayAttempt; // ivar: _hasFailedRelayAttempt
@property (readonly) BOOL shouldRelayRequest;


-(id)initWithFirstResidentForHome:(BOOL)arg0 clientConnection:(id)arg1 ;
-(void)markHasFailedRelayAttempt;


@end


#endif