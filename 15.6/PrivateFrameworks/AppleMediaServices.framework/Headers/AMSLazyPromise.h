// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSLAZYPROMISE_H
#define AMSLAZYPROMISE_H

@class NSLock;


#import "AMSPromise.h"

@interface AMSLazyPromise : AMSPromise

@property (copy, nonatomic) id *block; // ivar: _block
@property (nonatomic) BOOL executedBlock; // ivar: _executedBlock
@property (retain, nonatomic) NSLock *lock; // ivar: _lock
@property (nonatomic) CGFloat timeout; // ivar: _timeout


-(id)initWithBlock:(id)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 block:(id)arg1 ;
-(id)resultBeforeDate:(id)arg0 error:(*id)arg1 ;
-(id)resultWithError:(*id)arg0 ;
-(id)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(void)addErrorBlock:(id)arg0 ;
-(void)addFinishBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;


@end


#endif