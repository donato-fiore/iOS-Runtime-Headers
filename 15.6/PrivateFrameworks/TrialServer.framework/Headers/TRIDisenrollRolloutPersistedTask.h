// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRIDISENROLLROLLOUTPERSISTEDTASK_H
#define TRIDISENROLLROLLOUTPERSISTEDTASK_H

@class TRIPBMessage, NSString;



@interface TRIDisenrollRolloutPersistedTask : TRIPBMessage

@property (nonatomic) BOOL hasRolloutId;
@property (copy, nonatomic) NSString *rolloutId;


+(id)descriptor;


@end


#endif