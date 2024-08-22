// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVMLKITAPPLICATION_H
#define _TVMLKITAPPLICATION_H

@class UIViewController<TVAppRootViewController>, NSString, NSDictionary, UIWindow, IKAppDataStorage;
@protocol _TVMLKitApplication, UITraitEnvironment;

#import <Foundation/Foundation.h>

#import "TVApplicationControllerContext.h"

@interface _TVMLKitApplication : NSObject <_TVMLKitApplication>



@property (weak, nonatomic) UIViewController<TVAppRootViewController> *appRootViewController; // ivar: _appRootViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL headless; // ivar: _headless
@property (copy, nonatomic) NSDictionary *javaScriptLaunchOptions; // ivar: _javaScriptLaunchOptions
@property (weak, nonatomic) NSObject<UITraitEnvironment> *keyTraitEnvironment; // ivar: _keyTraitEnvironment
@property (weak, nonatomic) UIWindow *keyWindow; // ivar: _keyWindow
@property (weak, nonatomic) TVApplicationControllerContext *launchContext; // ivar: _launchContext
@property (weak, nonatomic) IKAppDataStorage *localDataStorage; // ivar: _localDataStorage
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsPictureInPicturePlayback;


-(BOOL)appIsPrivileged;
-(BOOL)appIsTrusted;
-(BOOL)shouldIgnoreJSValidation;
-(id)activeDocument;
-(id)appIdentifier;
-(id)appJSCachePath;
-(id)appJSURL;
-(id)appLaunchParams;
-(id)appLocalJSURL;
-(id)appTraitCollection;
-(id)bagBootURLKey;
-(id)initWithLaunchContext:(id)arg0 ;
-(id)localStorage;
-(id)offlineJSURL;
-(id)userDefaultsStorage;
-(id)vendorIdentifier;
-(id)vendorStorage;


@end


#endif