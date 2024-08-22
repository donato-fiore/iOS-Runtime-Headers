// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPERSISTEDEVALUATIONSTATUS_H
#define TRIPERSISTEDEVALUATIONSTATUS_H

@class TRIPBMessage, NSString, TRIPBTimestamp;


#import "TRIPersistedFactorsState.h"

@interface TRIPersistedEvaluationStatus : TRIPBMessage

@property (retain, nonatomic) TRIPersistedFactorsState *evalState;
@property (copy, nonatomic) NSString *evaluationId;
@property (nonatomic) BOOL hasEvalState;
@property (nonatomic) BOOL hasEvaluationId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) TRIPBTimestamp *timestamp;
@property (nonatomic) unsigned int type;


+(id)descriptor;


@end


#endif