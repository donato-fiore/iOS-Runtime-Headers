// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef DMTCONFIGURATIONPAYLOADBASE_H
#define DMTCONFIGURATIONPAYLOADBASE_H



#import "DMTConfigurationPrimitive.h"

@interface DMTConfigurationPayloadBase : DMTConfigurationPrimitive



+(id)concretePayloadWithDictionary:(id)arg0 error:(*id)arg1 ;
+(id)payloadSubclassesByPayloadType;


@end


#endif