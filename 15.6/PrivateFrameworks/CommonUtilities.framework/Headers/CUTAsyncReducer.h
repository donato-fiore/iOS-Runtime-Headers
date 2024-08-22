// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUTASYNCREDUCER_H
#define CUTASYNCREDUCER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "CUTResult.h"

@interface CUTAsyncReducer : NSObject

@property (copy, nonatomic) id *completionBlock; // ivar: _completionBlock
@property (retain, nonatomic) NSArray *input; // ivar: _input
@property (copy, nonatomic) id *reducerBlock; // ivar: _reducerBlock
@property (retain, nonatomic) CUTResult *result; // ivar: _result


-(id)initWithInput:(id)arg0 initialValue:(id)arg1 ;
-(void)_completeWithResult:(id)arg0 ;
-(void)_reduceWithPending:(id)arg0 visited:(id)arg1 currentResult:(id)arg2 completion:(id)arg3 ;
-(void)reduceWithCompletion:(id)arg0 ;


@end


#endif