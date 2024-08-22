// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTEXPORTEDTRANSACTIONINFO_H
#define PKACCOUNTEXPORTEDTRANSACTIONINFO_H

@class NSData, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAccountStatementMetadata.h"

@interface PKAccountExportedTransactionInfo : NSObject <NSSecureCoding>



@property (retain, nonatomic) PKAccountStatementMetadata *statementMetadata; // ivar: _statementMetadata
@property (copy, nonatomic) NSData *transactionData; // ivar: _transactionData
@property (copy, nonatomic) NSString *transactionDataFilename; // ivar: _transactionDataFilename
@property (copy, nonatomic) NSString *transactionDataHash; // ivar: _transactionDataHash


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif