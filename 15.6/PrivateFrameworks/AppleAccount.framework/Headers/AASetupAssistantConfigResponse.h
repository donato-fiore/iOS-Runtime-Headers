// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AASETUPASSISTANTCONFIGRESPONSE_H
#define AASETUPASSISTANTCONFIGRESPONSE_H

@class NSDictionary, NSString;


#import "AAResponse.h"

@interface AASetupAssistantConfigResponse : AAResponse {
    NSDictionary *_urls;
}


@property (readonly, nonatomic) NSString *aboutURL;
@property (readonly, nonatomic) NSString *activeEmailDomain;
@property (readonly, nonatomic) NSString *authenticateURL;
@property (readonly, nonatomic) NSString *checkValidityURL;
@property (readonly, nonatomic) NSString *createAppleIDURL;
@property (readonly, nonatomic) NSString *createDelegateAccountsURL;
@property (readonly, nonatomic) NSString *existingAppleIDTermsUIURL;
@property (readonly, nonatomic) NSString *genericTermsURL;
@property (readonly, nonatomic) NSString *iForgotUIURL;
@property (readonly, nonatomic) NSString *iForgotURL;
@property (readonly, nonatomic) NSString *loginDelegatesURL;
@property (readonly, nonatomic) BOOL setupAssistantServerEnabled;
@property (readonly, nonatomic) NSString *signingSessionCertURL;
@property (readonly, nonatomic) NSString *signingSessionURL;
@property (readonly, nonatomic) NSString *updateAppleIDURL;
@property (readonly, nonatomic) NSString *upgradeIOSTermsUI;
@property (readonly, nonatomic) NSString *upgradeStatusURL;
@property (readonly, nonatomic) NSString *xmlUI;


-(id)initWithHTTPResponse:(id)arg0 data:(id)arg1 ;


@end


#endif