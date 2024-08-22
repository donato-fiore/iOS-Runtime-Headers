// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BPSFUTURERESULT_H
#define BPSFUTURERESULT_H

@class NSError;

#import <Foundation/Foundation.h>


@interface BPSFutureResult : NSObject

@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly, nonatomic) id *value; // ivar: _value


+(id)failureWithError:(id)arg0 ;
+(id)successWithValue:(id)arg0 ;
-(id)initWithState:(NSInteger)arg0 value:(id)arg1 error:(id)arg2 ;


@end


#endif