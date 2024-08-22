// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSBAGNETWORKTASK_H
#define AMSBAGNETWORKTASK_H

@class NSString;
@protocol NSURLSessionTaskDelegate, AMSURLProtocolDelegate, AMSBagAccountProvider;


#import "AMSTask.h"
#import "AMSLazyPromise.h"
#import "AMSProcessInfo.h"

@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate>



@property (readonly, nonatomic) AMSLazyPromise *URLSessionPromise; // ivar: _URLSessionPromise
@property (readonly, nonatomic) NSObject<AMSBagAccountProvider> *accountProvider; // ivar: _accountProvider
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (retain, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly) Class superclass;


+(BOOL)_shouldReloadDataForOriginalCookies:(id)arg0 newCookies:(id)arg1 ;
+(id)_URLCookieNamesForProfile:(id)arg0 ;
+(id)_cookiesForNames:(id)arg0 clientInfo:(id)arg1 account:(id)arg2 ;
+(id)_defaultURLCookieNames;
+(id)_queryItemsForClientInfo:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 cookieNames:(id)arg3 account:(id)arg4 storefront:(id)arg5 ;
+(id)_queryItemsForClientInfo:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 cookieNames:(id)arg3 accountProvider:(id)arg4 ;
+(id)_requestIdentifierForQueryItems:(id)arg0 ;
+(id)_requestIdentifierForQueryItems:(id)arg0 prefix:(id)arg1 ;
+(id)_setStorefrontFromURLResponse:(id)arg0 bagData:(id)arg1 ;
+(id)requestPartialIdentifierForClientInfo:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 ;
+(void)_setURLCookieNames:(id)arg0 forProfile:(id)arg1 ;
-(BOOL)_shouldRetryForResult:(id)arg0 cookieNames:(id)arg1 urlCookies:(id)arg2 responseStorefront:(id)arg3 ;
-(id)_createRequestWithQueryItems:(id)arg0 ;
-(id)_performFetchWithAttemptedCount:(NSUInteger)arg0 account:(id)arg1 storefront:(id)arg2 ;
-(id)initWithClientInfo:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 accountProvider:(id)arg3 ;
-(id)performFetch;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg0 ;


@end


#endif