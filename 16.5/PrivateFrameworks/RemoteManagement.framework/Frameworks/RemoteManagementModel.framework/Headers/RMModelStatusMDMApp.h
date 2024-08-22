// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMMODELSTATUSMDMAPP_H
#define RMMODELSTATUSMDMAPP_H

@class NSString;


#import "RMModelStatusBase.h"

@interface RMModelStatusMDMApp : RMModelStatusBase

@property (copy, nonatomic) NSString *statusExternalVersionId; // ivar: _statusExternalVersionId
@property (copy, nonatomic) NSString *statusIdentifier; // ivar: _statusIdentifier
@property (copy, nonatomic) NSString *statusName; // ivar: _statusName
@property (copy, nonatomic) NSString *statusShortVersion; // ivar: _statusShortVersion
@property (copy, nonatomic) NSString *statusState; // ivar: _statusState
@property (copy, nonatomic) NSString *statusVersion; // ivar: _statusVersion


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithIdentifier:(id)arg0 ;
+(id)buildWithIdentifier:(id)arg0 name:(id)arg1 externalVersionId:(id)arg2 version:(id)arg3 shortVersion:(id)arg4 state:(id)arg5 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif