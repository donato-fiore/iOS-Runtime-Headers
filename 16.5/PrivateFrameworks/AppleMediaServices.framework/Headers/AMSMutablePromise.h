// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMUTABLEPROMISE_H
#define AMSMUTABLEPROMISE_H



#import "AMSPromise.h"

@interface AMSMutablePromise : AMSPromise



+(BOOL)_finishPromise:(id)arg0 withResult:(id)arg1 error:(id)arg2 logDuplicateFinishes:(BOOL)arg3 ;
+(BOOL)cancelPromise:(id)arg0 ;
+(BOOL)finishPromise:(id)arg0 withError:(id)arg1 ;
+(BOOL)finishPromise:(id)arg0 withPromise:(id)arg1 ;
+(BOOL)finishPromise:(id)arg0 withResult:(id)arg1 ;
+(BOOL)finishPromise:(id)arg0 withResult:(id)arg1 error:(id)arg2 ;
+(id)promiseWithAll:(id)arg0 ;
+(id)promiseWithAll:(id)arg0 timeout:(CGFloat)arg1 ;
+(id)promiseWithAny:(id)arg0 ;
+(id)promiseWithAny:(id)arg0 timeout:(CGFloat)arg1 ;
+(id)promiseWithFlattenedPromises:(id)arg0 ;
+(void)startTimeoutForPromise:(id)arg0 timeout:(CGFloat)arg1 ;
-(BOOL)_finishWithResult:(id)arg0 error:(id)arg1 logDuplicateFinishes:(BOOL)arg2 ;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithPromise:(id)arg0 ;
-(BOOL)finishWithPromiseResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 ;
-(BOOL)finishWithResult:(id)arg0 error:(id)arg1 ;
-(id)catchWithBlock:(id)arg0 ;
-(id)continueWithBlock:(id)arg0 ;
-(id)initWithTimeout:(CGFloat)arg0 ;
-(id)promiseWithTimeout:(CGFloat)arg0 ;
-(id)thenWithBlock:(id)arg0 ;
-(void)startTimeout:(CGFloat)arg0 ;


@end


#endif