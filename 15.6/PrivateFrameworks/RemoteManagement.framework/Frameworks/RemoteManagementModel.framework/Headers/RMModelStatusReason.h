// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELSTATUSREASON_H
#define RMMODELSTATUSREASON_H

@class NSString;


#import "RMModelPayloadBase.h"
#import "RMModelAnyPayload.h"

@interface RMModelStatusReason : RMModelPayloadBase

@property (copy, nonatomic) NSString *statusCode; // ivar: _statusCode
@property (copy, nonatomic) NSString *statusDescription; // ivar: _statusDescription
@property (copy, nonatomic) RMModelAnyPayload *statusDetails; // ivar: _statusDetails


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithCode:(id)arg0 ;
+(id)buildWithCode:(id)arg0 description:(id)arg1 details:(id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif