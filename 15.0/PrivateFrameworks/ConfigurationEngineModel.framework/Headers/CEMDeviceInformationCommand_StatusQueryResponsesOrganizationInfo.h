// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSESORGANIZATIONINFO_H
#define CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSESORGANIZATIONINFO_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMDeviceInformationCommand_StatusQueryResponsesOrganizationInfo : CEMPayloadBase

@property (copy, nonatomic) NSString *statusOrganizationAddress; // ivar: _statusOrganizationAddress
@property (copy, nonatomic) NSString *statusOrganizationEmail; // ivar: _statusOrganizationEmail
@property (copy, nonatomic) NSString *statusOrganizationMagic; // ivar: _statusOrganizationMagic
@property (copy, nonatomic) NSString *statusOrganizationName; // ivar: _statusOrganizationName
@property (copy, nonatomic) NSString *statusOrganizationPhone; // ivar: _statusOrganizationPhone


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithOrganizationName:(id)arg0 ;
+(id)buildWithOrganizationName:(id)arg0 withOrganizationAddress:(id)arg1 withOrganizationPhone:(id)arg2 withOrganizationEmail:(id)arg3 withOrganizationMagic:(id)arg4 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif