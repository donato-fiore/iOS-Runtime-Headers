// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASTREAMMANAGERSESSION_H
#define HMDCAMERASTREAMMANAGERSESSION_H

@class HMFObject, HMFMessage, NSString, NSNumber, HMFTimer;
@protocol HMFLogging, HMDCameraStreamControlManagerProtocol;


#import "HMDCameraStreamSessionID.h"
#import "HMDProcessInfo.h"

@interface HMDCameraStreamManagerSession : HMFObject <HMFLogging>



@property (retain) HMFMessage *currentMessage; // ivar: _currentMessage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *destinationID; // ivar: _destinationID
@property (readonly) NSUInteger hash;
@property (readonly) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (copy) NSNumber *slotIdentifier; // ivar: _slotIdentifier
@property (readonly) HMDProcessInfo *streamClientProcessInfo; // ivar: _streamClientProcessInfo
@property (readonly) NSObject<HMDCameraStreamControlManagerProtocol> *streamControlManager; // ivar: _streamControlManager
@property (readonly) HMFTimer *streamSetupTimer; // ivar: _streamSetupTimer
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)canStartWithError:(*id)arg0 ;
-(id)initWithSessionID:(id)arg0 destinationID:(id)arg1 streamClientProcessInfo:(id)arg2 streamControlManager:(id)arg3 setupWaitPeriod:(CGFloat)arg4 ;
-(id)initWithSessionID:(id)arg0 destinationID:(id)arg1 streamClientProcessInfo:(id)arg2 streamControlManager:(id)arg3 streamSetupTimer:(id)arg4 ;
-(id)logIdentifier;


@end


#endif