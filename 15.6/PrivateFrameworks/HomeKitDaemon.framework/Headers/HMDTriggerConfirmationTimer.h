// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDTRIGGERCONFIRMATIONTIMER_H
#define HMDTRIGGERCONFIRMATIONTIMER_H

@class HMFTimer, NSUUID;



@interface HMDTriggerConfirmationTimer : HMFTimer

@property (readonly, nonatomic) NSUUID *executionSessionID; // ivar: _executionSessionID


-(id)description;
-(id)initWithExecutionSessionID:(id)arg0 timeoutInterval:(CGFloat)arg1 ;


@end


#endif