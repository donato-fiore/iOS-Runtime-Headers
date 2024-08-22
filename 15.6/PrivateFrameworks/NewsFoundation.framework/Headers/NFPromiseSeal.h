// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NFPROMISESEAL_H
#define NFPROMISESEAL_H

@class NSError, NSMutableArray;

#import <Foundation/Foundation.h>

#import "NFUnfairLock.h"

@interface NFPromiseSeal : NSObject

@property (retain, nonatomic) NSError *error; // ivar: _error
@property (retain, nonatomic) NSMutableArray *handlers; // ivar: _handlers
@property (readonly, nonatomic) NFUnfairLock *lock; // ivar: _lock
@property (nonatomic) NSUInteger state; // ivar: _state
@property (retain, nonatomic) id *value; // ivar: _value


-(id)init;
-(id)initWithError:(id)arg0 ;
-(id)initWithValue:(id)arg0 ;
-(void)alwaysOn:(id)arg0 always:(id)arg1 ;
-(void)dealloc;
-(void)registerHandler:(id)arg0 ;
-(void)reject:(id)arg0 ;
-(void)resolve:(id)arg0 ;
// -(void)resolveOn:(id)arg0 reject:(id)arg1 resolve:(unk)arg2  ;
-(void)seal:(id)arg0 error:(id)arg1 resolution:(NSUInteger)arg2 ;


@end


#endif