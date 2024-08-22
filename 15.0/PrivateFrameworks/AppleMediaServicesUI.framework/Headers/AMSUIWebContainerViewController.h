// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUIWEBCONTAINERVIEWCONTROLLER_H
#define AMSUIWEBCONTAINERVIEWCONTROLLER_H

@class UIViewController<AMSUIWebPagePresenter>, NSString, UIViewController, UINavigationItem, AMSUIWebContainerViewController<AMSUIWebPresentationDelegate>, NSDictionary;
@protocol UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate;


#import "AMSUICommonViewController.h"
#import "AMSUIWebAppearance.h"
#import "AMSUIWebClientContext.h"
#import "AMSUIWebNavigationBarModel.h"
#import "AMSUIWebContainerViewController.h"

@interface AMSUIWebContainerViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate>



@property (readonly, nonatomic) NSUInteger activePresentationType; // ivar: _activePresentationType
@property (retain, nonatomic) AMSUIWebAppearance *appearance; // ivar: _appearance
@property (retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *containedViewController; // ivar: _containedViewController
@property (nonatomic) NSInteger containerIndex; // ivar: _containerIndex
@property (weak, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger disableReappearPlaceholder; // ivar: _disableReappearPlaceholder
@property (nonatomic) BOOL dismissCalled; // ivar: _dismissCalled
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIViewController *hiddenViewController; // ivar: _hiddenViewController
@property (weak, nonatomic) UINavigationItem *lastNavigationItem; // ivar: _lastNavigationItem
@property (nonatomic) NSInteger lastNavigationStyle; // ivar: _lastNavigationStyle
@property (weak, nonatomic) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *modalPresentationDelegate; // ivar: _modalPresentationDelegate
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel; // ivar: _navigationBarModel
@property (weak, nonatomic) AMSUIWebContainerViewController *nextContainer; // ivar: _nextContainer
@property (retain, nonatomic) NSDictionary *pageInfo; // ivar: _pageInfo
@property (weak, nonatomic) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *pushPresentationDelegate; // ivar: _pushPresentationDelegate
@property (nonatomic) CGPoint scrollPosition; // ivar: _scrollPosition
@property (nonatomic) BOOL shouldSkipInitialRefresh; // ivar: _shouldSkipInitialRefresh
@property (readonly) Class superclass;


-(NSUInteger)_determineActivePresentationType;
-(id)_barButtonItemForAppViewModel:(id)arg0 ;
-(id)_barButtonItemForButtonModel:(id)arg0 ;
-(id)_buttonModelForConditionalButtons:(id)arg0 ;
-(id)_leftButtonModel;
-(id)_makeCustomNavigationBarAppearanceWithModel:(id)arg0 ;
-(id)_rightButtonModel;
-(id)initWithViewController:(id)arg0 appearance:(id)arg1 navigationBar:(id)arg2 context:(id)arg3 ;
-(id)navigationItem;
-(void)_adjustWebViewScrollFor:(id)arg0 completion:(id)arg1 ;
-(void)_applyAppearance;
-(void)_handleLeftNavigationButton:(id)arg0 ;
-(void)_handlePushDismissal;
-(void)_handleRightNavigationButton:(id)arg0 ;
-(void)_postEvent:(id)arg0 ;
-(void)_prepareToMoveWebViewToVC:(id)arg0 completion:(id)arg1 ;
-(void)_refreshForInitialAppear;
-(void)_scrollTo:(struct CGPoint )arg0 webView:(id)arg1 completion:(id)arg2 ;
-(void)_setupNavBarAnimated:(BOOL)arg0 ;
-(void)applyNavigationModel:(id)arg0 ;
-(void)cacheScrollViewPositionFor:(id)arg0 ;
-(void)dealloc;
-(void)didDismissController:(id)arg0 ;
-(void)handleModalDismissal;
-(void)loadView;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)replaceContentWithViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif