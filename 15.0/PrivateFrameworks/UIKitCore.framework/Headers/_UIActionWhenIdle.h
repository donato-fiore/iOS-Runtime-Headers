// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIACTIONWHENIDLE_H
#define _UIACTIONWHENIDLE_H

@class NSInvocation;

#import <Foundation/Foundation.h>


@interface _UIActionWhenIdle : NSObject

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