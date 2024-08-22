// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHCOMPANIONWIDGETSCHEDULINGMANAGER_H
#define CHCOMPANIONWIDGETSCHEDULINGMANAGER_H

@class HDProfile, NSString;
@protocol HDHealthDaemonReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver;

#import <Foundation/Foundation.h>


@interface CHCompanionWidgetSchedulingManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver>

 {
    HDProfile *_profile;
    NSInteger _wheelchairUse;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_currentWheelchairUse;
-(id)initWithProfile:(id)arg0 ;
-(void)_donateRelevance;
-(void)_reloadWidgetTimelines;
-(void)_startObservingUserCharacteristics;
-(void)_startObservingWorkouts;
-(void)_stopObservingUserCharacteristics;
-(void)_stopObservingWorkouts;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)userCharacteristicsManager:(id)arg0 didUpdateUserProfile:(id)arg1 ;


@end


#endif