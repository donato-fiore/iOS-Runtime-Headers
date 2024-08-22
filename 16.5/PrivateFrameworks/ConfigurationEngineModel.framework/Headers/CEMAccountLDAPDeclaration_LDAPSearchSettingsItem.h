// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMACCOUNTLDAPDECLARATION_LDAPSEARCHSETTINGSITEM_H
#define CEMACCOUNTLDAPDECLARATION_LDAPSEARCHSETTINGSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMAccountLDAPDeclaration_LDAPSearchSettingsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadLDAPSearchSettingDescription; // ivar: _payloadLDAPSearchSettingDescription
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingScope; // ivar: _payloadLDAPSearchSettingScope
@property (copy, nonatomic) NSString *payloadLDAPSearchSettingSearchBase; // ivar: _payloadLDAPSearchSettingSearchBase


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithLDAPSearchSettingSearchBase:(id)arg0 ;
+(id)buildWithLDAPSearchSettingDescription:(id)arg0 withLDAPSearchSettingSearchBase:(id)arg1 withLDAPSearchSettingScope:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif