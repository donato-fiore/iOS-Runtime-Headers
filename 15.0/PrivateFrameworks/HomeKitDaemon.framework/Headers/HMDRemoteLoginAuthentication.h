// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDREMOTELOGINAUTHENTICATION_H
#define HMDREMOTELOGINAUTHENTICATION_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDDevice.h"
#import "HMDRemoteLoginMessageSender.h"

@interface HMDRemoteLoginAuthentication : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender; // ivar: _remoteMessageSender
@property (readonly, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 remoteDevice:(id)arg1 workQueue:(id)arg2 remoteMessageSender:(id)arg3 ;
-(id)logIdentifier;
-(void)authenticate;


@end


#endif