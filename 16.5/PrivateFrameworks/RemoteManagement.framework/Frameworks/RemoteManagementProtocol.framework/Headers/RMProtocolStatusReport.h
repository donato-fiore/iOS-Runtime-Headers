// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMPROTOCOLSTATUSREPORT_H
#define RMPROTOCOLSTATUSREPORT_H

@class RMModelPayloadBase, NSArray, RMModelAnyPayload;



@interface RMProtocolStatusReport : RMModelPayloadBase

@property (copy, nonatomic) NSArray *reportErrors; // ivar: _reportErrors
@property (copy, nonatomic) RMModelAnyPayload *reportStatusItems; // ivar: _reportStatusItems


+(id)requestWithStatusItems:(id)arg0 errors:(id)arg1 ;
-(BOOL)loadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializeWithType:(short)arg0 ;


@end


#endif