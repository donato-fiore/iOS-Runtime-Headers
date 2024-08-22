// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTWEBSERVICEEXPORTTRANSACTIONDATARESPONSE_H
#define PKACCOUNTWEBSERVICEEXPORTTRANSACTIONDATARESPONSE_H

@class NSData, NSString;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSData *transactionData; // ivar: _transactionData
@property (readonly, copy, nonatomic) NSString *transactionDataFilename; // ivar: _transactionDataFilename
@property (readonly, copy, nonatomic) NSString *transactionDataHash; // ivar: _transactionDataHash


-(id)initWithData:(id)arg0 ;


@end


#endif