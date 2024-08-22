// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSVALUEDICTIONARY_H
#define CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSVALUEDICTIONARY_H

@class NSDictionary;


#import "CEMPayloadBase.h"

@interface CEMDeviceListRestrictionsCommand_StatusValueDictionary : CEMPayloadBase

@property (copy, nonatomic) NSDictionary *statusANY; // ivar: _statusANY


+(id)allowedStatusKeys;
+(id)build;
+(id)buildRequiredOnly;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif