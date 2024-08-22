// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAP2ASYNCHRONOUSOPERATION_H
#define HAP2ASYNCHRONOUSOPERATION_H

@class NSOperation, HMFActivity, NSError;


#import "HAP2PropertyLock.h"

@interface HAP2AsynchronousOperation : NSOperation {
    HAP2PropertyLock *_propertyLock;
}


@property (readonly, nonatomic) HMFActivity *activity; // ivar: _activity
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isExecuting) BOOL executing; // ivar: _executing
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
-(BOOL)isAsynchronous;
-(id)init;
-(id)initWithName:(id)arg0 ;
-(id)initWithName:(id)arg0 activity:(id)arg1 ;
-(id)initWithName:(id)arg0 optionalActivity:(id)arg1 ;
-(void)cancel;
-(void)cancelWithError:(id)arg0 ;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)main;
-(void)start;


@end


#endif