// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AAFPROMISE_H
#define AAFPROMISE_H

@class NSError, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AAFPromise.h"

@interface AAFPromise : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AAFPromise *_selfReference;
    BOOL _completed;
    id *_value;
    NSError *_error;
    NSMutableArray *_callbacks;
}


@property (readonly, nonatomic) id *catch;
@property (readonly, nonatomic) id *then;


+(id)all:(id)arg0 ;
-(id)_chain:(id)arg0 ;
// -(id)_placeBlock:(id)arg0 onQueue:(unk)arg1  ;
-(id)catch:(id)arg0 ;
// -(id)catch:(id)arg0 onQueue:(unk)arg1  ;
-(id)initWithBlock:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)then:(id)arg0 ;
// -(id)then:(id)arg0 onQueue:(unk)arg1  ;
-(void)_completeWithValue:(id)arg0 error:(id)arg1 ;
-(void)_handleChainingResult:(id)arg0 withCompletion:(id)arg1 ;
-(void)_startWithBlock:(id)arg0 ;
-(void)abortWithError:(id)arg0 ;
-(void)onComplete:(id)arg0 ;
// -(void)onComplete:(id)arg0 onQueue:(unk)arg1  ;


@end


#endif