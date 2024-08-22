// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFAPPLICATIONCONTEXT_H
#define WFAPPLICATIONCONTEXT_H

@class NSBundle, NSArray, NSMutableDictionary, NSString, NSLock;
@protocol WFApplicationContextProvider;

#import <Foundation/Foundation.h>


@interface WFApplicationContext : NSObject

@property (readonly, nonatomic) NSBundle *applicationBundle; // ivar: _applicationBundle
@property (readonly, nonatomic) NSArray *applicationBundleURLSchemes;
@property (readonly, nonatomic) NSInteger applicationState;
@property (retain, nonatomic) NSMutableDictionary *applicationStateObserversByEvent; // ivar: _applicationStateObserversByEvent
@property (readonly, nonatomic) NSBundle *bundle;
@property (readonly, nonatomic) BOOL canLoadShortcutsDatabase; // ivar: _canLoadShortcutsDatabase
@property (nonatomic) BOOL canLoadShortcutsDatabaseEntitlementChecked; // ivar: _canLoadShortcutsDatabaseEntitlementChecked
@property (readonly, nonatomic) NSString *currentUserInterfaceType;
@property (nonatomic, getter=isIdleTimerDisabled) BOOL idleTimerDisabled;
@property (nonatomic) BOOL inBackground; // ivar: _inBackground
@property (nonatomic) BOOL inactive; // ivar: _inactive
@property (readonly, nonatomic) NSLock *observersLock; // ivar: _observersLock
@property (retain, nonatomic) NSObject<WFApplicationContextProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) BOOL shouldReverseLayoutDirection;
@property (readonly, nonatomic) NSInteger userInterfaceStyle;


+(id)sharedContext;
-(BOOL)canOpenURL:(id)arg0 ;
-(id)applicationOrNil;
-(id)init;
-(id)keyWindow;
-(void)_openURL:(id)arg0 withBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)addApplicationStateObserver:(id)arg0 forEvent:(NSInteger)arg1 ;
-(void)applicationDidBecomeActive;
-(void)applicationDidEnterBackground;
-(void)applicationWillEnterForeground;
-(void)applicationWillResignActive;
-(void)dealloc;
-(void)handleApplicationStateEvent:(NSInteger)arg0 ;
-(void)openURL:(id)arg0 ;
-(void)openURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)openURL:(id)arg0 userInterface:(id)arg1 completionHandler:(id)arg2 ;
-(void)openURL:(id)arg0 withBundleIdentifier:(id)arg1 userInterface:(id)arg2 completionHandler:(id)arg3 ;
-(void)removeApplicationStateObserver:(id)arg0 forEvent:(NSInteger)arg1 ;
-(void)suspend;


@end


#endif