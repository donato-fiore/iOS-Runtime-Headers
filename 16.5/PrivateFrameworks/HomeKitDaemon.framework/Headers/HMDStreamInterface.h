// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSTREAMINTERFACE_H
#define HMDSTREAMINTERFACE_H

@class HMFObject, NSString;
@protocol HMFLogging, OS_dispatch_queue, HMDCameraRemoteStreamProtocol;


#import "HMDCameraStreamSessionID.h"

@interface HMDStreamInterface : HMFObject <HMFLogging>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) int localRTPSocket; // ivar: _localRTPSocket
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // ivar: _propertyQueue
@property (readonly, nonatomic) NSObject<HMDCameraRemoteStreamProtocol> *sessionHandler; // ivar: _sessionHandler
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)loadMiscFields:(id)arg0 ;
-(id)extractNetworkConfig:(int)arg0 peerNameExtractor:(*unk)arg1 ;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 delegateQueue:(id)arg2 sessionHandler:(id)arg3 ;
-(id)logIdentifier;
-(int)openSocketWithNetworkConfig:(id)arg0 ;
-(void)dealloc;
-(void)setStreamInterfaceState:(NSUInteger)arg0 ;


@end


#endif