// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERASTREAMCONTROLMANAGER_H
#define HMDCAMERASTREAMCONTROLMANAGER_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDCameraStreamControlManagerDelegate, OS_dispatch_queue;


#import "HMDAccessory.h"
#import "HMDCameraStreamSessionID.h"
#import "HMDService.h"
#import "HMDCameraStreamMetrics.h"
#import "HMDCameraStreamSnapshotHandler.h"

@interface HMDCameraStreamControlManager : HMFObject <HMFLogging>



@property (weak) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraStreamControlManagerDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly, nonatomic) HMDService *streamManagementService; // ivar: _streamManagementService
@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics; // ivar: _streamMetrics
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // ivar: _streamSnapshotHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 streamSnapshotHandler:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 accessory:(id)arg5 streamManagementService:(id)arg6 isLocal:(BOOL)arg7 ;
-(id)logIdentifier;
-(id)managerProtocol;
-(void)_callStreamFirstFrameReceived;
-(void)_callStreamNegotiated:(id)arg0 ;
-(void)_callStreamReconfigured;
-(void)_callStreamRemoteConnectionSetup;
-(void)_callStreamStarted;
-(void)_callStreamStoppedWithError:(id)arg0 ;
-(void)_cleanUpStreamSessionWithError:(id)arg0 ;
-(void)_reportErrorCode:(NSInteger)arg0 ;
-(void)_reportInternalErrorCode:(NSInteger)arg0 ;


@end


#endif