// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBNOTIFICATIONVIEWCONTROLLER_H
#define DBNOTIFICATIONVIEWCONTROLLER_H

@class UIViewController, BNContentViewController, BNBannerController, BNBannerHostMonitor, BNBannerSourceListener, NSString, NSMutableSet, UITapGestureRecognizer, FBScene;
@protocol BNBannerSourceListenerDelegate, BNPresentingDelegate, FBSceneObserver, BSInvalidatable, DBNotificationSuspending, DBNotificationViewControllerDelegate;


#import "DBBannerAuthority.h"
#import "DBEnvironmentConfiguration.h"

@interface DBNotificationViewController : UIViewController <BNBannerSourceListenerDelegate, BNPresentingDelegate, FBSceneObserver, BSInvalidatable, DBNotificationSuspending>



@property (readonly, nonatomic) DBBannerAuthority *bannerAuthority; // ivar: _bannerAuthority
@property (readonly, nonatomic) BNContentViewController *bannerContentViewController; // ivar: _bannerContentViewController
@property (readonly, nonatomic) BNBannerController *bannerController; // ivar: _bannerController
@property (readonly, nonatomic) BNBannerHostMonitor *bannerHostMonitor; // ivar: _bannerHostMonitor
@property (readonly, nonatomic) BNBannerSourceListener *bannerSourceListener; // ivar: _bannerSourceListener
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<DBNotificationViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) DBEnvironmentConfiguration *environmentConfiguration; // ivar: _environmentConfiguration
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL invalidated; // ivar: _invalidated
@property (readonly, nonatomic) CGFloat notificationHeight;
@property (retain, nonatomic) id *screenBorrowToken; // ivar: _screenBorrowToken
@property (retain, nonatomic) NSString *screenBorrowingPresentableRequestID; // ivar: _screenBorrowingPresentableRequestID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *suspensionReasons; // ivar: _suspensionReasons
@property (readonly, nonatomic) UITapGestureRecognizer *tapDismissGestureRecognizer; // ivar: _tapDismissGestureRecognizer
@property (readonly, nonatomic) FBScene *visibleNotificationScene;


-(BOOL)bannerSourceListener:(id)arg0 recommendsSuspending:(BOOL)arg1 forReason:(id)arg2 revokingCurrent:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)bannerSourceListener:(id)arg0 requestsPostingPresentable:(id)arg1 options:(NSUInteger)arg2 userInfo:(id)arg3 error:(*id)arg4 ;
-(BOOL)handleHomeEvent;
-(BOOL)shouldFenceAnimationsForPresentable:(id)arg0 ;
-(id)_layoutDescriptionWithBounds:(struct CGRect )arg0 preferredSize:(struct CGSize )arg1 ;
-(id)_layoutManager;
-(id)bannerSourceListener:(id)arg0 layoutDescriptionWithError:(*id)arg1 ;
-(id)bannerSourceListener:(id)arg0 requestsRevokingPresentablesWithIdentification:(id)arg1 reason:(id)arg2 animated:(BOOL)arg3 userInfo:(id)arg4 error:(*id)arg5 ;
-(id)defaultTransitioningDelegateForPresenter:(id)arg0 ;
-(id)initWithEnvironmentConfiguration:(id)arg0 delegate:(id)arg1 ;
-(id)panGestureRecognizerForPresenter:(id)arg0 ;
-(id)sceneSpecificationForBannerSourceListener:(id)arg0 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 locationForTouch:(id)arg2 inView:(id)arg3 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 translationInView:(id)arg2 ;
-(struct CGPoint )presenter:(id)arg0 gestureRecognizer:(id)arg1 velocityInView:(id)arg2 ;
-(void)_performCancelTapGesture:(id)arg0 ;
-(void)dealloc;
-(void)handleTransitionFromFrame:(struct CGRect )arg0 toFrame:(struct CGRect )arg1 ;
-(void)invalidate;
-(void)loadView;
-(void)presenter:(id)arg0 willDismissPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 userInfo:(id)arg3 ;
-(void)presenter:(id)arg0 willPresentPresentable:(id)arg1 withTransitionCoordinator:(id)arg2 userInfo:(id)arg3 ;
-(void)presenter:(id)arg0 willTransitionToSize:(struct CGSize )arg1 withTransitionCoordinator:(id)arg2 ;
-(void)presenterRelinquishesVisibility:(id)arg0 ;
-(void)presenterRequestsVisibility:(id)arg0 ;
-(void)setSuspended:(BOOL)arg0 cancellingCurrent:(BOOL)arg1 forReason:(id)arg2 ;
-(void)setSuspended:(BOOL)arg0 forReason:(id)arg1 ;


@end


#endif