// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFOFIREWALLSETTINGS_H
#define CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFOFIREWALLSETTINGS_H

@class NSArray, NSNumber;


#import "CEMPayloadBase.h"

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusApplications; // ivar: _statusApplications
@property (copy, nonatomic) NSNumber *statusBlockAllIncoming; // ivar: _statusBlockAllIncoming
@property (copy, nonatomic) NSNumber *statusFirewallEnabled; // ivar: _statusFirewallEnabled
@property (copy, nonatomic) NSNumber *statusStealthMode; // ivar: _statusStealthMode


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithFirewallEnabled:(id)arg0 withBlockAllIncoming:(id)arg1 withStealthMode:(id)arg2 withApplications:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif