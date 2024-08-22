// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERAPARAMETERSELECTION_H
#define HMDCAMERAPARAMETERSELECTION_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDCameraAudioParameterSelection.h"
#import "HMDCameraStreamSessionID.h"
#import "HMDCameraVideoParameterSelection.h"

@interface HMDCameraParameterSelection : HMFObject <HMFLogging>



@property (retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection; // ivar: _audioParameterSelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection; // ivar: _videoParameterSelection


+(id)logCategory;
-(BOOL)findBestMatchWithProtocolParameters:(id)arg0 streamingCapabilities:(id)arg1 videoTierParameters:(id)arg2 ;
-(id)initWithSessionID:(id)arg0 ;
-(id)logIdentifier;
-(void)setReselectedConfigParameters:(id)arg0 videoTier:(id)arg1 ;
-(void)setSelectedConfigParameters:(id)arg0 ;
-(void)setSelectedEndPointSetupParameters:(id)arg0 videoNetworkConfig:(id)arg1 audioNetworkConfig:(id)arg2 ;


@end


#endif