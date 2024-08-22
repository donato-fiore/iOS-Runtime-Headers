// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALCULATEREQUEST_H
#define CALCULATEREQUEST_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "CalculateResult.h"

@interface CalculateRequest : NSObject

@property (retain, nonatomic) NSString *expression; // ivar: _expression
@property (nonatomic) BOOL isCanceled; // ivar: _isCanceled
@property (retain, nonatomic) NSDictionary *options; // ivar: _options
@property (retain, nonatomic) CalculateResult *result; // ivar: _result
@property (copy, nonatomic) id *resultHandler; // ivar: _resultHandler


+(id)serialQueue;
+(void)_lock;
+(void)_unlock;
-(void)cancel;
-(void)finish;
-(void)update;


@end


#endif