// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMDEVICELISTRESTRICTIONSCOMMAND_STATUS_H
#define CEMDEVICELISTRESTRICTIONSCOMMAND_STATUS_H



#import "CEMPayloadBase.h"
#import "CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary.h"
#import "CEMDeviceListRestrictionsCommand_StatusProfileRestrictions.h"

@interface CEMDeviceListRestrictionsCommand_Status : CEMPayloadBase

@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary *statusGlobalRestrictions; // ivar: _statusGlobalRestrictions
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusProfileRestrictions *statusProfileRestrictions; // ivar: _statusProfileRestrictions


+(id)allowedReasons;
+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithGlobalRestrictions:(id)arg0 withProfileRestrictions:(id)arg1 ;
+(id)buildWithGlobalRestrictions:(id)arg0 withProfileRestrictions:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)serializePayload;


@end


#endif