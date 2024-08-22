// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAREMOTESTREAMSESSION_H
#define HMDCAMERAREMOTESTREAMSESSION_H

@class NSString;
@protocol HMFLogging, HMDCameraRemoteStreamReceiverProtocol, HMDCameraRemoteStreamSenderProtocol;


#import "HMDCameraStreamSession.h"

@interface HMDCameraRemoteStreamSession : HMDCameraStreamSession <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<HMDCameraRemoteStreamReceiverProtocol> *streamReceiver; // ivar: _streamReceiver
@property (readonly) NSObject<HMDCameraRemoteStreamSenderProtocol> *streamSender; // ivar: _streamSender
@property NSUInteger streamState; // ivar: _streamState
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)containsState:(NSInteger)arg0 ;
-(id)initWithSessionID:(id)arg0 reachabilityPath:(NSUInteger)arg1 streamSender:(id)arg2 streamReceiver:(id)arg3 remoteCapabilities:(id)arg4 streamPreference:(id)arg5 ;
-(id)logIdentifier;
-(id)stateAsString;
-(void)dealloc;
-(void)updateState:(NSInteger)arg0 ;


@end


#endif