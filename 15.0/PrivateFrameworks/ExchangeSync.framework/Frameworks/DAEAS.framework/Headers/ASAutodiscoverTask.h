// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTODISCOVERTASK_H
#define ASAUTODISCOVERTASK_H

@class NSString, NSMutableDictionary, NSError;


#import "ASTask.h"

@interface ASAutodiscoverTask : ASTask {
    NSString *_serverURL;
    NSString *_emailAddress;
    NSString *_redirectEmail;
    NSString *_authUsername;
    NSMutableDictionary *_accountInfo;
    NSError *_discoveryError;
}


@property (retain, nonatomic) NSString *originalURLScheme; // ivar: _originalURLScheme
@property (nonatomic) BOOL wasRedirectedThroughHTTP; // ivar: _wasRedirectedThroughHTTP


-(BOOL)_shouldRedirectToHTTPForRequest:(id)arg0 ;
-(BOOL)_shouldSendAuthForRequest:(id)arg0 ;
-(BOOL)processContext:(id)arg0 ;
-(BOOL)requiresEASVersionInformaton;
-(BOOL)shouldHandlePasswordErrors;
-(BOOL)shouldLogIncomingData;
-(BOOL)shouldStallAfterConnectionLost;
-(CGFloat)timeoutInterval;
-(id)_HTTPMethodForRequest:(id)arg0 ;
-(id)_easVersion;
-(id)_policyKey;
-(id)_url;
-(id)contentType;
-(id)initWithURL:(id)arg0 emailAddress:(id)arg1 authUsername:(id)arg2 ;
-(id)localizedErrorStringForCertificateErrorCode:(int)arg0 host:(id)arg1 ;
-(id)requestBody;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;
-(void)_addAuthToRequest:(id)arg0 ;
-(void)_handleActionNode:(struct _xmlNode *)arg0 ;
-(void)_handleErrorNode:(struct _xmlNode *)arg0 ;
-(void)_handleServerNode:(struct _xmlNode *)arg0 ;
-(void)_handleUserNode:(struct _xmlNode *)arg0 ;
-(void)_setAccountInfoFromAutoDiscoveryXML:(id)arg0 ;
-(void)didProcessContext:(id)arg0 ;
-(void)finishWithError:(id)arg0 ;


@end


#endif