// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIAPPLICATIONVIEWCONTROLLER_H
#define VUIAPPLICATIONVIEWCONTROLLER_H

@class UIViewController, NSString, UINavigationController;
@protocol VUITVApplicationControllerDelegate, UIGestureRecognizerDelegate;


#import "VUITVApplicationController.h"
#import "VUIBootURLController.h"

@interface VUIApplicationViewController : UIViewController <VUITVApplicationControllerDelegate, UIGestureRecognizerDelegate>



@property (retain, nonatomic) VUITVApplicationController *applicationController; // ivar: _applicationController
@property (retain, nonatomic) VUIBootURLController *bootURLController; // ivar: _bootURLController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController
@property (readonly) Class superclass;


-(id)_initialViewControllerWithAppContext:(id)arg0 ;
-(id)_launchOptions;
-(id)preferredFocusEnvironments;
-(void)_exposeObjectsInJSContext:(id)arg0 ;
-(void)_startApplicationControllerWithBootURL:(id)arg0 ;
-(void)appController:(id)arg0 didFailWithError:(id)arg1 ;
-(void)appController:(id)arg0 didFinishLaunchingWithOptions:(id)arg1 ;
-(void)appController:(id)arg0 evaluateAppJavaScriptInContext:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;


@end


#endif