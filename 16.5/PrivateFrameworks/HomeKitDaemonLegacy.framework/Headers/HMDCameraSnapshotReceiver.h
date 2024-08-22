// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTRECEIVER_H
#define HMDCAMERASNAPSHOTRECEIVER_H

@class HMFObject, NSString, NSUUID;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDDevice.h"
#import "HMDCameraResidentMessageHandler.h"
#import "HMDCameraSnapshotSessionID.h"
#import "HMDSnapshotFile.h"
#import "HMDSnapshotRequestHandler.h"

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging>



@property (weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // ivar: _residentMessageHandler
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // ivar: _sessionID
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler; // ivar: _snapshotRequestHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 accessory:(id)arg2 delegateQueue:(id)arg3 uniqueIdentifier:(id)arg4 snapshotRequestHandler:(id)arg5 residentMessageHandler:(id)arg6 remoteDevice:(id)arg7 ;
-(id)logIdentifier;
-(void)_sendConfirmationToResident:(id)arg0 ;
-(void)_sendMessageWithName:(id)arg0 payload:(id)arg1 responseHandler:(id)arg2 ;
-(void)_sendRequestWithTierType:(NSUInteger)arg0 toResident:(id)arg1 ;


@end


#endif