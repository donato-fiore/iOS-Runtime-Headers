// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIGNPOSTCOMMITINTERVAL_H
#define SIGNPOSTCOMMITINTERVAL_H

@class NSString;


#import "SignpostAnimationSubInterval.h"

@interface SignpostCommitInterval : SignpostAnimationSubInterval

@property (readonly, nonatomic) NSString *executablePath; // ivar: _executablePath
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) NSString *processName; // ivar: _processName
@property (readonly, nonatomic) NSUInteger threadID; // ivar: _threadID
@property (readonly, nonatomic) unsigned int transactionSeed; // ivar: _transactionSeed


-(id)initWithCommitInterval:(id)arg0 ;


@end


#endif