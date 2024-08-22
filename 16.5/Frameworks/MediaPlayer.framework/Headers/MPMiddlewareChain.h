// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPMIDDLEWARECHAIN_H
#define MPMIDDLEWARECHAIN_H

@class Protocol, NSArray, NSEnumerator;

#import <Foundation/Foundation.h>


@interface MPMiddlewareChain : NSObject {
    Protocol *_protocol;
    NSArray *_builders;
    NSEnumerator *_middlewareEnumerator;
}


@property (nonatomic) SEL builderSelector; // ivar: _builderSelector


+(id)builderProxyForProtocol:(id)arg0 ;
-(id)initWithMiddleware:(id)arg0 protocol:(id)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)nextObject;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif