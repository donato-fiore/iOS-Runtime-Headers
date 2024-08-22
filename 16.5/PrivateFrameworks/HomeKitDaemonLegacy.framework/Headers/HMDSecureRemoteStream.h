// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSECUREREMOTESTREAM_H
#define HMDSECUREREMOTESTREAM_H

@class HMFMessageTransport, NSArray, NSString, NSDate, NSNumber, HMFPairingIdentity, NSUUID;
@protocol HMFLogging, HMFObject, OS_dispatch_queue;


#import "HMDDevice.h"
#import "HMDAWDRemoteSessionMetric.h"
#import "HMDUser.h"
#import "HMDSecureRemoteStreamInternal.h"

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject>

 {
    os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic) HMDDevice *currentDevice; // ivar: _currentDevice
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, getter=isIdle) BOOL idle; // ivar: _idle
@property (readonly, copy) NSDate *lastActivity; // ivar: _lastActivity
@property (readonly, copy) NSNumber *maximumRemoteStreams; // ivar: _maximumRemoteStreams
@property (retain, nonatomic) HMDAWDRemoteSessionMetric *metric; // ivar: _metric
@property (readonly, getter=isOpen) BOOL open; // ivar: _open
@property (retain, nonatomic) HMDUser *peer; // ivar: _peer
@property (retain) HMDDevice *peerDevice; // ivar: _peerDevice
@property (retain, nonatomic) HMFPairingIdentity *peerIdentity; // ivar: _peerIdentity
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property NSInteger qualityOfService; // ivar: _qualityOfService
@property (retain, nonatomic) HMDSecureRemoteStreamInternal *remoteSession; // ivar: _remoteSession
@property (readonly) NSInteger role; // ivar: _role
@property (readonly, copy, nonatomic) NSUUID *sessionID; // ivar: _sessionID
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSharedIdentities; // ivar: _supportsSharedIdentities


+(id)logCategory;
-(id)initWithCurrentDevice:(id)arg0 peerDevice:(id)arg1 clientMode:(BOOL)arg2 sessionID:(id)arg3 accountRegistry:(id)arg4 ;
-(id)logIdentifier;
-(void)__handleAccountRemovedFromRegistry:(id)arg0 ;
-(void)__handleDeviceRemovedFromAccount:(id)arg0 ;
-(void)__handleRemovedIdentity:(id)arg0 ;
-(void)_closeWithError:(id)arg0 ;
-(void)_configureWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)closedWithError:(id)arg0 ;
-(void)dealloc;
-(void)handleCompletedMessage:(id)arg0 options:(id)arg1 responsePayload:(id)arg2 error:(id)arg3 completionHandler:(id)arg4 ;
-(void)handleSecureMessage:(id)arg0 fromDevice:(id)arg1 fromTransport:(id)arg2 ;
-(void)sendMessage:(id)arg0 completionHandler:(id)arg1 ;
-(void)startAndInvokeOnQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)stop;


@end


#endif