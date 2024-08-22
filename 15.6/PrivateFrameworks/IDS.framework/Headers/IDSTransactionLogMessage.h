// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSTRANSACTIONLOGMESSAGE_H
#define IDSTRANSACTIONLOGMESSAGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface IDSTransactionLogMessage : NSObject

@property (readonly, nonatomic) NSString *accountUniqueID; // ivar: _accountUniqueID
@property (readonly, nonatomic) NSString *fromID; // ivar: _fromID
@property (readonly, nonatomic) NSString *loginID; // ivar: _loginID
@property (readonly, nonatomic) NSString *serviceName; // ivar: _serviceName


+(id)transactionLogMessageFromDictionaryRepresentation:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_initWithAccountUniqueID:(id)arg0 fromID:(id)arg1 loginID:(id)arg2 serviceName:(id)arg3 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif