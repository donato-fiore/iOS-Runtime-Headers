// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFDEVICEAPPEARANCETYPERESOLUTIONRESULT_H
#define WFDEVICEAPPEARANCETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface WFDeviceAppearanceTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithDeviceAppearanceTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedDeviceAppearanceType:(NSInteger)arg0 ;


@end


#endif