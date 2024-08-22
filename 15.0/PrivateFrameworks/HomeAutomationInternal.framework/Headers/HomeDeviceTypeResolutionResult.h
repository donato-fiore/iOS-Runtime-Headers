// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HOMEDEVICETYPERESOLUTIONRESULT_H
#define HOMEDEVICETYPERESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface HomeDeviceTypeResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithHomeDeviceTypeToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedHomeDeviceType:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif