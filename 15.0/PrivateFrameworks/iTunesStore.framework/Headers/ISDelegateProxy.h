// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ISDELEGATEPROXY_H
#define ISDELEGATEPROXY_H

@class NSLock;

#import <Foundation/Foundation.h>


@interface ISDelegateProxy : NSObject {
    id *_delegate;
    NSLock *_lock;
    BOOL _shouldMessageMainThread;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)sendInvocationToDelegate:(id)arg0 ;
-(void)setDelegate:(id)arg0 ;
-(void)setShouldMessageMainThread:(BOOL)arg0 ;


@end


#endif