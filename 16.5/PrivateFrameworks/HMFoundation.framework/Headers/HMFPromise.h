// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMFPROMISE_H
#define HMFPROMISE_H


#import <Foundation/Foundation.h>

#import "HMFAsyncFuture.h"

@interface HMFPromise : NSObject {
    HMFAsyncFuture *_future;
    id *_completion;
    atomic_flag _resolved;
}


@property (readonly, copy) id *errorOnlyResolverBlock;
@property (readonly, copy) id *resolverBlock;
@property (readonly, copy) id *voidResolverBlock;


-(BOOL)fulfillWithNoValue;
-(BOOL)fulfillWithValue:(id)arg0 ;
-(BOOL)rejectWithError:(id)arg0 ;
-(BOOL)resolveWithFuture:(id)arg0 ;
-(void)dealloc;


@end


#endif