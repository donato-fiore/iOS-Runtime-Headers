// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBAGNETWORKTASK_H
#define AMSBAGNETWORKTASK_H

@class NSString;
@protocol NSURLSessionTaskDelegate, AMSURLProtocolDelegate;


#import "AMSTask.h"
#import "AMSURLSession.h"
#import "AMSProcessInfo.h"

@interface AMSBagNetworkTask : AMSTask <NSURLSessionTaskDelegate, AMSURLProtocolDelegate>



@property (retain, nonatomic) AMSURLSession *URLSession; // ivar: _URLSession
@property (retain, nonatomic) AMSProcessInfo *clientInfo; // ivar: _clientInfo
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (retain, nonatomic) NSString *profile; // ivar: _profile
@property (retain, nonatomic) NSString *profileVersion; // ivar: _profileVersion
@property (readonly) Class superclass;


+(BOOL)_shouldReloadDataForOriginalCookies:(id)arg0 newCookies:(id)arg1 ;
+(id)_OSBuildTypeString;
+(id)_URLCookieNamesForProfile:(id)arg0 ;
+(id)_defaultURLCookieNames;
+(id)_deviceString;
+(id)_setStorefrontFromURLResponse:(id)arg0 bagData:(id)arg1 ;
+(id)bagAccountForAccountMediaType:(id)arg0 ;
+(id)bagStorefrontForAccountMediaType:(id)arg0 ;
+(void)_setURLCookieNames:(id)arg0 forProfile:(id)arg1 ;
-(BOOL)_shouldRetryForResult:(id)arg0 cookieNames:(id)arg1 urlCookies:(id)arg2 newStorefront:(id)arg3 ;
-(id)_cookiesForNames:(id)arg0 ;
-(id)_createRequestWithCookieNames:(id)arg0 storefront:(id)arg1 ;
-(id)initWithClientInfo:(id)arg0 profile:(id)arg1 profileVersion:(id)arg2 ;
-(id)performFetch;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)_updateStorefrontSuffixIfNecessaryWithBagData:(id)arg0 ;


@end


#endif