// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMACTIVATIONBASICDECLARATION_STATUSINSTALLEDCONFIGURATIONSITEM_H
#define CEMACTIVATIONBASICDECLARATION_STATUSINSTALLEDCONFIGURATIONSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMActivationBasicDeclaration_StatusInstalledConfigurationsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *statusIdentifier; // ivar: _statusIdentifier
@property (copy, nonatomic) NSString *statusServerHash; // ivar: _statusServerHash


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 withServerHash:(id)arg1 ;
+(id)buildWithIdentifier:(id)arg0 withServerHash:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif