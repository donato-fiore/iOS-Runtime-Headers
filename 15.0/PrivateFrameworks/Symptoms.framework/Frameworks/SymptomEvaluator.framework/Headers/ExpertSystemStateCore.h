// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EXPERTSYSTEMSTATECORE_H
#define EXPERTSYSTEMSTATECORE_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>

#import "ExpertSystemStateCore.h"
#import "StopWatch.h"

@interface ExpertSystemStateCore : NSObject

@property (copy, nonatomic) id *entryAction; // ivar: _entryAction
@property (readonly) NSDictionary *entryPreds; // ivar: _entryPreds
@property (copy, nonatomic) id *exitAction; // ivar: _exitAction
@property (readonly) NSString *label; // ivar: _label
@property (copy, nonatomic) id *loopEvaluation; // ivar: _loopEvaluation
@property int loopTokens; // ivar: _loopTokens
@property (retain) ExpertSystemStateCore *previousState; // ivar: _previousState
@property (readonly) NSUInteger rank; // ivar: _rank
@property (readonly) StopWatch *sojournTime; // ivar: _sojournTime


-(id)initStateWithLabel:(id)arg0 rank:(NSUInteger)arg1 entryPreds:(id)arg2 ;


@end


#endif