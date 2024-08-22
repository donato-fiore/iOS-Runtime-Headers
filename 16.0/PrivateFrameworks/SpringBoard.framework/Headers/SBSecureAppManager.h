// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSECUREAPPMANAGER_H
#define SBSECUREAPPMANAGER_H

@class NSString, NSHashTable, NSMutableArray, NSMutableDictionary;
@protocol SBLayoutStateTransitionObserver;

#import <Foundation/Foundation.h>

#import "SBLayoutStateTransitionCoordinator.h"
#import "SBWakeDestination.h"

@interface SBSecureAppManager : NSObject <SBLayoutStateTransitionObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasSecureApp;
@property (readonly, nonatomic) BOOL hasWakeDestination;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSMutableArray *remoteAlertActions; // ivar: _remoteAlertActions
@property (retain, nonatomic) NSMutableDictionary *secureAppActions; // ivar: _secureAppActions
@property (retain, nonatomic) SBLayoutStateTransitionCoordinator *secureAppTransitionCoordinator; // ivar: _secureAppTransitionCoordinator
@property (readonly) Class superclass;
@property (readonly, nonatomic) SBWakeDestination *wakeDestination;


+(id)sharedInstance;
-(BOOL)hasSecureAppOfType:(NSUInteger)arg0 ;
-(id)_applicationForAction:(id)arg0 ;
-(id)_applicationSceneEntityForAction:(id)arg0 ;
-(id)init;
-(id)newApplicationSceneEntityForCurrentSecureApp;
-(id)secureAppAction;
-(void)_addRemoteAlertLockScreenContentAction:(id)arg0 ;
-(void)_addSecureAppAction:(id)arg0 ;
-(void)_enumerateSecureAppActionsByPriorityUsingBlock:(id)arg0 ;
-(void)_enumerateSecureAppActionsOfType:(NSUInteger)arg0 usingBlock:(id)arg1 ;
-(void)addLockScreenContentAction:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)layoutStateTransitionCoordinator:(id)arg0 transitionDidEndWithTransitionContext:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif