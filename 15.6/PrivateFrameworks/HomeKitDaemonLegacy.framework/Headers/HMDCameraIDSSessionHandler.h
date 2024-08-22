// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAIDSSESSIONHANDLER_H
#define HMDCAMERAIDSSESSIONHANDLER_H

@class HMFObject, NSString, IDSSession, IDSService;
@protocol HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol, OS_dispatch_queue;


#import "HMDCameraStreamSessionID.h"

@interface HMDCameraIDSSessionHandler : HMFObject <HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) IDSSession *idsSession; // ivar: _idsSession
@property (readonly, nonatomic) IDSService *idsStreamService; // ivar: _idsStreamService
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