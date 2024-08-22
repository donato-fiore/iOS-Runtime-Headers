// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFOFIRMWAREPASSWORDSTATUS_H
#define CEMSECURITYINFORMATIONCOMMAND_STATUSSECURITYINFOFIRMWAREPASSWORDSTATUS_H

@class NSNumber;


#import "CEMPayloadBase.h"

@interface CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusAllowOroms; // ivar: _statusAllowOroms
@property (copy, nonatomic) NSNumber *statusChangePending; // ivar: _statusChangePending
@property (copy, nonatomic) NSNumber *statusPasswordExists; // ivar: _statusPasswordExists


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithPasswordExists:(id)arg0 withChangePending:(id)arg1 withAllowOroms:(id)arg2 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif