// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKACCOUNTWEBSERVICECERTIFICATESREQUEST_H
#define PKACCOUNTWEBSERVICECERTIFICATESREQUEST_H

@class NSURL;


#import "PKAccountWebServiceRequest.h"

@interface PKAccountWebServiceCertificatesRequest : PKAccountWebServiceRequest

@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (nonatomic) NSUInteger destination; // ivar: _destination


-(id)_urlRequestWithAppleAccountInformation:(id)arg0 ;


@end


#endif