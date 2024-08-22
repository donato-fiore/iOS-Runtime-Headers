// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNOBSERVER_H
#define CNOBSERVER_H


#import <Foundation/Foundation.h>


@interface CNObserver : NSObject



// +(id)blockObserverOfClass:(Class)arg0 withResultBlock:(id)arg1 completionBlock:(unk)arg2 failureBlock:(id)arg3  ;
+(id)observerWithCompletionHandler:(id)arg0 ;
+(id)observerWithResultBlock:(id)arg0 ;
// +(id)observerWithResultBlock:(id)arg0 completionBlock:(unk)arg1 failureBlock:(id)arg2  ;
+(id)observerWithWeakTarget:(id)arg0 resultSelector:(SEL)arg1 ;
+(void)sendArray:(id)arg0 error:(id)arg1 toObserver:(id)arg2 ;
+(void)sendArray:(id)arg0 error:(id)arg1 toObserver:(id)arg2 untilCanceled:(id)arg3 ;
+(void)sendObserver:(id)arg0 resultsOfBlock:(id)arg1 ;
+(void)sendResult:(id)arg0 error:(id)arg1 toObserver:(id)arg2 ;


@end


#endif