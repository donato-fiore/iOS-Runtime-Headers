// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMMIGRATIONDECLARATION_CUSTOMBEHAVIORITEM_H
#define CEMSYSTEMMIGRATIONDECLARATION_CUSTOMBEHAVIORITEM_H

@class NSString, NSArray;


#import "CEMPayloadBase.h"

@interface CEMSystemMigrationDeclaration_CustomBehaviorItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadContext; // ivar: _payloadContext
@property (copy, nonatomic) NSArray *payloadPaths; // ivar: _payloadPaths


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithContext:(id)arg0 withPaths:(id)arg1 ;
+(id)buildWithContext:(id)arg0 withPaths:(id)arg1 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif