// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERASNAPSHOTLOCAL_H
#define HMDCAMERASNAPSHOTLOCAL_H

@class HMFObject, NSString;
@protocol HMFLogging, HMDCameraGetSnapshotProtocol, HMDCameraSnapshotLocalDelegate, OS_dispatch_queue, HMDSnapshotRequestHandlerProtocol;


#import "HMDAccessory.h"
#import "HMDCameraSnapshotSessionID.h"
#import "HMDSnapshotFile.h"

@interface HMDCameraSnapshotLocal : HMFObject <HMFLogging, HMDCameraGetSnapshotProtocol>



@property (weak, nonatomic) HMDAccessory *accessory; // ivar: _accessory
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMDCameraSnapshotLocalDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // ivar: _sessionID
@property (retain, nonatomic) HMDSnapshotFile *snapshotFile; // ivar: _snapshotFile
@property (readonly, nonatomic) NSObject<HMDSnapshotRequestHandlerProtocol> *snapshotRequestHandler; // ivar: _snapshotRequestHandler
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 accessory:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 snapshotRequestHandler:(id)arg5 ;
-(id)logIdentifier;
-(void)_getSnapshot:(NSUInteger)arg0 ;
-(void)_handleSnapshotFile:(id)arg0 error:(id)arg1 ;
-(void)dealloc;
-(void)getSnapshot:(NSUInteger)arg0 ;


@end


#endif