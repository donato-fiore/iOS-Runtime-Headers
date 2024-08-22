// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSKEYVALUEPROXYSHAREKEY_H
#define NSKEYVALUEPROXYSHAREKEY_H

@protocol NSKeyValueProxyCaching;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface NSKeyValueProxyShareKey : NSObject <NSKeyValueProxyCaching>

 {
    NSObject *_container;
    NSString *_key;
}




+(id)_proxyShare;
-(id)_proxyInitWithContainer:(id)arg0 getter:(id)arg1 ;
-(struct ? )_proxyLocator;
-(void)_proxyNonGCFinalize;


@end


#endif