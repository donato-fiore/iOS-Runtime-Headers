// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOFENCEACTIONRESOLUTIONRESULT_H
#define GEOFENCEACTIONRESOLUTIONRESULT_H

@class INEnumResolutionResult;



@interface GeoFenceActionResolutionResult : INEnumResolutionResult



+(id)confirmationRequiredWithGeoFenceActionToConfirm:(NSInteger)arg0 ;
+(id)successWithResolvedGeoFenceAction:(NSInteger)arg0 ;
-(id)initWithJSONDictionary:(id)arg0 forIntent:(id)arg1 ;


@end


#endif