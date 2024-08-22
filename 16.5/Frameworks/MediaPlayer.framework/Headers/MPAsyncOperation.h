// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPASYNCOPERATION_H
#define MPASYNCOPERATION_H

@class NSOperation, NSString, NSError, ICUserIdentity;
@protocol MPUserIdentityConsuming;



@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming>

 {
    BOOL _finished;
    BOOL _executing;
    BOOL _cancelled;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


-(BOOL)isCancelled;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)cancel;
-(void)execute;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif