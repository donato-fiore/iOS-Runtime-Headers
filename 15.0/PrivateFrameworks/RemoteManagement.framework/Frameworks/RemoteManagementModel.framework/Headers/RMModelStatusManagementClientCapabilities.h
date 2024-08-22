// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RMMODELSTATUSMANAGEMENTCLIENTCAPABILITIES_H
#define RMMODELSTATUSMANAGEMENTCLIENTCAPABILITIES_H

@class NSArray;


#import "RMModelStatusBase.h"
#import "RMModelAnyPayload.h"
#import "RMModelStatusManagementClientCapabilities_SupportedPayloads.h"

@interface RMModelStatusManagementClientCapabilities : RMModelStatusBase

@property (copy, nonatomic) RMModelAnyPayload *statusSupportedFeatures; // ivar: _statusSupportedFeatures
@property (copy, nonatomic) RMModelStatusManagementClientCapabilities_SupportedPayloads *statusSupportedPayloads; // ivar: _statusSupportedPayloads
@property (copy, nonatomic) NSArray *statusSupportedVersions; // ivar: _statusSupportedVersions


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithSupportedVersions:(id)arg0 supportedFeatures:(id)arg1 supportedPayloads:(id)arg2 ;
+(id)buildWithSupportedVersions:(id)arg0 supportedFeatures:(id)arg1 supportedPayloads:(id)arg2 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif