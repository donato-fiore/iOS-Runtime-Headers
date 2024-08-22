// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BROWSERCONTROLLERDEFAULTUIDELEGATE_H
#define BROWSERCONTROLLERDEFAULTUIDELEGATE_H

@class NSString;
@protocol AutomationOverlayViewControllerDelegate, MobileSafariWindowDelegate, BrowserControllerUIDelegate;

#import <Foundation/Foundation.h>

#import "BrowserController.h"
#import "MobileSafariWindow.h"
#import "PrivateBrowsingObfuscationWindow.h"
#import "AutomationOverlayWindow.h"

@interface BrowserControllerDefaultUIDelegate : NSObject <AutomationOverlayViewControllerDelegate, MobileSafariWindowDelegate, BrowserControllerUIDelegate>

 {
    BrowserController *_browserController;
    MobileSafariWindow *_window;
    PrivateBrowsingObfuscationWindow *_obfuscationWindow;
    AutomationOverlayWindow *_windowForAutomationOverlay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)automationOverlayControllerShouldAllowUserInteraction:(id)arg0 ;
-(BOOL)browserControllerShouldIncreaseTopPaddingForStartPage:(id)arg0 ;
-(BOOL)browserControllerShouldUpdateSnapshotForActiveTab:(id)arg0 ;
-(CGFloat)browserControllerCatalogViewPopoverWidth:(id)arg0 ;
-(CGFloat)browserControllerStatusBarWidth:(id)arg0 ;
-(id)browserController:(id)arg0 tabDocumentViewGeometryProviderForTabDocumentView:(id)arg1 ;
-(id)browserController:(id)arg0 tabSnapshotContentProviderForTabDocument:(id)arg1 ;
-(id)browserControllerCatalogViewController:(id)arg0 ;
-(id)browserControllerNavigationBar:(id)arg0 ;
-(id)initWithBrowserController:(id)arg0 ;
-(id)viewControllerToPresentFromForBrowserController:(id)arg0 ;
-(struct CGRect )browserControllerWindowFrame:(id)arg0 ;
-(void)_setUpAutomationOverlay;
-(void)_tearDownAutomationOverlay;
-(void)_windowDidResignKeyWindow:(id)arg0 ;
-(void)automationOverlayController:(id)arg0 didChangeAllowsUserInteraction:(BOOL)arg1 ;
-(void)automationOverlayControllerDidCancelAutomation:(id)arg0 ;
-(void)automationOverlayControllerDidDisableAutomation:(id)arg0 ;
-(void)browserController:(id)arg0 didDisconnectFromScene:(id)arg1 ;
-(void)browserController:(id)arg0 setCatalogViewController:(id)arg1 ;
-(void)browserController:(id)arg0 willConnectToScene:(id)arg1 session:(id)arg2 options:(id)arg3 ;
-(void)browserControllerContentContainerViewFrameDidChange:(id)arg0 ;
-(void)browserControllerDidBeginIgnoringUserInteraction:(id)arg0 ;
-(void)browserControllerDidEndIgnoringUserInteraction:(id)arg0 ;
-(void)browserControllerDidEndNavigationGesture:(id)arg0 ;
-(void)browserControllerDidEndObfuscating:(id)arg0 ;
-(void)browserControllerLayOutCatalogView:(id)arg0 ;
-(void)browserControllerMakeKey:(id)arg0 ;
-(void)browserControllerMakeKeyAndVisible:(id)arg0 ;
-(void)browserControllerStartPageUpdatePolicyDidChange:(id)arg0 ;
-(void)browserControllerWillBeginNavigationGesture:(id)arg0 ;
-(void)browserControllerWillBeginObfuscating:(id)arg0 ;
-(void)safariWindow:(id)arg0 statusBarChangedFromHeight:(CGFloat)arg1 toHeight:(CGFloat)arg2 ;


@end


#endif