// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTRECEIVER_H
#define HMDCAMERASNAPSHOTRECEIVER_H

@class HMFObject, NSString, NSDictionary, NSUUID;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDCameraResidentMessageHandler.h"
#import "HMDCameraSnapshotSessionID.h"
#import "HMDSnapshotFile.h"
#import "HMDCameraSnapshotMetrics.h"
#import "HMDSnapshotRequestHandler.h"

@interface HMDCameraSnapshotReceiver : HMFObject <HMFLogging>



@property (readonly, weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *options; // ivar: _options
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // ivar: _residentMessageHandler
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // ivar: _sessionID
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (retain, nonatomic) HMDCameraSnapshotMetrics *snapshotMetrics; // ivar: _snapshotMetrics
@property (readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler; // ivar: _snapshotRequestHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)_sendMessageWithName:(id)arg0 payload:(id)arg1 responseHandler:(id)arg2 ;
-(id)_sendRequestWithTierType:(NSUInteger)arg0 toResident:(id)arg1 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 options:(id)arg2 accessory:(id)arg3 delegateQueue:(id)arg4 uniqueIdentifier:(id)arg5 snapshotRequestHandler:(id)arg6 residentMessageHandler:(id)arg7 ;
-(id)logIdentifier;
-(void)_sendConfirmationToResident:(id)arg0 ;


@end


#endif