// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSOBSERVER_H
#define AMSOBSERVER_H


#import <Foundation/Foundation.h>


@interface AMSObserver : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (copy, nonatomic) id *failureBlock; // ivar: _failureBlock
@property (copy, nonatomic) id *resultBlock; // ivar: _resultBlock


-(id)initWithResultBlock:(id)arg0 ;
// -(id)initWithResultBlock:(id)arg0 completionBlock:(unk)arg1 failureBlock:(id)arg2  ;
-(void)_sendCompletionUsingQueue:(id)arg0 ;
-(void)_sendFailure:(id)arg0 usingQueue:(id)arg1 ;
-(void)_sendResult:(id)arg0 usingQueue:(id)arg1 ;


@end


#endif