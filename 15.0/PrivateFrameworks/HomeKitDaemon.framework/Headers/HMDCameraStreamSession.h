// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERASTREAMSESSION_H
#define HMDCAMERASTREAMSESSION_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDCameraProtocolParameters.h"
#import "HMDCameraStreamSessionID.h"
#import "HMDStreamingCapabilities.h"
#import "HMDStreamingManager.h"
#import "HMDCameraVideoTierParameters.h"

@interface HMDCameraStreamSession : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMDCameraProtocolParameters *protocolParameters; // ivar: _protocolParameters
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // ivar: _streamingCapabilities
@property (retain, nonatomic) HMDStreamingManager *streamingManager; // ivar: _streamingManager
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDCameraVideoTierParameters *videoTierParameters; // ivar: _videoTierParameters


+(id)logCategory;
-(id)initWithSessionID:(id)arg0 streamingTierType:(NSUInteger)arg1 remoteCapabilities:(id)arg2 streamPreference:(id)arg3 ;
-(id)logIdentifier;
-(id)negotiatedParameters;


@end


#endif