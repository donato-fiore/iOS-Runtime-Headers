// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFWEBEXTENSIONPOPUPVIEWCONTROLLER_H
#define _SFWEBEXTENSIONPOPUPVIEWCONTROLLER_H

@class UIViewController, NSTimer, SFWebExtension, NSString, WKWebView;
@protocol UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate, _SFPopoverSourceInfo, WBSWebExtensionWindow;


#import "_SFWebExtensionPopupViewController.h"

@interface _SFWebExtensionPopupViewController : UIViewController <UIAdaptivePresentationControllerDelegate, UIPopoverPresentationControllerDelegate>

 {
    UIViewController *_parentViewController;
    id<_SFPopoverSourceInfo> *_popoverSourceInfo;
    _SFWebExtensionPopupViewController *_referenceToSelf;
    NSTimer *_contentSizeTimeoutTimer;
    NSTimer *_contentSizeStabilizedTimer;
    CGSize _previousContentSize;
    SFWebExtension *_webExtension;
    BOOL _hasDisconnectedFromWebExtension;
    BOOL _presentedAsSheet;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WKWebView *popupWebView; // ivar: _popupWebView
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) NSObject<WBSWebExtensionWindow> *window; // ivar: _window


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithPopupURL:(id)arg0 webExtension:(id)arg1 window:(id)arg2 parentViewController:(id)arg3 popoverSourceInfo:(id)arg4 ;
-(id)presentationController:(id)arg0 viewControllerForAdaptivePresentationStyle:(NSInteger)arg1 ;
-(void)_contentSizeDidStabilize;
-(void)_dismissPopup;
-(void)_displayPopup;
-(void)_presentationController:(id)arg0 prepareAdaptivePresentationController:(id)arg1 ;
-(void)_showExtensionPopupIfNeededAndUpdateContentSize;
-(void)_updateDetentForSheetPresentationController:(id)arg0 ;
-(void)_updatePopoverContentSizeIfNecessary;
-(void)_viewControllerDismissalTransitionDidEnd:(id)arg0 ;
-(void)dealloc;
-(void)disconnectFromWebExtension;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;


@end


#endif