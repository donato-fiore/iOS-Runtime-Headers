// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMSYSTEMMIGRATIONDECLARATION_CUSTOMBEHAVIORITEMPATHSITEM_H
#define CEMSYSTEMMIGRATIONDECLARATION_CUSTOMBEHAVIORITEMPATHSITEM_H

@class NSString, NSNumber;


#import "CEMPayloadBase.h"

@interface CEMSystemMigrationDeclaration_CustomBehaviorItemPathsItem : CEMPayloadBase

@property (copy, nonatomic) NSString *payloadSourcePath; // ivar: _payloadSourcePath
@property (copy, nonatomic) NSNumber *payloadSourcePathInUserHome; // ivar: _payloadSourcePathInUserHome
@property (copy, nonatomic) NSString *payloadTargetPath; // ivar: _payloadTargetPath
@property (copy, nonatomic) NSNumber *payloadTargetPathInUserHome; // ivar: _payloadTargetPathInUserHome


+(id)allowedPayloadKeys;
+(id)buildRequiredOnlyWithSourcePath:(id)arg0 withSourcePathInUserHome:(id)arg1 withTargetPath:(id)arg2 withTargetPathInUserHome:(id)arg3 ;
+(id)buildWithSourcePath:(id)arg0 withSourcePathInUserHome:(id)arg1 withTargetPath:(id)arg2 withTargetPathInUserHome:(id)arg3 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithAssetProviders:(id)arg0 ;


@end


#endif