// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVICEPROXIMITYRESOLUTIONRESULT_H
#define DEVICEPROXIMITYRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface DeviceProximityResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithDeviceProximityToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedDeviceProximity:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif