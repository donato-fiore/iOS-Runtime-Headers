// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIGDPRPRESENTATIONMANAGER_H
#define VUIGDPRPRESENTATIONMANAGER_H

@class UINavigationController;

#import <Foundation/Foundation.h>

#import "VUIAppContext.h"

@interface VUIGDPRPresentationManager : NSObject

@property (weak, nonatomic) VUIAppContext *appContext; // ivar: _appContext
@property (retain, nonatomic) UINavigationController *navigationController; // ivar: _navigationController


+(BOOL)shouldShowWelcomeScreen;
+(BOOL)showGDPRWelcomeScreen:(id)arg0 ;
+(id)_sharedInstance;
+(void)acceptGDPRAndSyncWithServers:(id)arg0 ;
+(void)showOfflineGDPRWelcomeScreen;
-(BOOL)isShowing;
-(id)_currentWindowRootViewController;
-(void)_dismissAllModalsIfPresent:(id)arg0 ;
-(void)_handleContinueButton;
-(void)_handleOfflineContinueButton;
-(void)_showIOSWelcomeControllerWithAppContext:(id)arg0 offline:(BOOL)arg1 ;
-(void)accept:(id)arg0 ;


@end


#endif