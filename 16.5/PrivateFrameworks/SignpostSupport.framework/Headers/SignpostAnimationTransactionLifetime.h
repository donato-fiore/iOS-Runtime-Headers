// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIGNPOSTANIMATIONTRANSACTIONLIFETIME_H
#define SIGNPOSTANIMATIONTRANSACTIONLIFETIME_H

@class NSString;


#import "SignpostAnimationSubInterval.h"

@interface SignpostAnimationTransactionLifetime : SignpostAnimationSubInterval

@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) unsigned int swapId; // ivar: _swapId
@property (readonly, nonatomic) unsigned int transactionSeed; // ivar: _transactionSeed


-(id)initWithTransactionSeedInterval:(id)arg0 ;


@end


#endif