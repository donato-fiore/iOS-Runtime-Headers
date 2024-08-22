// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERALOCALSTREAMSESSION_H
#define HMDCAMERALOCALSTREAMSESSION_H

@class NSString;
@protocol HMFLogging, HMDCameraRemoteStreamSenderProtocol;


#import "HMDCameraStreamSession.h"
#import "HMDCameraNetworkConfig.h"
#import "HMDCameraParameterSelection.h"

@interface HMDCameraLocalStreamSession : HMDCameraStreamSession <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMDCameraNetworkConfig *localNetworkConfig; // ivar: _localNetworkConfig
@property (retain) HMDCameraParameterSelection *parameterSelection; // ivar: _parameterSelection
@property (readonly) NSObject<HMDCameraRemoteStreamSenderProtocol> *streamSender; // ivar: _streamSender
@property NSUInteger streamState; // ivar: _streamState
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)containsState:(NSInteger)arg0 ;
-(id)initWithSessionID:(id)arg0 reachabilityPath:(NSUInteger)arg1 streamSender:(id)arg2 remoteCapabilities:(id)arg3 localNetworkConfig:(id)arg4 streamPreference:(id)arg5 ;
-(id)logIdentifier;
-(id)stateAsString;
-(void)dealloc;
-(void)updateState:(NSInteger)arg0 ;


@end


#endif