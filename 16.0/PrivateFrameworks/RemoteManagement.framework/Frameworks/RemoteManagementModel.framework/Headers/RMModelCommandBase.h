// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELCOMMANDBASE_H
#define RMMODELCOMMANDBASE_H

@class NSString;


#import "RMModelPayloadBase.h"
#import "RMModelAnyPayload.h"

@interface RMModelCommandBase : RMModelPayloadBase

@property (copy, nonatomic) NSString *commandIdentifier; // ivar: _commandIdentifier
@property (copy, nonatomic) RMModelAnyPayload *commandPayload; // ivar: _commandPayload
@property (copy, nonatomic) NSString *commandType; // ivar: _commandType


+(id)load:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)mustBeSupervised;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;
-(id)serializeWithType:(short)arg0 ;
-(int)executionLevel;


@end


#endif