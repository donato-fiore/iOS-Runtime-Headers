// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSECURITYFIREWALLDECLARATION_APPLICATIONSITEM_H
#define CEMSECURITYFIREWALLDECLARATION_APPLICATIONSITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMSecurityFirewallDeclaration_ApplicationsItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *payloadAllowed; // ivar: _payloadAllowed
@property (copy, nonatomic) NSString *payloadApplication; // ivar: _payloadApplication
@property (copy, nonatomic) NSString *payloadBundleID; // ivar: _payloadBundleID


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithApplication:(id)arg0 withAllowed:(id)arg1 withBundleID:(id)arg2 ;
+(id)buildWithApplication:(id)arg0 withAllowed:(id)arg1 withBundleID:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif