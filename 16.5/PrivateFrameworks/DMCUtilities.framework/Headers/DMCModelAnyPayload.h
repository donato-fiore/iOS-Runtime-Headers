// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMCMODELANYPAYLOAD_H
#define DMCMODELANYPAYLOAD_H

@class NSDictionary;


#import "DMCModelPayloadBase.h"

@interface DMCModelAnyPayload : DMCModelPayloadBase

@property (copy, nonatomic) NSDictionary *dictKeys; // ivar: _dictKeys


+(id)buildFromDictionary:(id)arg0 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif