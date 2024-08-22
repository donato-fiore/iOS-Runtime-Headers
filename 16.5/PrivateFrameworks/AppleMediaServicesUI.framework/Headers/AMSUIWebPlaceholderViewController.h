// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSUIWEBPLACEHOLDERVIEWCONTROLLER_H
#define AMSUIWEBPLACEHOLDERVIEWCONTROLLER_H

@class NSString, UIViewController<AMSUIWebPagePresenter>, AMSBinaryPromise, UIView;
@protocol AMSUIWebPagePresenter;


#import "AMSUICommonViewController.h"
#import "AMSUIWebAppearance.h"
#import "AMSUIWebClientContext.h"
#import "AMSUILoadingView.h"
#import "AMSUIWebLoadingPageModel.h"

@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController <AMSUIWebPagePresenter>



@property (nonatomic) BOOL animateFadeIn; // ivar: _animateFadeIn
@property (retain, nonatomic) AMSUIWebAppearance *appearance; // ivar: _appearance
@property (retain, nonatomic) AMSUIWebClientContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasAppeared; // ivar: _hasAppeared
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isVisible; // ivar: _isVisible
@property (retain, nonatomic) AMSUILoadingView *loadingView; // ivar: _loadingView
@property (retain, nonatomic) AMSUIWebLoadingPageModel *model; // ivar: _model
@property (retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *originalViewController; // ivar: _originalViewController
@property (nonatomic) BOOL shouldSnapshot; // ivar: _shouldSnapshot
@property (retain, nonatomic) AMSBinaryPromise *snapshotPromise; // ivar: _snapshotPromise
@property (retain, nonatomic) UIView *snapshotView; // ivar: _snapshotView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIView *visibleView; // ivar: _visibleView


-(id)initWithContext:(id)arg0 ;
-(id)initWithModel:(id)arg0 context:(id)arg1 appearance:(id)arg2 ;
-(id)initWithSnapshot:(id)arg0 context:(id)arg1 appearance:(id)arg2 ;
-(void)_applyAppearance;
-(void)_replacePrimaryViewWithView:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startReappearTransitionTimerAnimated:(BOOL)arg0 ;
-(void)_transitionToLoadingAnimated:(BOOL)arg0 ;
-(void)_transitionToSnapshot;
-(void)awaitSnapshotWithCompletion:(id)arg0 ;
-(void)dealloc;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willAppearAfterDismiss;
-(void)willPresentPageModel:(id)arg0 appearance:(id)arg1 ;


@end


#endif