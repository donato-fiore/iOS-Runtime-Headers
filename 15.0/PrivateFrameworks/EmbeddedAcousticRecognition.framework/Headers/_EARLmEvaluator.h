// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _EARLMEVALUATOR_H
#define _EARLMEVALUATOR_H


#import <Foundation/Foundation.h>


@interface _EARLmEvaluator : NSObject {
    shared_ptr<quasar::LmEvaluator> _evaluator;
}


@property (nonatomic) BOOL roundingEnabled; // ivar: _roundingEnabled


+(void)initialize;
-(BOOL)runEvaluationWithData:(id)arg0 handle:(id)arg1 result:(*id)arg2 ;
-(BOOL)runEvaluationWithData:(id)arg0 handle:(id)arg1 result:(*id)arg2 bestWeight:(*float)arg3 ;
// -(BOOL)runEvaluationWithData:(id)arg0 handle:(id)arg1 shouldStop:(id)arg2 result:(unk)arg3 bestWeight:(*id)arg4  ;
-(id)initWithConfiguration:(id)arg0 recognizerConfiguration:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 root:(id)arg1 recognizerConfiguration:(id)arg2 ;


@end


#endif