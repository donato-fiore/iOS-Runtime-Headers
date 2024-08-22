// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AAAPPLETVREQUEST_H
#define AAAPPLETVREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface AAAppleTVRequest : AARequest {
    ACAccount *_account;
}




-(id)initWithAccount:(id)arg0 ;


@end


#endif