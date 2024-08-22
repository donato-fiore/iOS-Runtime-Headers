// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSRESTRICTIONSDICTIONARY_H
#define CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSRESTRICTIONSDICTIONARY_H



#import "CEMPayloadBase.h"
#import "CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary.h"
#import "CEMDeviceListRestrictionsCommand_StatusBooleanDictionary.h"
#import "CEMDeviceListRestrictionsCommand_StatusValueDictionary.h"

@interface CEMDeviceListRestrictionsCommand_StatusRestrictionsDictionary : CEMPayloadBase

@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusIntersection; // ivar: _statusIntersection
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusBooleanDictionary *statusRestrictedBool; // ivar: _statusRestrictedBool
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusValueDictionary *statusRestrictedValue; // ivar: _statusRestrictedValue
@property (copy, nonatomic) CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary *statusUnion; // ivar: _statusUnion


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithRestrictedBool:(id)arg0 withRestrictedValue:(id)arg1 withIntersection:(id)arg2 withUnion:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif