// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHAIRPLAYSCREENCONTROLLER_H
#define PHAIRPLAYSCREENCONTROLLER_H

@class UIViewController, NSDate, NSString, AVOutputContext;
@protocol PUAirPlayScreenReceiver, PUAirPlayRouteObserverRegistryDelegate;

#import <Foundation/Foundation.h>

#import "PUAirPlayContentRegistry.h"
#import "PUAirPlayScreen.h"
#import "PUAirPlayRootViewController.h"
#import "PUAirPlayRouteObserverRegistry.h"
#import "PUAirPlayScreenDetector.h"

@interface PHAirPlayScreenController : NSObject <PUAirPlayScreenReceiver, PUAirPlayRouteObserverRegistryDelegate>



@property (retain, nonatomic, setter=_setContentRegistry:) PUAirPlayContentRegistry *_contentRegistry; // ivar: __contentRegistry
@property (retain, nonatomic, setter=_setCurrentScreen:) PUAirPlayScreen *_currentScreen; // ivar: __currentScreen
@property (retain, nonatomic, setter=_setLastDisplayedContent:) UIViewController *_lastDisplayedContent; // ivar: __lastDisplayedContent
@property (retain, nonatomic, setter=_setLastScreenConnectDate:) NSDate *_lastScreenConnectDate; // ivar: __lastScreenConnectDate
@property (retain, nonatomic, setter=_setLastScreenRequestDate:) NSDate *_lastScreenRequestDate; // ivar: __lastScreenRequestDate
@property (nonatomic, setter=_setLastScreenRequestOrigin:) NSInteger _lastScreenRequestOrigin; // ivar: __lastScreenRequestOrigin
@property (retain, nonatomic, setter=_setRootViewController:) PUAirPlayRootViewController *_rootViewController; // ivar: __rootViewController
@property (retain, nonatomic, setter=_setRouteObserverRegistry:) PUAirPlayRouteObserverRegistry *_routeObserverRegistry; // ivar: __routeObserverRegistry
@property (retain, nonatomic, setter=_setScreenDetector:) PUAirPlayScreenDetector *_screenDetector; // ivar: __screenDetector
@property (nonatomic) NSInteger airPlaySessionSignpost; // ivar: _airPlaySessionSignpost
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingContent) BOOL displayingContent;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AVOutputContext *outputContext; // ivar: _outputContext
@property (readonly, nonatomic) NSUInteger routeAvailability;
@property (readonly, nonatomic) NSInteger routeUnavailableReason;
@property (readonly, nonatomic) NSUInteger screenAvailability;
@property (retain, nonatomic) id *secondDisplayModeToken; // ivar: _secondDisplayModeToken
@property (readonly) Class superclass;


+(id)sharedInstance;
+(struct __CFString *)_keyForScreenRequestOrigin:(NSInteger)arg0 ;
-(BOOL)_shouldHideRoutesForExternalDisplay;
-(BOOL)_shouldIgnoreScreen:(id)arg0 ;
-(BOOL)_shouldUpdateSecondDisplayModeWithCurrentContent;
-(BOOL)pu_hasAvailableRoute;
-(id)_currentContent;
-(id)_findAvailableScreen;
-(id)init;
-(void)_cacheDisplayedContentIfNeededForUnregisteringProvider:(id)arg0 ;
-(void)_handleSettingHighResolutionContent:(BOOL)arg0 forRootController:(id)arg1 content:(id)arg2 ;
-(void)_notifyWillRequestAirPlayScreenFromSource:(NSInteger)arg0 ;
-(void)_outputDeviceDidChange:(id)arg0 ;
-(void)_recordSessionBeganWithScreen:(id)arg0 ;
-(void)_recordSessionEnded;
-(void)_sceneDidActivate:(id)arg0 ;
-(void)_sceneWillDeactivate:(id)arg0 ;
-(void)_switchModeForHighResolutionContent:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)_updateScreenContentWithShouldTryToFindAvailableScreen:(BOOL)arg0 ;
-(void)_updateSecondDisplayModeWithCurrentContent;
-(void)airPlayRouteObserverRegistryRouteAvailabilityChanged:(id)arg0 forRouteObserver:(id)arg1 ;
-(void)notifyDidPresentAirPlayRoutesFromShareSheet;
-(void)notifyDidPresentAirPlayRoutesFromSlideshow;
-(void)registerContentProvider:(id)arg0 ;
-(void)registerRouteObserver:(id)arg0 ;
-(void)screenDetector:(id)arg0 didDetectScreen:(id)arg1 ;
-(void)screenDetector:(id)arg0 didLoseScreen:(id)arg1 ;
-(void)unregisterContentProvider:(id)arg0 ;
-(void)unregisterRouteObserver:(id)arg0 ;


@end


#endif