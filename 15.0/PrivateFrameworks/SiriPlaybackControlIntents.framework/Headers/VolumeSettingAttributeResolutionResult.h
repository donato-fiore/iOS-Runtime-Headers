// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VOLUMESETTINGATTRIBUTERESOLUTIONRESULT_H
#define VOLUMESETTINGATTRIBUTERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface VolumeSettingAttributeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithVolumeSettingAttributeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedVolumeSettingAttribute:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif