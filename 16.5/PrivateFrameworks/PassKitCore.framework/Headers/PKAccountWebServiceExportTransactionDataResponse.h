// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEEXPORTTRANSACTIONDATARESPONSE_H
#define PKACCOUNTWEBSERVICEEXPORTTRANSACTIONDATARESPONSE_H



#import "PKAccountWebServiceResponse.h"
#import "PKAccountExportedTransactionInfo.h"

@interface PKAccountWebServiceExportTransactionDataResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) PKAccountExportedTransactionInfo *exportedTransactionInfo; // ivar: _exportedTransactionInfo


-(id)initWithData:(id)arg0 account:(id)arg1 request:(id)arg2 ;


@end


#endif