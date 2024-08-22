// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSCONTIGUOUSACTIONPERFORMER_H
#define AMSCONTIGUOUSACTIONPERFORMER_H


#import <Foundation/Foundation.h>


@interface AMSContiguousActionPerformer : NSObject {
    ? lock;
    ? queue;
    ? suspendableQueue;
}




-(NSUInteger)performInitialContiguousActionWithBlock:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(void)async:(id)arg0 ;
-(void)continueContiguousActionWithIdentifier:(NSUInteger)arg0 withBlock:(id)arg1 ;
-(void)dealloc;
-(void)finishContiguousActionWithIdentifier:(NSUInteger)arg0 ;
-(void)sync:(id)arg0 ;


@end


#endif