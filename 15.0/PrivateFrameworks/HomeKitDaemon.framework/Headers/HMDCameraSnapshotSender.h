// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASNAPSHOTSENDER_H
#define HMDCAMERASNAPSHOTSENDER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDDevice.h"
#import "HMDCameraSnapshotSessionID.h"

@interface HMDCameraSnapshotSender : HMFObject <HMFLogging>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 device:(id)arg2 accessory:(id)arg3 delegateQueue:(id)arg4 uniqueIdentifier:(id)arg5 ;
-(id)logIdentifier;
-(void)_sendImageSendFailure:(id)arg0 ;


@end


#endif