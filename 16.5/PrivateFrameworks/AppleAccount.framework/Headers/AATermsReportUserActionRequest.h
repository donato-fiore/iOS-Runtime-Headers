// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AATERMSREPORTUSERACTIONREQUEST_H
#define AATERMSREPORTUSERACTIONREQUEST_H

@class NSURLRequest;


#import "AARequest.h"

@interface AATermsReportUserActionRequest : AARequest {
    NSURLRequest *_urlRequest;
}




+(Class)responseClass;
-(id)initWithURLRequest:(id)arg0 parameters:(id)arg1 ;
-(id)urlRequest;


@end


#endif