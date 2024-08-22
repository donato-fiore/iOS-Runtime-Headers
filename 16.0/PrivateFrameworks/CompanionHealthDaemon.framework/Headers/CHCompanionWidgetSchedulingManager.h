// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHCOMPANIONWIDGETSCHEDULINGMANAGER_H
#define CHCOMPANIONWIDGETSCHEDULINGMANAGER_H

@class HDProfile, NSString;
@protocol HDProfileReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver;

#import <Foundation/Foundation.h>


@interface CHCompanionWidgetSchedulingManager : NSObject <HDProfileReadyObserver, HDDataObserver, HDUserCharacteristicsProfileObserver>

 {
    HDProfile *_profile;
    NSInteger _wheelchairUse;
    int _standalonePhoneFitnessModeChangeToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)_currentWheelchairUse;
-(id)initWithProfile:(id)arg0 ;
-(void)_donateRelevance;
-(void)_reloadWidgetTimelines;
-(void)_startObservingStandalonePhoneFitnessMode;
-(void)_startObservingUserCharacteristics;
-(void)_startObservingWorkouts;
-(void)_stopObservingStandalonePhoneFitnessMode;
-(void)_stopObservingUserCharacteristics;
-(void)_stopObservingWorkouts;
-(void)dealloc;
-(void)profileDidBecomeReady:(id)arg0 ;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;
-(void)userCharacteristicsManager:(id)arg0 didUpdateUserProfile:(id)arg1 ;


@end


#endif