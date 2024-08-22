// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELMANAGEMENTSTATUSSUBSCRIPTIONSDECLARATION_STATUSITEM_H
#define RMMODELMANAGEMENTSTATUSSUBSCRIPTIONSDECLARATION_STATUSITEM_H

@class NSString;


#import "RMModelPayloadBase.h"

@interface RMModelManagementStatusSubscriptionsDeclaration_StatusItem : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadName; // ivar: _payloadName


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithName:(id)arg0 ;
+(id)buildWithName:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif