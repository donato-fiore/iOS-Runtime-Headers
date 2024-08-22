// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERAPARAMETERSELECTIONBASE_H
#define HMDCAMERAPARAMETERSELECTIONBASE_H

@class HMFObject, NSString;
@protocol HMFLogging;


#import "HMDCameraStreamSessionID.h"

@interface HMDCameraParameterSelectionBase : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)_filterFor:(id)arg0 preferenceList:(id)arg1 deviceSupportedTypes:(id)arg2 cameraSupportedTypes:(id)arg3 localPreferences:(id)arg4 ;
-(id)_selectCryptoSuite:(id)arg0 ;
-(id)_selectSRTPParameters:(id)arg0 ;
-(id)initWithSessionID:(id)arg0 ;


@end


#endif