// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLASSETSDBASECLIENT_H
#define PLASSETSDBASECLIENT_H

@protocol PLXPCProxyCreating><PLXPCAsyncProxyCreating;

#import <Foundation/Foundation.h>


@interface PLAssetsdBaseClient : NSObject

@property (readonly) NSObject<PLXPCProxyCreating><PLXPCAsyncProxyCreating> *proxyFactory; // ivar: _proxyFactory


-(id)initWithQueue:(id)arg0 proxyCreating:(id)arg1 proxyGetter:(SEL)arg2 ;


@end


#endif