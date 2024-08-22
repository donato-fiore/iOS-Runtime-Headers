// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DTXPROXY_H
#define _DTXPROXY_H


#import <Foundation/Foundation.h>

#import "DTXProxyChannel.h"

@interface _DTXProxy : NSObject {
    DTXProxyChannel *_proxyChannel;
}




-(id)initWithChannel:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif