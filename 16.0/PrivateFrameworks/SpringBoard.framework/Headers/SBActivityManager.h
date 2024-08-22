// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBACTIVITYMANAGER_H
#define SBACTIVITYMANAGER_H

@class NSMutableDictionary, NSHashTable, ACUISActivityController, NSString;
@protocol SBActivityObservable, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSoundController.h"

@interface SBActivityManager : NSObject <SBActivityObservable>

 {
    NSMutableDictionary *_platterViewControllerByActivityIdentifier;
    NSMutableDictionary *_systemApertureSceneByActivityIdentifier;
    NSHashTable *_observers;
    os_unfair_lock_s _activityManagerLock;
}


@property (retain, nonatomic) NSObject<BSInvalidatable> *activityAlertSubscription; // ivar: _activityAlertSubscription
@property (retain, nonatomic) ACUISActivityController *activityController; // ivar: _activityController
@property (retain, nonatomic) NSObject<BSInvalidatable> *activitySubscription; // ivar: _activitySubscription
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isActivitySupported;
-(id)_platterViewControllerForActivityIdentifier:(id)arg0 ;
-(id)_systemApertureSceneForActivityIdentifier:(id)arg0 ;
-(id)init;
-(id)lockScreenActivityMetrics;
-(void)_activityFinishedWithProvider:(id)arg0 ;
-(void)_activityStartedWithProvider:(id)arg0 ;
-(void)_dismissActivityAlertWithProvider:(id)arg0 ;
-(void)_handleActivityAlertWithProvider:(id)arg0 ;
-(void)_handleActivityWithProvider:(id)arg0 ;
-(void)_playSoundWithAlertOptions:(id)arg0 ;
-(void)_removeAllObservers;
-(void)addObserver:(id)arg0 ;
-(void)cancelObservingActivityUpdates;
-(void)configureSystemProvidedMetricsRequest;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)startObservingActivityUpdates;


@end


#endif