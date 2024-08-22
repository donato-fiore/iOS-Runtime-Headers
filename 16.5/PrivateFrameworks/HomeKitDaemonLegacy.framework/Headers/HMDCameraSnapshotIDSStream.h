// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTIDSSTREAM_H
#define HMDCAMERASNAPSHOTIDSSTREAM_H

@class HMFObject, NSString, HMFOSTransaction;
@protocol HMDIDSServiceDelegate, HMFLogging, HMDIDSService, OS_dispatch_queue;


#import "HMDCameraSnapshotSessionID.h"

@interface HMDCameraSnapshotIDSStream : HMFObject <HMDIDSServiceDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMDIDSService> *idsProxyService; // ivar: _idsProxyService
@property (readonly) HMDCameraSnapshotSessionID *sessionID; // ivar: _sessionID
@property (readonly) HMFOSTransaction *snapshotStreamTransaction; // ivar: _snapshotStreamTransaction
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 proxyService:(id)arg2 ;
-(id)logIdentifier;
-(void)dealloc;


@end


#endif