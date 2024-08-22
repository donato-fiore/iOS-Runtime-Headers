// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VNCREATEFACEPRINTREQUESTCONFIGURATION_H
#define VNCREATEFACEPRINTREQUESTCONFIGURATION_H



#import "VNImageBasedRequestConfiguration.h"

@interface VNCreateFaceprintRequestConfiguration : VNImageBasedRequestConfiguration

@property BOOL forceFaceprintCreation; // ivar: _forceFaceprintCreation


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithRequestClass:(Class)arg0 ;


@end


#endif