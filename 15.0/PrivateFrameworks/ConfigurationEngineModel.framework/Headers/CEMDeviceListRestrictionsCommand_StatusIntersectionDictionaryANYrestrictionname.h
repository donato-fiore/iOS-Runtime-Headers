// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSINTERSECTIONDICTIONARYANYRESTRICTIONNAME_H
#define CEMDEVICELISTRESTRICTIONSCOMMAND_STATUSINTERSECTIONDICTIONARYANYRESTRICTIONNAME_H

@class NSArray;


#import "CEMPayloadBase.h"

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionaryANYrestrictionname : CEMPayloadBase

@property (copy, nonatomic) NSArray *statusValues; // ivar: _statusValues


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithValues:(id)arg0 ;
+(id)buildWithValues:(id)arg0 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif