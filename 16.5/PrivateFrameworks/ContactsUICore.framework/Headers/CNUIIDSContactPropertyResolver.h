// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUIIDSCONTACTPROPERTYRESOLVER_H
#define CNUIIDSCONTACTPROPERTYRESOLVER_H


#import <Foundation/Foundation.h>

#import "CNUIIDSAvailabilityProvider.h"

@interface CNUIIDSContactPropertyResolver : NSObject

@property (readonly, nonatomic) CNUIIDSAvailabilityProvider *idsAvailabilityProvider; // ivar: _idsAvailabilityProvider


+(id)IDSRelevantPropertiesForContact:(id)arg0 ;
+(id)descriptorForCopyingStrippedContact:(id)arg0 ;
+(id)descriptorForRequiredKeys;
-(id)initWithIDSAvailabilityProvider:(id)arg0 ;
-(id)resolveAllFaceTimeIDSPropertiesForContact:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)resolveBestExpanseIDSPropertyForContact:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)resolveBestFaceTimeIDSPropertyForContact:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)resolveBestIDSPropertyForContact:(id)arg0 schedulerProvider:(id)arg1 usingAvailabilityProviderCall:(id)arg2 ;
-(id)resolveBestIMessageIDSPropertyForContact:(id)arg0 schedulerProvider:(id)arg1 ;
-(id)resolveIDSPropertiesForContact:(id)arg0 schedulerProvider:(id)arg1 usingAvailabilityProviderCall:(id)arg2 ;


@end


#endif