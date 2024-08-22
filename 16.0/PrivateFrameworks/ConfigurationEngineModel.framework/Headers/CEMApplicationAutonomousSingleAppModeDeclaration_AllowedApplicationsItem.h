// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMAPPLICATIONAUTONOMOUSSINGLEAPPMODEDECLARATION_ALLOWEDAPPLICATIONSITEM_H
#define CEMAPPLICATIONAUTONOMOUSSINGLEAPPMODEDECLARATION_ALLOWEDAPPLICATIONSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMApplicationAutonomousSingleAppModeDeclaration_AllowedApplicationsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadBundleIdentifier; // ivar: _payloadBundleIdentifier
@property (copy, nonatomic) NSString *payloadTeamIdentifier; // ivar: _payloadTeamIdentifier


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg0 withTeamIdentifier:(id)arg1 ;
+(id)buildWithBundleIdentifier:(id)arg0 withTeamIdentifier:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif