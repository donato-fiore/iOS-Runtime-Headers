// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMMODELSTATUSTESTDICTIONARYVALUE_H
#define RMMODELSTATUSTESTDICTIONARYVALUE_H

@class NSString;


#import "RMModelStatusBase.h"

@interface RMModelStatusTestDictionaryValue : RMModelStatusBase

@property (copy, nonatomic) NSString *statusKey1; // ivar: _statusKey1
@property (copy, nonatomic) NSString *statusKey2; // ivar: _statusKey2


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithKey1:(id)arg0 ;
+(id)buildWithKey1:(id)arg0 key2:(id)arg1 ;
-(BOOL)loadPayloadFromDictionary:(id)arg0 serializationType:(short)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayloadWithType:(short)arg0 ;


@end


#endif