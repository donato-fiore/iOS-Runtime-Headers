// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _DKMDCSWORKOUTMONITOR_H
#define _DKMDCSWORKOUTMONITOR_H

@class DKMonitor, _CDClientContext, _CDContextualChangeRegistration, BMWorkoutStream;



@interface _DKMDCSWorkoutMonitor : DKMonitor {
    _CDClientContext *_userContext;
    _CDContextualChangeRegistration *_registration;
}


@property (retain, nonatomic) BMWorkoutStream *workoutStream; // ivar: _workoutStream


+(id)entitlements;
+(id)eventStream;
-(id)createWorkoutPredicate;
-(id)init;
-(void)start;
-(void)stop;


@end


#endif