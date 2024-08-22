// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENGCOAUTH_H
#define ENGCOAUTH_H

@class NSString, NSDictionary, NSURL;

#import <Foundation/Foundation.h>


@interface ENGCOAuth : NSObject

@property (copy, nonatomic) NSString *HTTPMethod; // ivar: __method
@property (retain, nonatomic) NSDictionary *OAuthParameters; // ivar: _OAuthParameters
@property (copy, nonatomic) NSURL *URL; // ivar: __url
@property (copy, nonatomic) NSDictionary *requestParameters; // ivar: __parameters
@property (copy, nonatomic) NSString *signatureSecret; // ivar: _signatureSecret


+(id)URLRequestForPath:(id)arg0 GETParameters:(id)arg1 host:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 accessToken:(id)arg5 tokenSecret:(id)arg6 ;
+(id)URLRequestForPath:(id)arg0 GETParameters:(id)arg1 scheme:(id)arg2 host:(id)arg3 consumerKey:(id)arg4 consumerSecret:(id)arg5 accessToken:(id)arg6 tokenSecret:(id)arg7 ;
+(id)URLRequestForPath:(id)arg0 POSTParameters:(id)arg1 host:(id)arg2 consumerKey:(id)arg3 consumerSecret:(id)arg4 accessToken:(id)arg5 tokenSecret:(id)arg6 ;
+(id)nonce;
+(id)queryStringFromParameters:(id)arg0 ;
+(id)timeStamp;
+(void)setHTTPShouldHandleCookies:(BOOL)arg0 ;
+(void)setTimeStampOffset:(NSInteger)arg0 ;
+(void)setUserAgent:(id)arg0 ;
-(id)authorizationHeader;
-(id)initWithConsumerKey:(id)arg0 consumerSecret:(id)arg1 accessToken:(id)arg2 tokenSecret:(id)arg3 ;
-(id)request;
-(id)signature;
-(id)signatureBase;


@end


#endif