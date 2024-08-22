// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASNAPSHOTIDSSTREAMINITIATOR_H
#define HMDCAMERASNAPSHOTIDSSTREAMINITIATOR_H

@class NSString;
@protocol IDSServiceDelegate, HMFLogging, HMDCameraSnapshotIDSStreamInitiatorDelegate, OS_dispatch_queue;


#import "HMDCameraSnapshotIDSStream.h"
#import "HMDSnapshotFile.h"

@interface HMDCameraSnapshotIDSStreamInitiator : HMDCameraSnapshotIDSStream <IDSServiceDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HMDCameraSnapshotIDSStreamInitiatorDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSString *destinationID; // ivar: _destinationID
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *sendFileIdentifier; // ivar: _sendFileIdentifier
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 destinationID:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 ;
-(id)logIdentifier;
-(void)_callFileTransferFailed:(id)arg0 ;
-(void)_sendFile:(id)arg0 ;
-(void)dealloc;
-(void)sendFile:(id)arg0 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;


@end


#endif