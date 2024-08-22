// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AALOGINACCOUNTREQUEST_H
#define AALOGINACCOUNTREQUEST_H

@class ACAccount, NSDictionary;


#import "AARequest.h"

@interface AALoginAccountRequest : AARequest {
    ACAccount *_account;
    NSDictionary *_delegatesInfo;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 delegates:(id)arg1 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif