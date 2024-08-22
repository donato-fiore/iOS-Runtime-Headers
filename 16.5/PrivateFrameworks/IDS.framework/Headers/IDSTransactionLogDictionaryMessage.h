// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IDSTRANSACTIONLOGDICTIONARYMESSAGE_H
#define IDSTRANSACTIONLOGDICTIONARYMESSAGE_H

@class NSDictionary;


#import "IDSTransactionLogMessage.h"

@interface IDSTransactionLogDictionaryMessage : IDSTransactionLogMessage

@property (readonly, nonatomic) NSDictionary *dictionaryValue; // ivar: _dictionaryValue


-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 accountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif