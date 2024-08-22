// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELSTATUSMANAGEMENTCLIENTCAPABILITIES_SUPPORTEDPAYLOADSDECLARATIONS_H
#define RMMODELSTATUSMANAGEMENTCLIENTCAPABILITIES_SUPPORTEDPAYLOADSDECLARATIONS_H

@class NSArray;


#import "RMModelPayloadBase.h"

@interface RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations : RMModelPayloadBase

@property (copy, nonatomic) NSArray *statusActivations; // ivar: _statusActivations
@property (copy, nonatomic) NSArray *statusAssets; // ivar: _statusAssets
@property (copy, nonatomic) NSArray *statusConfigurations; // ivar: _statusConfigurations
@property (copy, nonatomic) NSArray *statusManagement; // ivar: _statusManagement


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithActivations:(id)arg0 assets:(id)arg1 configurations:(id)arg2 management:(id)arg3 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif