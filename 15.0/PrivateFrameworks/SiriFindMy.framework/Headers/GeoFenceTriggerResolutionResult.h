// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOFENCETRIGGERRESOLUTIONRESULT_H
#define GEOFENCETRIGGERRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface GeoFenceTriggerResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithGeoFenceTriggerToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedGeoFenceTrigger:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif