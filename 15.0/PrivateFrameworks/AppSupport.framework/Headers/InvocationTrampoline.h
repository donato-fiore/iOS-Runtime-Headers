// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INVOCATIONTRAMPOLINE_H
#define INVOCATIONTRAMPOLINE_H


#import <Foundation/Foundation.h>


@interface InvocationTrampoline : NSObject

@property (retain) id *target; // ivar: _target


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)performInvocation:(id)arg0 ;


@end


#endif