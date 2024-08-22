// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTWEBSERVICEEXPORTTRANSACTIONDATAREQUEST_H
#define PKACCOUNTWEBSERVICEEXPORTTRANSACTIONDATAREQUEST_H

@class NSString, NSURL, NSDate, NSTimeZone;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceExportTransactionDataRequest : PKAccountWebServiceRequest

@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSDate *beginDate; // ivar: _beginDate
@property (copy, nonatomic) NSDate *endDate; // ivar: _endDate
@property (copy, nonatomic) NSString *fileFormat; // ivar: _fileFormat
@property (copy, nonatomic) NSTimeZone *productTimeZone; // ivar: _productTimeZone
@property (copy, nonatomic) NSString *statementIdentifier; // ivar: _statementIdentifier
@property (nonatomic) NSUInteger type; // ivar: _type


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif