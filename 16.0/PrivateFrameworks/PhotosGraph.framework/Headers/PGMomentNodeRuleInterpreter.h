// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGMOMENTNODERULEINTERPRETER_H
#define PGMOMENTNODERULEINTERPRETER_H

@class PLLibraryScopeRuleInterpreter;


#import "PGGraph.h"

@interface PGMomentNodeRuleInterpreter : PLLibraryScopeRuleInterpreter

@property (retain, nonatomic) PGGraph *graph; // ivar: _graph


-(id)evaluateMomentNodes:(id)arg0 forDateRangeCondition:(id)arg1 ;
-(id)evaluateMomentNodes:(id)arg0 forPersonCondition:(id)arg1 ;
-(id)evaluateObjects:(id)arg0 forCondition:(id)arg1 ;
-(id)initWithGraph:(id)arg0 ;


@end


#endif