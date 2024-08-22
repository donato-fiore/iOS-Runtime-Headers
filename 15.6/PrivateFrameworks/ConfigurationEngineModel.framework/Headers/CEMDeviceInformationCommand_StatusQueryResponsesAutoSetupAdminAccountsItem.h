// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSESAUTOSETUPADMINACCOUNTSITEM_H
#define CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSESAUTOSETUPADMINACCOUNTSITEM_H

@class NSString;


#import "CEMPayloadBase.h"

@interface CEMDeviceInformationCommand_StatusQueryResponsesAutoSetupAdminAccountsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *statusGUID; // ivar: _statusGUID
@property (copy, nonatomic) NSString *statusShortName; // ivar: _statusShortName


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithGUID:(id)arg0 withShortName:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif