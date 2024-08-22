// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTODISCOVERV2TASK_H
#define ASAUTODISCOVERV2TASK_H

@class NSString, NSMutableDictionary;


#import "ASTask.h"

@interface ASAutodiscoverV2Task : ASTask {
    NSString *_emailAddress;
    NSMutableDictionary *_accountInfo;
    BOOL _addEmptyBearer;
    BOOL _discoverOAuthEndpoint;
    NSString *_easEndPoint;
}




-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg0 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg0 ;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldLogIncomingData;
-(BOOL)shouldStallAfterConnectionLost;
-(CGFloat)timeoutInterval;
-(id)_HTTPMethodForRequest:(id)arg0 ;
-(id)_OAuthURLFromResponseData:(id)arg0 ;
-(id)_easVersion;
-(id)_policyKey;
-(id)_url;
-(id)contentType;
-(id)initWithEmailAddress:(id)arg0 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg0 host:(id)arg1 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)didProcessContext:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;


@end


#endif