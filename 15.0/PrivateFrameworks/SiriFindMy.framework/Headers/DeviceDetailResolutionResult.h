// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DEVICEDETAILRESOLUTIONRESULT_H
#define DEVICEDETAILRESOLUTIONRESULT_H

@class INObjectResolutionResult;



@interface DeviceDetailResolutionResult : INObjectResolutionResult



+(id)confirmationRequiredWithDeviceDetailToConfirm:(id)arg0 ;
+(id)confirmationRequiredWithObjectToConfirm:(id)arg0 ;
+(id)disambiguationWithDeviceDetailsToDisambiguate:(id)arg0 ;
+(id)disambiguationWithObjectsToDisambiguate:(id)arg0 ;
+(id)successWithResolvedDeviceDetail:(id)arg0 ;
+(id)successWithResolvedObject:(id)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif