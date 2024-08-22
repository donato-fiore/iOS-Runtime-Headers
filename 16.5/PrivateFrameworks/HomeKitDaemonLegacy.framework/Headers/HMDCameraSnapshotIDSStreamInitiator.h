// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTIDSSTREAMINITIATOR_H
#define HMDCAMERASNAPSHOTIDSSTREAMINITIATOR_H

@class NSString;
@protocol HMFLogging, IDSServiceDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, OS_dispatch_queue;


#import "HMDCameraSnapshotIDSStream.h"
#import "HMDSnapshotFile.h"

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraSnapshotIDSStreamInitiatorDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *destinationID; // ivar: _destinationID
@property (readonly) NSUInteger hash;
@property (copy) NSString *sendFileIdentifier; // ivar: _sendFileIdentifier
@property (retain) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 destinationID:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 proxyService:(id)arg2 destinationID:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 ;
-(id)logIdentifier;
-(void)_callFileTransferFailedWithError:(id)arg0 ;
-(void)_sendFile:(id)arg0 ;
-(void)dealloc;
-(void)sendFile:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;


@end


#endif