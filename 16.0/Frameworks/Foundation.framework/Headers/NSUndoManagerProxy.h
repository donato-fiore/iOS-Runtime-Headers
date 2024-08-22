// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSUNDOMANAGERPROXY_H
#define NSUNDOMANAGERPROXY_H



#import "NSProxy.h"
#import "NSUndoManager.h"

@interface NSUndoManagerProxy : NSProxy {
    NSUndoManager *_manager;
    Class _targetClass;
}




-(BOOL)_tryRetain;
-(BOOL)isKindOfClass:(Class)arg0 ;
-(id)initWithManager:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)retain;
-(void)forwardInvocation:(id)arg0 ;
-(void)release;
-(void)setTargetClass:(Class)arg0 ;
-(void)superRelease;


@end


#endif