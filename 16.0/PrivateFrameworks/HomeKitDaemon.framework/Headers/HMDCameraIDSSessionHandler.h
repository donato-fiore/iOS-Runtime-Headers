// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDCAMERAIDSSESSIONHANDLER_H
#define HMDCAMERAIDSSESSIONHANDLER_H

@class HMFObject, NSString, IDSSession;
@protocol HMDIDSServiceDelegate, HMFLogging, HMDCameraRemoteStreamProtocol, HMDIDSService, OS_dispatch_queue;


#import "HMDCameraStreamSessionID.h"

@interface HMDCameraIDSSessionHandler : HMFObject <HMDIDSServiceDelegate, HMFLogging, HMDCameraRemoteStreamProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSSession *idsSession; // ivar: _idsSession
@property (readonly, nonatomic) NSObject<HMDIDSService> *idsStreamService; // ivar: _idsStreamService
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 workQueue:(id)arg1 ;
-(id)logIdentifier;
-(void)dealloc;
-(void)startKeepAlive;


@end


#endif