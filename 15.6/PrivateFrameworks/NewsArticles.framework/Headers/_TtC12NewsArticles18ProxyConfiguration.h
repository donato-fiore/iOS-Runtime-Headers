// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC12NEWSARTICLES18PROXYCONFIGURATION_H
#define _TTC12NEWSARTICLES18PROXYCONFIGURATION_H

@class NSString;
@protocol SXProxyConfiguration;

#import <Foundation/Foundation.h>


@interface _TtC12NewsArticles18ProxyConfiguration : NSObject <SXProxyConfiguration>

 {
    ? embedProxyConfiguration;
}


@property (nonatomic, readonly) NSString *proxyAutoConfigScript;
@property (nonatomic, readonly) NSString *proxyHost;


-(id)init;


@end


#endif