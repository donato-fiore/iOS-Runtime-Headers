// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDINVOCATIONFORWARDER_H
#define IMDINVOCATIONFORWARDER_H

@class NSLock, NSMutableArray;

#import <Foundation/Foundation.h>


@interface IMDInvocationForwarder : NSObject

@property (retain, nonatomic) NSLock *_lock; // ivar: _lock
@property (retain, nonatomic) NSMutableArray *_targets; // ivar: _targets


-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithTargets:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)addTarget:(id)arg0 ;
-(void)dealloc;
-(void)forwardInvocation:(id)arg0 ;
-(void)removeTarget:(id)arg0 ;


@end


#endif