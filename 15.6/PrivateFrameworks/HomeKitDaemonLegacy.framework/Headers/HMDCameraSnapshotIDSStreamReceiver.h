// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTIDSSTREAMRECEIVER_H
#define HMDCAMERASNAPSHOTIDSSTREAMRECEIVER_H

@class NSString, IDSSession;
@protocol IDSServiceDelegate, IDSSessionDelegate, HMFLogging, HMDCameraSnapshotIDSStreamReceiverDelegate, OS_dispatch_queue;


#import "HMDCameraSnapshotIDSStream.h"
#import "HMDSnapshotFile.h"

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDCameraSnapshotIDSStreamReceiverDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSSession *idsSession; // ivar: _idsSession
@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 snapshotFile:(id)arg2 delegate:(id)arg3 queue:(id)arg4 ;
-(id)logIdentifier;
-(void)_callFileReceived:(id)arg0 ;
-(void)dealloc;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;


@end


#endif