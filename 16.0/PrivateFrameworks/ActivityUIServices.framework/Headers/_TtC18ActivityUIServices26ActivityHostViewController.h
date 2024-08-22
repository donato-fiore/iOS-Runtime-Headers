// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC18ACTIVITYUISERVICES26ACTIVITYHOSTVIEWCONTROLLER_H
#define _TTC18ACTIVITYUISERVICES26ACTIVITYHOSTVIEWCONTROLLER_H

@class UIViewController, ACActivityDescriptor, NSArray, UIColor, BSColor;
@protocol _TtP18ActivityUIServices20ActivitySceneHosting_, BSInvalidatable, BLSHBacklightSceneHostEnvironment, _TtP18ActivityUIServices34ActivityHostViewControllerDelegate_;


#import "_TtC18ActivityUIServices23ActivitySceneDescriptor.h"
#import "_TtC18ActivityUIServices20ActivitySceneMetrics.h"
#import "_TtC18ActivityUIServices22ActivityMetricsRequest.h"

@interface _TtC18ActivityUIServices26ActivityHostViewController : UIViewController <_TtP18ActivityUIServices20ActivitySceneHosting_, BSInvalidatable>

 {
    ? _presentationMode;
    ? activityTouchRestrictedRects;
    ? settingsDiffInspector;
    ? scene;
    ? sceneForeground;
    ? invalidated;
    ? scenePresenter;
    ? activatedSceneView;
    ? liveSceneSnapshotView;
    ? processIdentity;
    ? presentationAssertion;
    ? waitingForArchiveContentReady;
    ? waitingForArchiveContentReadyBlocks;
    ? sceneActivated;
    ? sceneActivatedBlocks;
    ? logIdentifier;
    ? touchDeliveryPolicyAssertions;
    ? queue;
    ? ensureContentTimer;
}


@property (nonatomic, readonly) ACActivityDescriptor *acActivityDescriptor;
@property (nonatomic, retain) _TtC18ActivityUIServices23ActivitySceneDescriptor *activitySceneDescriptor; // ivar: activitySceneDescriptor
@property (nonatomic, copy) NSArray *activityTouchRestrictedRects;
@property (nonatomic, retain) UIColor *backgroundTintColor; // ivar: backgroundTintColor
@property (nonatomic, readonly) NSObject<BLSHBacklightSceneHostEnvironment> *backlightHostEnvironment;
@property (nonatomic, weak) NSObject<_TtP18ActivityUIServices34ActivityHostViewControllerDelegate_> *delegate; // ivar: delegate
@property (nonatomic, readonly) _TtC18ActivityUIServices20ActivitySceneMetrics *fallbackMetrics;
@property (nonatomic, retain) BSColor *platterTintColor; // ivar: platterTintColor
@property (nonatomic) unsigned int presentationMode;
@property (nonatomic, retain) _TtC18ActivityUIServices20ActivitySceneMetrics *resolvedMetrics; // ivar: resolvedMetrics
@property (nonatomic) BOOL shouldShareTouchesWithHost; // ivar: shouldShareTouchesWithHost
@property (nonatomic, retain) _TtC18ActivityUIServices22ActivityMetricsRequest *systemProvidedMetrics; // ivar: systemProvidedMetrics
@property (nonatomic, retain) UIColor *textColor; // ivar: textColor


-(BOOL)_canShowWhileLocked;
-(id)cancelTouchesForCurrentEventInHostedContent;
-(id)initWithActivitySceneDescriptor:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)dealloc;
-(void)ensureContentWithTimeout:(CGFloat)arg0 queue:(id)arg1 completion:(id)arg2 ;
-(void)invalidate;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willTransitionToTraitCollection:(id)arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif