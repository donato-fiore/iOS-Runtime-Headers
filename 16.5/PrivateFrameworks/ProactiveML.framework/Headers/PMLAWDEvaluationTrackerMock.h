// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PMLAWDEVALUATIONTRACKERMOCK_H
#define PMLAWDEVALUATIONTRACKERMOCK_H

@class NSArray;


#import "PMLProtoBufTracker.h"
#import "PMLTrackerMockAdapter.h"

@interface PMLAWDEvaluationTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter *_adapter;
}


@property (readonly, nonatomic) NSArray *trackedEvaluations;


+(id)mockTracker;
+(id)mockTrackerForPlanId:(id)arg0 ;
-(id)initWithAdapter:(id)arg0 modelInfo:(id)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(void)clearTrackedMessages;


@end


#endif