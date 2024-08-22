// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPROXYURLUTILITIES_H
#define APPROXYURLUTILITIES_H


#import <Foundation/Foundation.h>


@interface APProxyURLUtilities : NSObject



+(BOOL)_shouldProxyRequestToHost:(id)arg0 ;
+(BOOL)shouldProxyRequestToHost:(id)arg0 ;
+(id)_proxyURLForVideoURL:(id)arg0 adIdentifier:(id)arg1 changeScheme:(BOOL)arg2 ;
+(id)composeUserAgentString:(id)arg0 adIdentifier:(id)arg1 maxRequestCount:(NSInteger)arg2 ;
+(id)proxyURLForVideoURL:(id)arg0 adIdentifier:(id)arg1 changeScheme:(BOOL)arg2 ;
+(void)changeSchemeTo:(NSInteger)arg0 forUrlRequest:(id)arg1 ;
+(void)parseUserAgentString:(id)arg0 adIdentifier:(*id)arg1 maxRequestCount:(*id)arg2 ;


@end


#endif