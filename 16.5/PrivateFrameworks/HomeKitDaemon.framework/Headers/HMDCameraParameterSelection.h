// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDCAMERAPARAMETERSELECTION_H
#define HMDCAMERAPARAMETERSELECTION_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDCameraStreamSessionID.h"

@interface HMDCameraParameterSelection : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


+(id)_selectedCryptoSuiteFromCameraCryptoSuites:(id)arg0 ;
+(id)logCategory;
+(id)selectedParametersFromPreferredParameters:(id)arg0 deviceSupportedParameters:(id)arg1 cameraSupportedParameters:(id)arg2 overriddenParameters:(id)arg3 parameterDescription:(id)arg4 ;
+(id)selectedSRTPParametersFromCryptoSuites:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 ;
-(id)logIdentifier;


@end


#endif