// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERASNAPSHOTREMOTERELAYRECEIVER_H
#define HMDCAMERASNAPSHOTREMOTERELAYRECEIVER_H

@class NSString;
@protocol HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging, HMDCameraSnapshotRemoteRelayReceiverDelegate;


#import "HMDCameraSnapshotReceiver.h"
#import "HMDCameraSnapshotIDSRelayReceiver.h"

@interface HMDCameraSnapshotRemoteRelayReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDCameraSnapshotRemoteRelayReceiverDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // ivar: _relayReceiver
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 options:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 ;
-(id)logIdentifier;
-(void)_callDidSaveImageDelegateWithError:(id)arg0 ;
-(void)_callGettingImageDelegate:(id)arg0 ;
-(void)_getSnapshot:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)getSnapshot:(NSUInteger)arg0 ;
-(void)relayReceiver:(id)arg0 didReceiveData:(id)arg1 error:(id)arg2 ;
-(void)relayReceiverDidAcceptIDSInvitation:(id)arg0 ;
-(void)relayReceiverIDSSessionDidStart:(id)arg0 ;
-(void)snapShotSendFailed:(id)arg0 ;


@end


#endif