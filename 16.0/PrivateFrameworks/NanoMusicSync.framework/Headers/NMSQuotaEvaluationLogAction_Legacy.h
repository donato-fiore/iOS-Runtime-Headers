// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NMSQUOTAEVALUATIONLOGACTION_LEGACY_H
#define NMSQUOTAEVALUATIONLOGACTION_LEGACY_H



#import "NMLogAction.h"
#import "NMSQuotaEvaluationState_Legacy.h"

@interface NMSQuotaEvaluationLogAction_Legacy : NMLogAction {
    NSUInteger _type;
    NMSQuotaEvaluationState_Legacy *_state;
}




+(id)logActionWithActionType:(NSUInteger)arg0 state:(id)arg1 ;
-(id)_identifierLogMessage;
-(id)_stringForType:(NSUInteger)arg0 ;
-(id)initWithActionType:(NSUInteger)arg0 state:(id)arg1 ;
-(id)logMessage;


@end


#endif