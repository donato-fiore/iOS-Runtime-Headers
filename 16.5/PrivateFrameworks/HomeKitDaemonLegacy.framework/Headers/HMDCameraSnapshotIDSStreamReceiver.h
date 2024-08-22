// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTIDSSTREAMRECEIVER_H
#define HMDCAMERASNAPSHOTIDSSTREAMRECEIVER_H

@class NSString;
@protocol HMFLogging, IDSServiceDelegate, HMDCameraSnapshotIDSStreamReceiverDelegate, OS_dispatch_queue;


#import "HMDCameraSnapshotIDSStream.h"
#import "HMDDevice.h"
#import "HMDSnapshotFile.h"

@interface HMDCameraSnapshotIDSStreamReceiver : HMDCameraSnapshotIDSStream <HMFLogging, IDSServiceDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraSnapshotIDSStreamReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDDevice *remoteDevice; // ivar: _remoteDevice
@property (readonly) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 proxyService:(id)arg2 snapshotFile:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 remoteDevice:(id)arg6 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 snapshotFile:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 remoteDevice:(id)arg5 ;
-(id)logIdentifier;
-(void)_callFileReceivedWithError:(id)arg0 ;
-(void)dealloc;
-(void)service:(id)arg0 account:(id)arg1 incomingResourceAtURL:(id)arg2 metadata:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;


@end


#endif