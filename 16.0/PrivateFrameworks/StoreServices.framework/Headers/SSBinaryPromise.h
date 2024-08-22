// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSBINARYPROMISE_H
#define SSBINARYPROMISE_H


#import <Foundation/Foundation.h>

#import "SSPromise.h"

@interface SSBinaryPromise : NSObject

@property (retain, nonatomic) SSPromise *backingPromise; // ivar: _backingPromise


+(id)_globalPromiseStorage;
+(id)_globalPromiseStorageAccessQueue;
+(id)promiseWithError:(id)arg0 ;
+(id)promiseWithPromise:(id)arg0 ;
+(id)promiseWithSuccess;
-(BOOL)finishWithError:(id)arg0 ;
-(BOOL)finishWithSuccess;
-(BOOL)resultWithError:(*id)arg0 ;
-(BOOL)resultWithTimeout:(CGFloat)arg0 error:(*id)arg1 ;
-(id)completionHandlerAdapter:(SEL)arg0 ;
-(id)init;
-(id)promiseAdapter;
-(void)_removeFromGlobalPromiseStorage;
-(void)addErrorBlock:(id)arg0 ;
-(void)addFinishBlock:(id)arg0 ;
-(void)addSuccessBlock:(id)arg0 ;
-(void)waitUntilFinished;
-(void)waitUntilFinishedWithTimeout:(CGFloat)arg0 ;


@end


#endif