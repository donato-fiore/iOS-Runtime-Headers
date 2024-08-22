// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIUNSUBSCRIBECHANNELPERSISTEDTASK_H
#define TRIUNSUBSCRIBECHANNELPERSISTEDTASK_H

@class TRIPBMessage, NSString, TRIPBTimestamp;



@interface TRIUnsubscribeChannelPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (nonatomic) BOOL hasStartTimestamp;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;


+(id)descriptor;


@end


#endif