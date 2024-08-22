// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCWPREFERENCES_H
#define SCWPREFERENCES_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SCWPreferences : NSObject {
    NSString *_requestCountryCode;
    NSString *_requestLanguageCode;
    NSString *_acceptLanguageCode;
}


@property (readonly, nonatomic) NSString *UUID; // ivar: _UUID
@property (retain) NSString *acceptLanguageCode;
@property (retain) NSString *requestCountryCode;
@property (retain) NSString *requestLanguageCode;


+(id)sharedPreferences;
+(void)clearSharedPreferences;
-(id)_stocksAcceptLanguage;
-(id)_stocksUserAgent;
-(id)init;
-(id)signedRequestForURL:(id)arg0 parameters:(id)arg1 ;
-(id)stocksCountryCode;
-(id)stocksLanguageCode;
-(id)stocksLanguageCodeForLanguage:(id)arg0 ;
-(id)stocksYQLBaseURL;
-(void)resetLocale;


@end


#endif