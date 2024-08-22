// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NETPREFERENCES_H
#define NETPREFERENCES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface NetPreferences : NSObject {
    NSString *_buildVersion;
    NSString *_productVersion;
    BOOL _serviceDebugging;
    BOOL _isNetworkReachable;
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}


@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain) NSString *acceptLanguageCode;
@property (nonatomic, getter=isNetworkReachable) BOOL networkReachable;
@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;


+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(BOOL)serviceDebugging;
-(id)_cacheDirectoryPath;
-(id)_stocksAcceptLanguage;
-(id)_stocksUserAgent;
-(id)_urlStringWithHost:(id)arg0 ;
-(id)backsideLogoURL;
-(id)defaultBacksideLogoURL;
-(id)financeRequestAttributes;
-(id)fullQuoteURLOverrideForStock:(id)arg0 ;
-(id)init;
-(id)logoBacksideImage;
-(id)logoButtonImage;
-(id)serviceDebuggingPath;
-(id)signedRequestForURL:(id)arg0 parameters:(id)arg1 ;
-(id)stocksCountryCode;
-(id)stocksLanguageCode;
-(id)stocksLanguageCodeForLanguage:(id)arg0 ;
-(id)stocksYQLBaseURL;
-(void)addStocksHeadersToPostRequest:(id)arg0 ;
-(void)resetLocale;


@end


#endif