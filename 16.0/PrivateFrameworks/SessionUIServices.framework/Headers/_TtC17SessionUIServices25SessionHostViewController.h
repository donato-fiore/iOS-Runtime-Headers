// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES25SESSIONHOSTVIEWCONTROLLER_H
#define _TTC17SESSIONUISERVICES25SESSIONHOSTVIEWCONTROLLER_H

@class UIViewController, BSColor, NSArray;
@protocol _TtP17SessionUIServices19SessionSceneHosting_, BSInvalidatable, BLSHBacklightSceneHostEnvironment, _TtP17SessionUIServices33SessionHostViewControllerDelegate_;


#import "_TtC17SessionUIServices19SessionSceneMetrics.h"
#import "_TtC17SessionUIServices22SessionSceneDescriptor.h"
#import "_TtC17SessionUIServices22ActivityMetricsRequest.h"

@interface _TtC17SessionUIServices25SessionHostViewController : UIViewController <_TtP17SessionUIServices19SessionSceneHosting_, BSInvalidatable>

 {
    ? _presentationMode;
    ? sessionTouchRestrictedRects;
    ? settingsDiffInspector;
    ? scene;
    ? sceneForeground;
    ? invalidated;
    ? scenePresenter;
    ? activatedSceneView;
    ? liveSceneSnapshotView;
    ? processIdentity;
    ? presentationAssertion;
    ? sessionNeedsTintColor;
    ? activationCompletions;
    ? touchDeliveryPolicyAssertions;
    ? blsActionHandler;
    ? queue;
    ? clockAngelAlreadyExitedOnceWithinTimeout;
    ? clockAngelExitTimer;
    ? clockAngelExitTimeout;
}


@property (nonatomic, readonly) NSObject<BLSHBacklightSceneHostEnvironment> *backlightHostEnvironment;
@property (nonatomic, weak) NSObject<_TtP17SessionUIServices33SessionHostViewControllerDelegate_> *delegate; // ivar: delegate
@property (nonatomic, readonly) _TtC17SessionUIServices19SessionSceneMetrics *fallbackMetrics;
@property (nonatomic, retain) BSColor *platterTintColor; // ivar: platterTintColor
@property (nonatomic) unsigned int presentationMode;
@property (nonatomic, retain) _TtC17SessionUIServices19SessionSceneMetrics *resolvedMetrics; // ivar: resolvedMetrics
@property (nonatomic, retain) _TtC17SessionUIServices22SessionSceneDescriptor *sessionSceneDescriptor; // ivar: sessionSceneDescriptor
@property (nonatomic, copy) NSArray *sessionTouchRestrictedRects;
@property (nonatomic) BOOL shouldShareTouchesWithHost; // ivar: shouldShareTouchesWithHost
@property (nonatomic, retain) _TtC17SessionUIServices22ActivityMetricsRequest *systemProvidedMetrics; // ivar: systemProvidedMetrics


-(BOOL)_canShowWhileLocked;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithSessionSceneDescriptor:(id)arg0 ;
-(id)sceneHandle;
-(void)dealloc;
-(void)invalidate;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif