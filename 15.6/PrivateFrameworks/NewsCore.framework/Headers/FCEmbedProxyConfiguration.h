// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCEMBEDPROXYCONFIGURATION_H
#define FCEMBEDPROXYCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCEmbedProxyConfiguration : NSObject

@property (readonly, nonatomic) NSString *proxyAutoConfig; // ivar: _proxyAutoConfig
@property (readonly, nonatomic) NSString *proxyHost; // ivar: _proxyHost


-(id)initWithDictionary:(id)arg0 ;


@end


#endif