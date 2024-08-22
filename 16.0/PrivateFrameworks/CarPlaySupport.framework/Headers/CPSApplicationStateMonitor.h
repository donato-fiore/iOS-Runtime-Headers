// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSAPPLICATIONSTATEMONITOR_H
#define CPSAPPLICATIONSTATEMONITOR_H

@class NSString, CARObserverHashTable, UIWindowScene;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPSApplicationStateMonitor : NSObject {
    NSObject<OS_dispatch_queue> *_stateObserverQueue;
}


@property (readonly, nonatomic, getter=isApplicationActive) BOOL applicationActive;
@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, nonatomic) BOOL canPostManeuverNotification;
@property (readonly, nonatomic) BOOL canPostNavigationAlertNotification;
@property (retain, nonatomic) CARObserverHashTable *stateObservers; // ivar: _stateObservers
@property (readonly, nonatomic) BOOL templateApplicationSceneIsActive;
@property (weak, nonatomic) UIWindowScene *windowSceneForGuidanceWidgetScene; // ivar: _windowSceneForGuidanceWidgetScene
@property (weak, nonatomic) UIWindowScene *windowSceneForMapWidgetScene; // ivar: _windowSceneForMapWidgetScene
@property (weak, nonatomic) UIWindowScene *windowSceneForTemplateApplicationScene; // ivar: _windowSceneForTemplateApplicationScene


-(BOOL)_sceneIsForeground:(id)arg0 ;
-(id)init;
-(void)_notifyObserversForeground:(BOOL)arg0 ;
-(void)_observeScene:(id)arg0 ;
-(void)_sceneActivated:(id)arg0 ;
-(void)_sceneDidEnterBackground:(id)arg0 ;
-(void)_sceneWillEnterForeground:(id)arg0 ;
-(void)addApplicationStateObserver:(id)arg0 ;
-(void)dealloc;
-(void)removeApplicationStateObserver:(id)arg0 ;


@end


#endif