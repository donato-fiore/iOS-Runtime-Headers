// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC12NEWSARTICLES30PDFREPLICAVIEWERVIEWCONTROLLER_H
#define _TTC12NEWSARTICLES30PDFREPLICAVIEWERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC12NewsArticles30PDFReplicaViewerViewController : UIViewController {
    ? styler;
    ? renderer;
    ? eventHandler;
    ? sessionManager;
    ? issue;
    ? pageViewController;
    ? pageBlueprintProvider;
    ? toolbarCoverFactory;
    ? paywallFactory;
    ? paywall;
    ? navigationItemStyle;
    ? titleView;
    ? paywallViewController;
    ? paidAccessChecker;
    ? eventManager;
    ? featureAvailability;
    ? sharingActivityItemFactory;
    ? subscriptionController;
    ? toolbarManager;
    ? backButton;
    ? nextButton;
    ? barVisibilityAnimator;
    ? pageSheetPresentationObserver;
    ? commands;
}


@property (nonatomic, readonly) NSInteger preferredStatusBarUpdateAnimation;
@property (nonatomic, readonly) BOOL prefersHomeIndicatorAutoHidden;
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;


-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;


@end


#endif