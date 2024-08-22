// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTWEBSERVICEDOCUMENTACTIONRESPONSE_H
#define PKACCOUNTWEBSERVICEDOCUMENTACTIONRESPONSE_H

@class NSString, NSData;


#import "PKAccountWebServiceResponse.h"

@interface PKAccountWebServiceDocumentActionResponse : PKAccountWebServiceResponse

@property (readonly, copy, nonatomic) NSString *documentDataFilename; // ivar: _documentDataFilename
@property (readonly, copy, nonatomic) NSString *documentDataHash; // ivar: _documentDataHash
@property (readonly, copy, nonatomic) NSData *documentPDFData; // ivar: _documentPDFData


-(id)initWithData:(id)arg0 ;


@end


#endif