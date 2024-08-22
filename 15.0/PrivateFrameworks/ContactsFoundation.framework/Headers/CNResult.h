// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNRESULT_H
#define CNRESULT_H

@class NSError;

#import <Foundation/Foundation.h>

#import "CNEither.h"

@interface CNResult : NSObject

@property (readonly) CNEither *either; // ivar: _either
@property (readonly, copy) NSError *error;
@property (readonly) BOOL isFailure;
@property (readonly) BOOL isSuccess;
@property (readonly) id *value;


+(id)failureWithError:(id)arg0 ;
+(id)resultWithBlock:(id)arg0 ;
+(id)resultWithFuture:(id)arg0 ;
+(id)resultWithValue:(id)arg0 orError:(id)arg1 ;
+(id)successWithValue:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)flatMap:(id)arg0 ;
-(id)initWithError:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(id)initWithValue:(id)arg0 error:(id)arg1 ;
-(id)recover:(id)arg0 ;
-(id)valueWithError:(*id)arg0 ;


@end


#endif