// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTTIMERINTENTHANDLER_H
#define MTTIMERINTENTHANDLER_H

@protocol MTTimerManagerIntentSupport, MTTimerManagerProviding;

#import <Foundation/Foundation.h>


@interface MTTimerIntentHandler : NSObject

@property (retain, nonatomic) NSObject<MTTimerManagerIntentSupport> *timerManager; // ivar: _timerManager
@property (weak, nonatomic) NSObject<MTTimerManagerProviding> *timerManagerProvider; // ivar: _timerManagerProvider


-(BOOL)_isDefaultTimer:(id)arg0 ;
-(id)_alternateTimersForTargetTimerState:(NSInteger)arg0 type:(NSInteger)arg1 inTimers:(id)arg2 allowedTimerStates:(id)arg3 ;
-(id)_onlyUnnamedTimerInTimers:(id)arg0 forTargetTimer:(id)arg1 allowMultiple:(BOOL)arg2 ;
-(void)_genericallyResolveTargetTimer:(id)arg0 multiple:(BOOL)arg1 allowedTimerStatesForFollowup:(id)arg2 completion:(id)arg3 ;
-(void)_matchTimersFromIntentsTimer:(id)arg0 excludeStoppedTimers:(BOOL)arg1 completion:(id)arg2 ;


@end


#endif