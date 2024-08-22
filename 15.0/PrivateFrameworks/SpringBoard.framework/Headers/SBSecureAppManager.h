// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSECUREAPPMANAGER_H
#define SBSECUREAPPMANAGER_H

@class NSHashTable, NSMutableArray, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "SBWakeDestination.h"

@interface SBSecureAppManager : NSObject

@property (readonly, nonatomic) BOOL hasSecureApp;
@property (readonly, nonatomic) BOOL hasWakeDestinaton;
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (retain, nonatomic) NSMutableArray *remoteAlertActions; // ivar: _remoteAlertActions
@property (retain, nonatomic) NSMutableDictionary *secureAppActions; // ivar: _secureAppActions
@property (readonly, nonatomic) SBWakeDestination *wakeDestinaton;


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
-(void)removeObserver:(id)arg0 ;


@end


#endif