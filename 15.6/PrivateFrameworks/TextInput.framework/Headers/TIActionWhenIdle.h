// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TIACTIONWHENIDLE_H
#define TIACTIONWHENIDLE_H

@class NSInvocation;

#import <Foundation/Foundation.h>


@interface TIActionWhenIdle : NSObject

@property (retain, nonatomic) NSInvocation *invocation; // ivar: _invocation


+(id)actionWhenIdleWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(BOOL)isValid;
-(id)initWithInvocation:(id)arg0 ;
-(id)initWithTarget:(id)arg0 selector:(SEL)arg1 object:(id)arg2 ;
-(void)addObserverToRunLoop;
-(void)invalidate;
-(void)invoke;


@end


#endif