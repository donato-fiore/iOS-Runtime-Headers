// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFOFIREWALLSETTINGSAPPLICATIONSITEM_H
#define CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFOFIREWALLSETTINGSAPPLICATIONSITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettingsApplicationsItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusAllowed; // ivar: _statusAllowed
@property (copy, nonatomic) NSString *statusBundleID; // ivar: _statusBundleID
@property (copy, nonatomic) NSString *statusName; // ivar: _statusName


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithAllowed:(id)arg0 withBundleID:(id)arg1 withName:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif