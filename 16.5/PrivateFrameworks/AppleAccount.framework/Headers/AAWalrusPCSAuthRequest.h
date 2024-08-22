// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAWALRUSPCSAUTHREQUEST_H
#define AAWALRUSPCSAUTHREQUEST_H

@class NSDictionary, ACAccount, NSString;


#import "AARequest.h"

@interface AAWalrusPCSAuthRequest : AARequest {
    NSDictionary *_bodyParams;
    ACAccount *_account;
    NSString *_internalURLString;
}




-(id)initWithAccount:(id)arg0 WebSessionID:(id)arg1 webSessionConsentUUID:(id)arg2 encryptionEnvelope:(id)arg3 appName:(id)arg4 responseIdentities:(id)arg5 serverInfo:(id)arg6 urlString:(id)arg7 ;
-(id)urlRequest;
-(id)urlString;


@end


#endif