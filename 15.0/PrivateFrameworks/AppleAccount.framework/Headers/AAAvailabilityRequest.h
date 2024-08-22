// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAAVAILABILITYREQUEST_H
#define AAAVAILABILITYREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface AAAvailabilityRequest : AARequest {
    ACAccount *_account;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif