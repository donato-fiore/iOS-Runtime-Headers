// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASTREAMMANAGERSESSION_H
#define HMDCAMERASTREAMMANAGERSESSION_H

@class HMFObject, HMFMessage, NSString, HMFTimer;
@protocol HMFLogging, HMDCameraStreamControlManagerProtocol;


#import "HMDCameraStreamSessionID.h"
#import "HMDXPCClientConnection.h"

@interface HMDCameraStreamManagerSession : HMFObject <HMFLogging>



@property (retain) HMFMessage *currentMessage; // ivar: _currentMessage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *destinationID; // ivar: _destinationID
@property (readonly) NSUInteger hash;
@property (readonly) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (retain) HMDXPCClientConnection *streamClientConnection; // ivar: _streamClientConnection
@property (readonly) NSObject<HMDCameraStreamControlManagerProtocol> *streamControlManager; // ivar: _streamControlManager
@property (readonly) HMFTimer *streamSetupTimer; // ivar: _streamSetupTimer
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)canStartWithError:(*id)arg0 ;
-(id)initWithSessionID:(id)arg0 destinationID:(id)arg1 streamClientConnection:(id)arg2 streamControlManager:(id)arg3 setupWaitPeriod:(CGFloat)arg4 ;
-(id)initWithSessionID:(id)arg0 destinationID:(id)arg1 streamClientConnection:(id)arg2 streamControlManager:(id)arg3 streamSetupTimer:(id)arg4 ;
-(id)logIdentifier;


@end


#endif