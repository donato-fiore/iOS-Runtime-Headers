// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSTRANSACTIONLOGDATAMESSAGE_H
#define IDSTRANSACTIONLOGDATAMESSAGE_H

@class NSData;


#import "IDSTransactionLogMessage.h"

@interface IDSTransactionLogDataMessage : IDSTransactionLogMessage

@property (readonly, nonatomic) NSData *dataValue; // ivar: _dataValue


-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg0 accountUniqueID:(id)arg1 fromID:(id)arg2 loginID:(id)arg3 serviceName:(id)arg4 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif