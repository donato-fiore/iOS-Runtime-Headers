// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CCUIAPPLAUNCHERMODULE_H
#define CCUIAPPLAUNCHERMODULE_H

@class NSBundle, SBFApplication, NSString, UIViewController<CCUIContentModuleBackgroundViewController>, UIViewController<CCUIContentModuleContentViewController>, UIImage, NSURL;
@protocol CCUIContentModule;

#import <Foundation/Foundation.h>

#import "CCUIContentModuleContext.h"

@interface CCUIAppLauncherModule : NSObject <CCUIContentModule>

 {
    NSBundle *_bundle;
    SBFApplication *_application;
}


@property (readonly, nonatomic, getter=_application) SBFApplication *application;
@property (copy, nonatomic) NSString *applicationIdentifier; // ivar: _applicationIdentifier
@property (readonly, nonatomic) UIViewController<CCUIContentModuleBackgroundViewController> *backgroundViewController;
@property (retain, nonatomic) CCUIContentModuleContext *contentModuleContext; // ivar: _contentModuleContext
@property (readonly, nonatomic) UIViewController<CCUIContentModuleContentViewController> *contentViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) UIImage *iconGlyph;
@property (copy, nonatomic) NSString *launchApplicationIdentifier; // ivar: _launchApplicationIdentifier
@property (copy, nonatomic) NSURL *launchURL; // ivar: _launchURL
@property (nonatomic) BOOL requestAuthenticationForExpandedModule; // ivar: _requestAuthenticationForExpandedModule
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsApplicationShortcuts; // ivar: _supportsApplicationShortcuts


-(id)contentViewControllerForContext:(id)arg0 ;
-(id)init;
-(id)launchURLForTouchType:(NSInteger)arg0 ;
-(void)_fetchApplicationIfNeeded;
-(void)handleTapWithTouchType:(NSInteger)arg0 ;
-(void)handleTouchDownWithTouchType:(NSInteger)arg0 ;


@end


#endif