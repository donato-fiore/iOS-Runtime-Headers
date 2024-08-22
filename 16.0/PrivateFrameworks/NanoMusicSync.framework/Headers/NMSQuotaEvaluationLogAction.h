// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSQUOTAEVALUATIONLOGACTION_H
#define NMSQUOTAEVALUATIONLOGACTION_H



#import "NMLogAction.h"
#import "NMSQuotaEvaluationState.h"

@interface NMSQuotaEvaluationLogAction : NMLogAction {
    NSUInteger _type;
    NMSQuotaEvaluationState *_state;
}




+(id)logActionWithActionType:(NSUInteger)arg0 state:(id)arg1 ;
-(id)_identifierLogMessage;
-(id)_stringForType:(NSUInteger)arg0 ;
-(id)initWithActionType:(NSUInteger)arg0 state:(id)arg1 ;
-(id)logMessage;


@end


#endif