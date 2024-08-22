// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERFINANCINGCONTROLLERREQUEST_H
#define PKPAYLATERFINANCINGCONTROLLERREQUEST_H

@class NSDecimalNumber, NSOrderedSet, NSString, NSError;

#import <Foundation/Foundation.h>


@interface PKPayLaterFinancingControllerRequest : NSObject

@property (readonly, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, nonatomic) NSUInteger cancellationReason; // ivar: _cancellationReason
@property (readonly, nonatomic) NSOrderedSet *completions; // ivar: _completions
@property (readonly, copy, nonatomic) NSString *optionIdentifierToCancel; // ivar: _optionIdentifierToCancel
@property (readonly, copy, nonatomic) NSError *stateMachineError; // ivar: _stateMachineError


-(BOOL)coalesceWithRequest:(id)arg0 ;
-(id)description;
-(id)initWithTransactionAmount:(id)arg0 completion:(id)arg1 ;
-(id)initWithTransactionAmount:(id)arg0 optionIdentifierToCancel:(id)arg1 cancellationReason:(NSUInteger)arg2 stateMachineError:(id)arg3 completion:(id)arg4 ;
-(void)addCompletions:(id)arg0 ;


@end


#endif