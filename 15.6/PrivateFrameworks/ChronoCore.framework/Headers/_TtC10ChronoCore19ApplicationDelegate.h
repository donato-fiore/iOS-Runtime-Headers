// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC10CHRONOCORE19APPLICATIONDELEGATE_H
#define _TTC10CHRONOCORE19APPLICATIONDELEGATE_H

@class UIResponder;
@protocol UIApplicationDelegate;



@interface _TtC10ChronoCore19ApplicationDelegate : UIResponder <UIApplicationDelegate>

 {
    ? environmentProvidingFactory;
    ? widgetCenterServer;
    ? servicesServer;
    ? toolServicesServer;
    ? extensionManager;
    ? placeholderService;
    ? timelineService;
    ? snapshotService;
    ? cacheByExtensionProvider;
    ? keybagStateProvider;
    ? taskService;
    ? descriptorService;
    ? configurationService;
    ? stateCaptureService;
    ? dataProtectionMonitor;
    ? powerlogViewService;
    ? powerlogUpdateService;
    ? powerlogSuggestionService;
    ? locationService;
    ? localeChangeCoordinator;
    ? layerSnapshotter;
    ? userManager;
    ? clientScreenshotManager;
    ? duetWidgetConfigurationManager;
    ? subscriptions;
    ? servicesBootstrapExtension;
    ? finishLaunchingToken;
    ? enableGarbageCollection;
    ? appAuthorizationMonitor;
    ? reaperQueue;
    ? reaperTimer;
    ? preferences;
    ? wakeManager;
    ? sigtermSource;
}




-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(id)application:(id)arg0 configurationForConnectingSceneSession:(id)arg1 options:(id)arg2 ;
-(id)init;
-(void)applicationDidReceiveMemoryWarning:(id)arg0 ;


@end


#endif