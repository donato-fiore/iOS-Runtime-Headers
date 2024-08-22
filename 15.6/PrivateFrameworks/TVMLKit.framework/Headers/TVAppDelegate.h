// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TVAPPDELEGATE_H
#define TVAPPDELEGATE_H

@class UIResponder, NSString, UIWindow;
@protocol UIApplicationDelegate, TVApplicationControllerDelegate;


#import "TVApplicationController.h"

@interface TVAppDelegate : UIResponder <UIApplicationDelegate, TVApplicationControllerDelegate>

 {
    BOOL _headLess;
}


@property (retain, nonatomic) TVApplicationController *appController; // ivar: _appController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL shouldTerminateOnEnterBackground; // ivar: _shouldTerminateOnEnterBackground
@property (readonly) Class superclass;
@property (retain, nonatomic) UIWindow *window; // ivar: _window


-(BOOL)application:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(BOOL)application:(id)arg0 openURL:(id)arg1 options:(id)arg2 ;
-(id)_launchContext;
-(id)init;
-(id)launchOptionsWithDefaultOptions:(id)arg0 ;
-(void)_controllerDidDisplay:(id)arg0 ;
-(void)_presetDialogWithError:(NSInteger)arg0 appController:(id)arg1 ;
-(void)_runScrollMoveTest:(id)arg0 ;
-(void)_successTest:(id)arg0 callback:(id)arg1 ;
-(void)appController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appController:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg0 ;
-(void)dealloc;


@end


#endif