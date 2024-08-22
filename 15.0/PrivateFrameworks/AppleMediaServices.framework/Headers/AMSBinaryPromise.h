// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSBINARYPROMISE_H
#define AMSBINARYPROMISE_H


#import <Foundation/Foundation.h>

#import "AMSPromise.h"

@interface AMSBinaryPromise : NSObject

@property (retain, nonatomic) AMSPromise *backingPromise; // ivar: _backingPromise


+(id)_globalPromiseStorage;
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseWithAll:(id)arg0 ;
+(id)promiseWithAny:(id)arg0 ;
+(id)promiseWithError:(id)arg0 ;
+(id)promiseWithFlattenedPromises:(id)arg0 ;
+(id)promiseWithPromise:(id)arg0 ;
+(id)promiseWithSuccess;
-(BOOL)cancel;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithPromise:(id)arg0 ;
-(BOOL)finishWithSuccess;
-(BOOL)finishWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(BOOL)resultWithError:(*id)arg0 ;
-(BOOL)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(id)catchWithBlock:(id)arg0 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)continueWithBlock:(id)arg0 ;
-(id)init;
-(id)promiseAdapter;
-(id)thenWithBlock:(id)arg0 ;
-(void)_removeFromGlobalPromiseStorage;
-(void)addErrorBlock:(id)arg0 ;
-(void)addFinishBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)waitUntilFinished;
-(void)waitUntilFinishedWithTimeout:(CGFloat)arg0 ;


@end


#endif