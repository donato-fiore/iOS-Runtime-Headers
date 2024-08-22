// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNOBSERVABLECONTRACTTERMINATIONCONTEXT_H
#define CNOBSERVABLECONTRACTTERMINATIONCONTEXT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface CNObservableContractTerminationContext : NSObject

@property (readonly, copy) NSArray *callStack; // ivar: _callStack
@property (readonly) NSUInteger threadId; // ivar: _threadId


+(NSUInteger)currentThreadId;
+(id)currentContext;
-(id)initWithCallStack:(id)arg0 threadId:(NSUInteger)arg1 ;


@end


#endif