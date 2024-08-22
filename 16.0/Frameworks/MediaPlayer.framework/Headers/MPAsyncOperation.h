// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPASYNCOPERATION_H
#define MPASYNCOPERATION_H

@class NSOperation, NSString, NSError, ICUserIdentity;
@protocol MPUserIdentityConsuming, OS_dispatch_queue;



@interface MPAsyncOperation : NSOperation <MPUserIdentityConsuming>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _isExecuting;
    BOOL _isFinished;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity


-(BOOL)isAsynchronous;
-(BOOL)isConcurrent;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(id)init;
-(void)execute;
-(void)finish;
-(void)finishWithError:(id)arg0 ;
-(void)start;


@end


#endif