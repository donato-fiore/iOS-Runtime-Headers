// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _AABASICGETREQUEST_H
#define _AABASICGETREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface _AABasicGetRequest : AARequest {
    ACAccount *_account;
}




-(id)initWithAccount:(id)arg0 ;
-(id)urlRequest;


@end


#endif