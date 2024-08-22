// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMAAPPPRESENTER_H
#define IMAAPPPRESENTER_H

@class IMBalloonPlugin, CKExpandedAppViewController, CKBrowserTransitionCoordinator, UIViewController, NSString, CKBrowserSwitcherViewController;
@protocol CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKExpandedAppViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate, IMAAppPresenterDelegate;

#import <Foundation/Foundation.h>


@interface IMAAppPresenter : NSObject <CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKExpandedAppViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate>

 {
    IMBalloonPlugin *_currentBalloonPlugin;
    CKExpandedAppViewController *_expandedAppViewController;
    CKBrowserTransitionCoordinator *_transitionCoordinator;
    BOOL _isTransitioningPresentationStyles;
}


@property (nonatomic) BOOL alwaysPresentAppsExpanded; // ivar: _alwaysPresentAppsExpanded
@property (nonatomic) CGFloat compactHeight; // ivar: _compactHeight
@property (readonly, nonatomic) UIViewController *currentAppViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<IMAAppPresenterDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesCompactAppForStickerDrag; // ivar: _hidesCompactAppForStickerDrag
@property (readonly) Class superclass;
@property (retain, nonatomic) CKBrowserSwitcherViewController *switcherViewController; // ivar: _switcherViewController


+(void)disableAutomaticAppDiscovery;
+(void)loadAppWithIdentifierIfNeeded:(id)arg0 ;
-(BOOL)addSwitcher;
-(BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg0 ;
-(BOOL)isAppCompact;
-(BOOL)isSwitcherOffscreen;
-(BOOL)shouldAlwaysShowAppTitle;
-(BOOL)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)arg0 ;
-(CGFloat)browserTransitionCoordinatorCollapsedContentHeight:(id)arg0 ;
-(CGFloat)switcherHeight;
-(id)appViewControllerPresenter;
-(id)dragControllerTranscriptDelegate;
-(id)init;
-(id)transitionsPresentationViewController;
-(int)dragManager:(id)arg0 dropAreaForDragTarget:(id)arg1 ;
-(struct CGRect )alwaysExpandedAppViewControllerFrame;
-(struct CGSize )browserTransitionCoordinator:(id)arg0 preferredSizeForBrowser:(id)arg1 ;
-(void)_hideCompactBrowserAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)animateSwitcherOffscreen:(BOOL)arg0 completion:(id)arg1 ;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg0 withReason:(NSInteger)arg1 ;
-(void)commitPayload:(id)arg0 ;
-(void)commitSticker:(id)arg0 ;
-(void)commitSticker:(id)arg0 withDragTarget:(id)arg1 ;
-(void)dealloc;
-(void)dismiss;
-(void)dismissAndReloadInputViews:(BOOL)arg0 ;
-(void)dismissAndReloadInputViews:(BOOL)arg0 forPlugin:(id)arg1 ;
-(void)dismissToKeyboard:(BOOL)arg0 ;
-(void)dragManager:(id)arg0 draggedItemWithTarget:(id)arg1 ;
-(void)dragManager:(id)arg0 overrideDropPointForTarget:(id)arg1 completion:(id)arg2 ;
-(void)dragManagerDidBeginDragging:(id)arg0 ;
-(void)dragManagerDidEndDragging:(id)arg0 ;
-(void)hideAppViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)notifyDelegateOfSelectedPlugin:(id)arg0 ;
-(void)openURL:(id)arg0 applicationIdentifier:(id)arg1 pluginID:(id)arg2 completionHandler:(id)arg3 ;
-(void)openURL:(id)arg0 pluginID:(id)arg1 completionHandler:(id)arg2 ;
-(void)positionSwitcherOffscreen:(BOOL)arg0 ;
-(void)presentAlertWithTitle:(id)arg0 message:(id)arg1 buttonTitle:(id)arg2 completion:(id)arg3 ;
-(void)presentAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)presentFullScreenModalAppWithBundleIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)requestPresentationStyleExpanded:(BOOL)arg0 ;
-(void)requestPresentationStyleFullScreenModalForPlugin:(id)arg0 ;
-(void)setLocalUserIsTyping:(BOOL)arg0 ;
-(void)startEditingPayload:(id)arg0 ;
-(void)startEditingPayload:(id)arg0 dismiss:(BOOL)arg1 ;
-(void)switcherViewControllerDidCollapse:(id)arg0 ;
-(void)switcherViewControllerDidFinishSwitching:(id)arg0 toViewController:(id)arg1 ;
-(void)updateAppFrameForRotation;
-(void)updateSwitcherViewFrame;


@end


#endif