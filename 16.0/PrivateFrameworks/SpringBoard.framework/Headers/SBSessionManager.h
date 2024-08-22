// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSESSIONMANAGER_H
#define SBSESSIONMANAGER_H

@class NSMutableDictionary, NSHashTable, NSString, SNUISessionController;
@protocol SBSessionObservable, BSInvalidatable;

#import <Foundation/Foundation.h>

#import "SBSoundController.h"

@interface SBSessionManager : NSObject <SBSessionObservable>

 {
    NSMutableDictionary *_platterViewControllerBySessionIdentifier;
    NSMutableDictionary *_systemApertureSceneBySessionIdentifier;
    NSHashTable *_observers;
    os_unfair_lock_s _sessionManagerLock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<BSInvalidatable> *sessionAlertSubscription; // ivar: _sessionAlertSubscription
@property (retain, nonatomic) SNUISessionController *sessionController; // ivar: _sessionController
@property (retain, nonatomic) NSObject<BSInvalidatable> *sessionSubscription; // ivar: _sessionSubscription
@property (retain, nonatomic) SBSoundController *soundController; // ivar: _soundController
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)isSessionSupported;
-(id)init;
-(id)lockScreenActivityMetrics;
-(id)platterViewControllerForSessionIdentifier:(id)arg0 ;
-(id)systemApertureSceneForSessionIdentifier:(id)arg0 ;
-(void)_dismissSessionAlertWithProvider:(id)arg0 ;
-(void)_handleSessionAlertWithProvider:(id)arg0 ;
-(void)_handleSessionWithProvider:(id)arg0 ;
-(void)_playSoundWithAlertOptions:(id)arg0 ;
-(void)_postBannerWithAlertProvider:(id)arg0 ;
-(void)_presentSessionAlertWithProvider:(id)arg0 ;
-(void)_removeAllObservers;
-(void)_sessionFinishedWithProvider:(id)arg0 ;
-(void)_sessionStartedWithProvider:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)cancelListeningActiveSessions;
-(void)configureSystemProvidedMetricsRequest;
-(void)dealloc;
-(void)removeObserver:(id)arg0 ;
-(void)startListeningForActiveSessions;


@end


#endif