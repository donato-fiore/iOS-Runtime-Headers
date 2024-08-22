// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELACCOUNTLDAPDECLARATION_SEARCHSETTINGSITEM_H
#define RMMODELACCOUNTLDAPDECLARATION_SEARCHSETTINGSITEM_H

@class NSString;


#import "RMModelPayloadBase.h"

@interface RMModelAccountLDAPDeclaration_SearchSettingsItem : RMModelPayloadBase

@property (copy, nonatomic) NSString *payloadScope; // ivar: _payloadScope
@property (copy, nonatomic) NSString *payloadSearchBase; // ivar: _payloadSearchBase
@property (copy, nonatomic) NSString *payloadVisibleDescription; // ivar: _payloadVisibleDescription


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithSearchBase:(id)arg0 ;
+(id)buildWithVisibleDescription:(id)arg0 searchBase:(id)arg1 scope:(id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif