// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AASETUPASSISTANTUPGRADESTATUSREQUEST_H
#define AASETUPASSISTANTUPGRADESTATUSREQUEST_H

@class ACAccount;


#import "AARequest.h"

@interface AASetupAssistantUpgradeStatusRequest : AARequest {
    ACAccount *_account;
}




+(Class)responseClass;
-(id)initWithAccount:(id)arg0 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif