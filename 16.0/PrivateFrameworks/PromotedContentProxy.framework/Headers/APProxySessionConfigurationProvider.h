// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef APPROXYSESSIONCONFIGURATIONPROVIDER_H
#define APPROXYSESSIONCONFIGURATIONPROVIDER_H

@class NSURLSessionConfiguration, NSURL, APUnfairLock, NSArray;

#import <Foundation/Foundation.h>


@interface APProxySessionConfigurationProvider : NSObject {
    NSURLSessionConfiguration *_connectProxyConfig;
}


@property (retain, nonatomic) NSURL *defaultProxyURL; // ivar: _defaultProxyURL
@property (readonly, nonatomic) APUnfairLock *lock; // ivar: _lock
@property (retain, nonatomic) NSArray *protocolClasses; // ivar: _protocolClasses
@property (retain, nonatomic) NSURL *proxyURL; // ivar: _proxyURL


-(id)_createConnectProxyConfig;
-(id)connectProxyConfig;
-(id)initWithDefaultProxyURL:(id)arg0 ;
-(void)addProtocolClasses:(id)arg0 ;


@end


#endif