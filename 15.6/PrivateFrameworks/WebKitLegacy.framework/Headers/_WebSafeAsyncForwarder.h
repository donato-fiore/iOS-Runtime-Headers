// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _WEBSAFEASYNCFORWARDER_H
#define _WEBSAFEASYNCFORWARDER_H


#import <Foundation/Foundation.h>

#import "_WebSafeForwarder.h"

@interface _WebSafeAsyncForwarder : NSObject {
    _WebSafeForwarder *_forwarder;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithForwarder:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif