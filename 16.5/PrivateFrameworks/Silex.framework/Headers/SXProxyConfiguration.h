// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXPROXYCONFIGURATION_H
#define SXPROXYCONFIGURATION_H

@class NSString;
@protocol SXProxyConfiguration;

#import <Foundation/Foundation.h>


@interface SXProxyConfiguration : NSObject <SXProxyConfiguration>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *proxyAutoConfigScript; // ivar: _proxyAutoConfigScript
@property (readonly, copy, nonatomic) NSString *proxyHost; // ivar: _proxyHost
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL usePrivateRelay; // ivar: usePrivateRelay


+(id)direct;
-(id)initWithHost:(id)arg0 ;
-(id)initWithProxyAutoConfigScript:(id)arg0 ;


@end


#endif