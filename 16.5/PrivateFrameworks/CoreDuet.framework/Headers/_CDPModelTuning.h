// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _CDPMODELTUNING_H
#define _CDPMODELTUNING_H

@class NSIndexSet;

#import <Foundation/Foundation.h>

#import "_CDPModelTuningState.h"
#import "_CDPSimpleModel.h"

@interface _CDPModelTuning : NSObject

@property (readonly, nonatomic) _CDPModelTuningState *currentState; // ivar: _currentState
@property (copy, nonatomic) id *heartBeat; // ivar: _heartBeat
@property (retain, nonatomic) _CDPSimpleModel *model; // ivar: _model
@property (readonly, nonatomic) int numberOfGridTests; // ivar: _numberOfGridTests
@property (copy, nonatomic) id *scorer; // ivar: _scorer
@property (retain, nonatomic) NSIndexSet *testIndices; // ivar: _testIndices


+(*unsigned int)_newSetDifference:(*unsigned int)arg0 setLength:(NSUInteger)arg1 subset:(*unsigned int)arg2 subsetLength:(NSUInteger)arg3 ;
+(id)f1Score:(SEL)arg0 ;
+(id)f2Score:(SEL)arg0 ;
+(id)fScoreWithBeta:(SEL)arg0 ;
+(void)_addArray:(*float)arg0 size:(NSUInteger)arg1 inArray:(*float)arg2 ;
+(void)_cumulativeSumOfArray:(*float)arg0 size:(NSUInteger)arg1 reverse:(BOOL)arg2 ;
+(void)_enumerateSubsetsOfSet:(*unsigned int)arg0 setLength:(NSUInteger)arg1 index:(NSUInteger)arg2 subset:(*unsigned int)arg3 subsetLength:(NSUInteger)arg4 index:(NSUInteger)arg5 callback:(id)arg6 ;
+(void)_enumerateSubsetsOfSet:(*unsigned int)arg0 setLength:(NSUInteger)arg1 withSize:(NSUInteger)arg2 callback:(id)arg3 ;
-(float)_testModelWithThreshold:(*float)arg0 ;
-(void)resumeTuningWithState:(id)arg0 ;


@end


#endif