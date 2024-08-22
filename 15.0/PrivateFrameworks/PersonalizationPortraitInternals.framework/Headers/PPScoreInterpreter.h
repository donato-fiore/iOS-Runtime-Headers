// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPSCOREINTERPRETER_H
#define PPSCOREINTERPRETER_H

@class _PASLock;

#import <Foundation/Foundation.h>

#import "PPScoreInterpreterBytecode.h"
#import "PPBaseScoreInputSet.h"

@interface PPScoreInterpreter : NSObject {
    PPScoreInterpreterBytecode *_bytecode;
    PPBaseScoreInputSet *_scoreInputSet;
    _PASLock *_reusableContext;
}




+(id)scoreInterpreterFromAsset:(id)arg0 ;
+(id)scoreInterpreterFromFactorName:(id)arg0 namespaceName:(id)arg1 ;
-(id)evaluateWithScoreInputs:(id)arg0 ;
-(id)evaluateWithScoreInputs:(id)arg0 previousSubscores:(id)arg1 ;
-(id)init;
-(id)initWithBytecode:(id)arg0 ;
-(id)initWithBytecode:(id)arg0 scoreInputSet:(id)arg1 ;
-(id)initWithParseRoot:(id)arg0 scalarSubscoreCount:(NSUInteger)arg1 arraySubscoreCount:(NSUInteger)arg2 objectSubscoreCount:(NSUInteger)arg3 ;
-(void)cleanupReusableComponents;
// -(void)evaluateWithPreviousStageSubscores:(id)arg0 scoreInputInitializationBlock:(id)arg1 scoreInputAssignmentBlock:(unk)arg2 outputBlock:(id)arg3  ;


@end


#endif