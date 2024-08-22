// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSBOOLEANDICTIONARYANYRESTRICTIONNAME_H
#define CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSBOOLEANDICTIONARYANYRESTRICTIONNAME_H

@class NSNumber;


#import "CEMPayloadBase.h"

@interface CEMDeviceListRestrictionsCommand_StatusBooleanDictionaryANYrestrictionname : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusValue; // ivar: _statusValue


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithValue:(id)arg0 ;
+(id)buildWithValue:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif