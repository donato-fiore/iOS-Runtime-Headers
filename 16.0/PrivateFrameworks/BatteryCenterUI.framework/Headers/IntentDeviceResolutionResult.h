// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INTENTDEVICERESOLUTIONRESULT_H
#define INTENTDEVICERESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface IntentDeviceResolutionResult : INObjectResolutionResult



+(BOOL)supportsSecureCoding;
+(id)confirmationRequiredWithIntentDeviceToConfirm:(id)arg0 ;
+(id)disambiguationWithIntentDevicesToDisambiguate:(id)arg0 ;
+(id)successWithResolvedIntentDevice:(id)arg0 ;


@end


#endif