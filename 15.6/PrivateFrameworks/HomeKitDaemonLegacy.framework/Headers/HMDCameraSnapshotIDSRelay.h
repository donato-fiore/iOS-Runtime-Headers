// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTIDSRELAY_H
#define HMDCAMERASNAPSHOTIDSRELAY_H

@class HMFObject, NSString, IDSService, NSUUID, HMFOSTransaction;
@protocol HMFLogging, IDSServiceDelegate, OS_dispatch_queue;



@interface HMDCameraSnapshotIDSRelay : HMFObject <HMFLogging, IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) IDSService *idsStreamService; // ivar: _idsStreamService
@property (readonly) NSString *logIdentifier; // ivar: _logIdentifier
@property (readonly) NSUUID *sessionID; // ivar: _sessionID
@property (readonly) HMFOSTransaction *snapshotRelayTransaction; // ivar: _snapshotRelayTransaction
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 logIdentifier:(id)arg1 workQueue:(id)arg2 ;
-(void)dealloc;


@end


#endif