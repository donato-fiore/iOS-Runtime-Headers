// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STTIMERSHOWTIMERANDPERFORMACTION_H
#define STTIMERSHOWTIMERANDPERFORMACTION_H

@class AFSiriRequest, NSArray;



@interface STTimerShowTimerAndPerformAction : AFSiriRequest {
    NSUInteger _action;
}


@property (copy, nonatomic) NSArray *templateActions; // ivar: _templateActions
@property (copy, nonatomic) NSArray *timers; // ivar: _timers


+(BOOL)supportsSecureCoding;
-(NSUInteger)action;
-(id)_initWithTimer:(id)arg0 action:(NSUInteger)arg1 ;
-(id)_initWithTimers:(id)arg0 action:(NSUInteger)arg1 ;
-(id)_initWithTimers:(id)arg0 templateActions:(id)arg1 timerAction:(NSUInteger)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)timer;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif