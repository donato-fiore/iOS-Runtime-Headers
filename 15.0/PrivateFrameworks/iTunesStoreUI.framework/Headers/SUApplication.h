// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUAPPLICATION_H
#define SUAPPLICATION_H

@class UIApplication, UIWindow, NSString, UIColor;
@protocol UIApplicationDelegate;



@interface SUApplication : UIApplication <UIApplicationDelegate>

 {
    BOOL _terminateOnNextSuspend;
    UIWindow *_window;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *interactionTintColor; // ivar: _interactionTintColor
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window;


-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)application:(id)arg0 openURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3 ;
-(BOOL)applicationSuspendWithSettings:(id)arg0 ;
-(BOOL)runTest:(id)arg0 options:(id)arg1 ;
-(CGFloat)defaultImageSnapshotExpiration;
-(NSUInteger)application:(id)arg0 supportedInterfaceOrientationsForWindow:(id)arg1 ;
-(id)init;
-(void)_applicationDidFinishLaunching:(id)arg0 ;
-(void)_exitForStoreNotAvailable;
-(void)_exitIfStoreNotAvailable;
-(void)_runScriptTestWithOptions:(id)arg0 ;
-(void)_setupUI;
-(void)_storeEnabledChangeNotification:(id)arg0 ;
-(void)_teardownUI;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)applicationDidFinishLaunching:(id)arg0 ;
-(void)applicationWillEnterForeground:(id)arg0 ;
-(void)dealloc;
-(void)runTestInvocation:(id)arg0 ;


@end


#endif