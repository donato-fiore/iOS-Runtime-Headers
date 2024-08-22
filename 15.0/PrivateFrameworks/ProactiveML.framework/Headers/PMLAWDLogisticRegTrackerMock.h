// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMLAWDLOGISTICREGTRACKERMOCK_H
#define PMLAWDLOGISTICREGTRACKERMOCK_H

@class NSArray;


#import "PMLProtoBufTracker.h"
#import "PMLTrackerMockAdapter.h"

@interface PMLAWDLogisticRegTrackerMock : PMLProtoBufTracker {
    PMLTrackerMockAdapter *_adapter;
}


@property (readonly, nonatomic) NSArray *trackedGradients;
@property (readonly, nonatomic) NSArray *trackedWeights;


+(id)mockTracker;
+(id)mockTrackerForPlanId:(id)arg0 ;
-(id)initWithAdapter:(id)arg0 modelInfo:(id)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(void)clearTrackedMessages;


@end


#endif