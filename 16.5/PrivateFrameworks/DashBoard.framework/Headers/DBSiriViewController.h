// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSIRIVIEWCONTROLLER_H
#define DBSIRIVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, SiriPresentationViewController, NSMutableSet, UILongPressGestureRecognizer;
@protocol SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate, DBDashboardWorkspaceEntityPresenting, DBEnvironment, BSInvalidatable;


#import "DBWorkspaceStateChangeRequest.h"

@interface DBSiriViewController : UIViewController <SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate, DBDashboardWorkspaceEntityPresenting>



@property (copy, nonatomic) NSString *activeIntentBundleID; // ivar: _activeIntentBundleID
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDismissed) BOOL dismissed; // ivar: _dismissed
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (weak, nonatomic) NSObject<SiriPresentationIntentUsageDelegate> *intentUsageDelegate; // ivar: _intentUsageDelegate
@property (retain, nonatomic) NSObject<BSInvalidatable> *layoutElementAssertion; // ivar: _layoutElementAssertion
@property (nonatomic, getter=isPaired) BOOL paired; // ivar: _paired
@property (retain, nonatomic) DBWorkspaceStateChangeRequest *pendingChangeRequest; // ivar: _pendingChangeRequest
@property (copy, nonatomic) id *presentationRequestHandler; // ivar: _presentationRequestHandler
@property (retain, nonatomic) SiriPresentationViewController *presentationViewController; // ivar: _presentationViewController
@property (retain, nonatomic) id *screenBorrowToken; // ivar: _screenBorrowToken
@property (readonly) Class superclass;
@property (retain, nonatomic) NSMutableSet *touchToDismissEnabledReasons; // ivar: _touchToDismissEnabledReasons
@property (retain, nonatomic) UILongPressGestureRecognizer *touchToDismissRecognizer; // ivar: _touchToDismissRecognizer


-(BOOL)presentsFullScreen;
-(BOOL)presentsUnderStatusBar;
-(id)initWithEnvironment:(id)arg0 ;
-(id)presentationViewWithIdentifier:(id)arg0 ;
-(struct CGRect )_hostedPresentationFrame;
-(void)_addPresentationView;
-(void)_handleBackgroundURLRequest:(id)arg0 applicationInfo:(id)arg1 ;
-(void)_handleHomeEventType:(NSUInteger)arg0 ;
-(void)_handlePunchoutRequest:(id)arg0 ;
-(void)_removePresentationView;
-(void)_requestDismissalWithReason:(NSUInteger)arg0 ;
-(void)_safeDismissAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_telephonyDropTapped:(id)arg0 ;
-(void)_touchedDisplayToDismiss:(id)arg0 ;
-(void)_updateHostedPresentationFrame;
-(void)_updateTouchToDismiss;
-(void)activateSceneWithSettings:(id)arg0 completion:(id)arg1 ;
-(void)activeIntentWithBundleId:(id)arg0 ;
-(void)backgroundSceneWithCompletion:(id)arg0 ;
-(void)deactivateSceneWithReasonMask:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)foregroundSceneWithSettings:(id)arg0 completion:(id)arg1 ;
-(void)handleEvent:(id)arg0 ;
-(void)handleTransitionToFrame:(struct CGRect )arg0 ;
-(void)invalidatePresentationViewForIdentifier:(id)arg0 ;
-(void)setTouchToDismissEnabled:(BOOL)arg0 forRequester:(id)arg1 ;
-(void)siriPresentation:(id)arg0 isEnabledDidChange:(BOOL)arg1 ;
-(void)siriPresentation:(id)arg0 requestsDismissalWithOptions:(id)arg1 withHandler:(id)arg2 ;
-(void)siriPresentation:(id)arg0 requestsPresentationWithOptions:(id)arg1 withHandler:(id)arg2 ;
-(void)siriPresentation:(id)arg0 requestsPunchout:(id)arg1 withHandler:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif