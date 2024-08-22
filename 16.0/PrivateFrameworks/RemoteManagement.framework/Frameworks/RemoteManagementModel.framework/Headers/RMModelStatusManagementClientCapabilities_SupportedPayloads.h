// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELSTATUSMANAGEMENTCLIENTCAPABILITIES_SUPPORTEDPAYLOADS_H
#define RMMODELSTATUSMANAGEMENTCLIENTCAPABILITIES_SUPPORTEDPAYLOADS_H

@class NSArray;


#import "RMModelPayloadBase.h"
#import "RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations.h"

@interface RMModelStatusManagementClientCapabilities_SupportedPayloads : RMModelPayloadBase

@property (copy, nonatomic) RMModelStatusManagementClientCapabilities_SupportedPayloadsDeclarations *statusDeclarations; // ivar: _statusDeclarations
@property (copy, nonatomic) NSArray *statusStatusItems; // ivar: _statusStatusItems


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithDeclarations:(id)arg0 statusItems:(id)arg1 ;
+(id)buildWithDeclarations:(id)arg0 statusItems:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif