// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELSTATUSMANAGEMENTDECLARATIONS_H
#define RMMODELSTATUSMANAGEMENTDECLARATIONS_H

@class NSArray;


#import "RMModelStatusBase.h"

@interface RMModelStatusManagementDeclarations : RMModelStatusBase

@property (copy, nonatomic) NSArray *statusActivations; // ivar: _statusActivations
@property (copy, nonatomic) NSArray *statusAssets; // ivar: _statusAssets
@property (copy, nonatomic) NSArray *statusConfigurations; // ivar: _statusConfigurations
@property (copy, nonatomic) NSArray *statusManagement; // ivar: _statusManagement


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithActivations:(id)arg0 configurations:(id)arg1 assets:(id)arg2 management:(id)arg3 ;
+(id)buildWithActivations:(id)arg0 configurations:(id)arg1 assets:(id)arg2 management:(id)arg3 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif