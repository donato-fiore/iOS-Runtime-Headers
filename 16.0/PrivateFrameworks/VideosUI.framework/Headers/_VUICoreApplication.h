// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _VUICOREAPPLICATION_H
#define _VUICOREAPPLICATION_H

@class NSString, NSDictionary, UIWindow;
@protocol VUIApplication, UITraitEnvironment;

#import <Foundation/Foundation.h>

#import "VUITVApplicationControllerContext.h"

@interface _VUICoreApplication : NSObject <VUIApplication>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDictionary *javaScriptLaunchOptions; // ivar: _javaScriptLaunchOptions
@property (weak, nonatomic) NSObject<UITraitEnvironment> *keyTraitEnvironment; // ivar: _keyTraitEnvironment
@property (weak, nonatomic) UIWindow *keyWindow; // ivar: _keyWindow
@property (readonly, weak, nonatomic) VUITVApplicationControllerContext *launchContext; // ivar: _launchContext
@property (readonly) Class superclass;


-(BOOL)shouldIgnoreJSValidation;
-(id)appIdentifier;
-(id)appJSURL;
-(id)appLaunchParams;
-(id)appTraitCollection;
-(id)initWithLaunchContext:(id)arg0 ;
-(id)userDefaultsStorage;


@end


#endif