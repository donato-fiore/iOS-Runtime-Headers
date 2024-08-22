// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SUCLIENTINTERFACE_H
#define SUCLIENTINTERFACE_H

@class NSString, NSMutableDictionary, UIColor;
@protocol OS_dispatch_queue, SUClientInterfaceDelegate;

#import <Foundation/Foundation.h>

#import "SUUIAppearance.h"
#import "SUPurchaseManager.h"
#import "SUQueueSessionManager.h"
#import "SUPreviewOverlayViewController.h"
#import "SUTabBarController.h"
#import "SUViewControllerFactory.h"

@interface SUClientInterface : NSObject {
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
    SUUIAppearance *_appearance;
    BOOL _inAskToBuyApprovalFlow;
    NSString *_clientIdentifier;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _ignoresExpectedClientsProtocol;
    NSString *_localStoragePath;
    SUPurchaseManager *_purchaseManager;
    SUQueueSessionManager *_queueSessionManager;
    NSMutableDictionary *_urlBagKeys;
    NSString *_userAgent;
    BOOL _wasLaunchedFromLibrary;
}


@property (getter=_ignoresExpectedClientsProtocol, setter=_setIgnoresExpectedClientsProtocol:) BOOL _ignoresExpectedClientsProtocol;
@property (copy) SUUIAppearance *appearance;
@property (copy) NSString *applicationIdentifier;
@property (copy) NSString *applicationVersion;
@property (copy, nonatomic) NSString *askToBuyApprovalPrompt; // ivar: _askToBuyApprovalPrompt
@property (copy) NSString *clientIdentifier;
@property (copy, nonatomic) UIColor *darkKeyColor; // ivar: _darkKeyColor
@property (nonatomic) NSObject<SUClientInterfaceDelegate> *delegate; // ivar: _delegate
@property (getter=isFinanceInterruption) BOOL financeInterruption; // ivar: _financeInterruption
@property (copy) NSString *hostApplicationIdentifier; // ivar: _hostApplicationIdentifier
@property BOOL ignoreDefaultKeyboardNotifications; // ivar: _ignoreDefaultKeyboardNotifications
@property BOOL inAskToBuyApprovalFlow; // ivar: inAskToBuyApprovalFlow
@property (copy, nonatomic) UIColor *lightKeyColor; // ivar: _lightKeyColor
@property (copy) NSString *localStoragePath;
@property (readonly, nonatomic) SUPreviewOverlayViewController *previewOverlay;
@property (retain) SUPurchaseManager *purchaseManager;
@property (retain) SUQueueSessionManager *queueSessionManager;
@property BOOL showDialogOnError; // ivar: _showDialogOnError
@property (readonly, nonatomic) SUTabBarController *tabBarController;
@property (copy) NSString *userAgent;
@property (retain) SUViewControllerFactory *viewControllerFactory; // ivar: _viewControllerFactory
@property BOOL wasLaunchedFromLibrary;


+(id)_defaultApplicationIdentifier;
+(id)_defaultApplicationVersion;
-(id)URLBagKeyForIdentifier:(id)arg0 ;
-(id)_newScriptInterface;
-(id)init;
-(void)_dismissModalViewControllerFromViewController:(id)arg0 withTransition:(int)arg1 ;
-(void)_dismissViewControllerFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)_dispatchOnPageResponseWithData:(id)arg0 response:(id)arg1 ;
-(void)_dispatchXEvent:(id)arg0 withCompletionBlock:(id)arg1 ;
-(void)_exitStoreWithReason:(NSInteger)arg0 ;
-(void)_hidePreviewOverlayAnimated:(BOOL)arg0 ;
-(void)_mediaPlayerViewControllerWillDismiss:(id)arg0 animated:(BOOL)arg1 ;
-(void)_presentDialog:(id)arg0 ;
-(void)_presentViewController:(id)arg0 fromViewController:(id)arg1 withTransition:(int)arg2 ;
-(void)_returnToLibrary;
-(void)_setStatusBarHidden:(BOOL)arg0 withAnimation:(NSInteger)arg1 ;
-(void)_setStatusBarStyle:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_showPreviewOverlayAnimated:(BOOL)arg0 ;
-(void)dealloc;
-(void)setURLBagKey:(id)arg0 forIdentifier:(id)arg1 ;


@end


#endif