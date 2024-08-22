// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRISCHEDULEFETCHEXPERIMENTNOTIFICATIONSPERSISTEDTASK_H
#define TRISCHEDULEFETCHEXPERIMENTNOTIFICATIONSPERSISTEDTASK_H

@class TRIPBMessage, TRIPersistedNetworkBehavior;



@interface TRIScheduleFetchExperimentNotificationsPersistedTask : TRIPBMessage

@property (nonatomic) BOOL hasNetworkBehavior;
@property (nonatomic) BOOL hasRollbacksOnly;
@property (retain, nonatomic) TRIPersistedNetworkBehavior *networkBehavior;
@property (nonatomic) BOOL rollbacksOnly;


+(id)descriptor;


@end


#endif