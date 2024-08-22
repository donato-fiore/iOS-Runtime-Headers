// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RMMODELSTATUSBASE_H
#define RMMODELSTATUSBASE_H



#import "RMModelPayloadBase.h"

@interface RMModelStatusBase : RMModelPayloadBase



-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)serializePayloadWithType:(short)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif