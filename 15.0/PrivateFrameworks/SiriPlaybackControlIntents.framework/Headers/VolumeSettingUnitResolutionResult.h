// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOLUMESETTINGUNITRESOLUTIONRESULT_H
#define VOLUMESETTINGUNITRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface VolumeSettingUnitResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithVolumeSettingUnitToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedVolumeSettingUnit:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif