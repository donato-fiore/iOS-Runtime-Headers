// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUWELCOMEVIEWCONTROLLERSMANAGER_H
#define PUWELCOMEVIEWCONTROLLERSMANAGER_H

@class UIViewController, NSMutableSet, NSArray;

#import <Foundation/Foundation.h>


@interface PUWelcomeViewControllersManager : NSObject

@property (nonatomic, setter=_setPresentedWelcomeViewControllerClass:) Class _presentedWelcomeViewControllerClass; // ivar: __presentedWelcomeViewControllerClass
@property (retain, nonatomic, setter=_setPresentingViewController:) UIViewController *_presentingViewController; // ivar: __presentingViewController
@property (readonly, copy, nonatomic) NSMutableSet *_remainingWelcomeViewControllerClassesToPresent; // ivar: __remainingWelcomeViewControllerClassesToPresent
@property (readonly, copy, nonatomic) NSArray *_welcomeViewControllerClasses; // ivar: __welcomeViewControllerClasses


+(id)defaultManager;
-(id)_initWithWelcomeViewControllerClasses:(id)arg0 ;
-(id)init;
-(void)_handleWelcomeViewControllerCompletion;
-(void)_reset;
-(void)_update;
-(void)presentWelcomeViewControllersIfNecessaryFromViewController:(id)arg0 ;
-(void)resetAllLastPresentationInfos;


@end


#endif