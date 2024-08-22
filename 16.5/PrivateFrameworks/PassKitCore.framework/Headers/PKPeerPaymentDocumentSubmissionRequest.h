// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPEERPAYMENTDOCUMENTSUBMISSIONREQUEST_H
#define PKPEERPAYMENTDOCUMENTSUBMISSIONREQUEST_H

@class NSData, NSArray, NSString;


#import "PKPeerPaymentWebServiceRequest.h"

@interface PKPeerPaymentDocumentSubmissionRequest : PKPeerPaymentWebServiceRequest

@property (copy, nonatomic) NSData *backImageData; // ivar: _backImageData
@property (copy, nonatomic) NSArray *certificates; // ivar: _certificates
@property (nonatomic) BOOL devSigned; // ivar: _devSigned
@property (copy, nonatomic) NSString *documentCountryCode; // ivar: _documentCountryCode
@property (nonatomic) NSUInteger documentType; // ivar: _documentType
@property (copy, nonatomic) NSData *frontImageData; // ivar: _frontImageData


-(id)_urlRequestWithServiceURL:(id)arg0 appleAccountInformation:(id)arg1 ;


@end


#endif