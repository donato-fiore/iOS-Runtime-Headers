// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APPCMETRICSVIEW_H
#define APPCMETRICSVIEW_H

@class UIView, APPCPromotedContentInfo;
@protocol APPCMetricRegister, APPCDiagnosticMetricsHelping, APPCMetricsInteractionPresentationDelegate, APPCMetricsViewReadyDelegate;


#import "APPrivacyMarker.h"

@interface APPCMetricsView : UIView <APPCMetricRegister>

 {
    ? startsCollapsed;
    ? frameObserver;
    ? currentlyViewable;
    ? context;
    ? promotedContent;
    ? debugView;
    ? forcedReadiness;
    ? wasTapped;
    ? isBackgrounded;
    ? impressionSent;
    ? timingTracking;
    ? visibilityChecker;
    ? needToSendOnScreen;
    ? slotPosition;
    ? adContentPosition;
    ? currentOrientation;
    ? debugOverlay;
    ? visibilityCheckingView;
    ? offsetObserver;
    ? _isCollapsed;
    ? lastTimeVisibilityCheckFrame;
    ? readinessObserver;
    ? $__lazy_storage_$_debugViewEnabled;
    ? $__lazy_storage_$_debugVisibilityColorsEnabled;
    ? visibleThresholds;
    ? contentView;
    ? visibleThresholdsLock;
    ? viewCollapsedState;
    ? lastCollapsedState;
    ? policyCheckCompleted;
}


@property (nonatomic, readonly) NSObject<APPCDiagnosticMetricsHelping> *diagnosticMetricHelper;
@property (nonatomic) CGRect frame;
@property (nonatomic, weak) NSObject<APPCMetricsInteractionPresentationDelegate> *interactionPresentationDelegate; // ivar: interactionPresentationDelegate
@property (nonatomic, readonly) UIEdgeInsets metricsViewEdgeInsets;
@property (nonatomic, readonly) CGRect privacyMarkerFrame;
@property (nonatomic, readonly) APPrivacyMarker *privacyMarkerView;
@property (nonatomic, retain) APPCPromotedContentInfo *promotedContentInfo; // ivar: promotedContentInfo
@property (nonatomic) BOOL ready; // ivar: ready
@property (nonatomic, weak) NSObject<APPCMetricsViewReadyDelegate> *readyDelegate; // ivar: readyDelegate


-(BOOL)safeCollapseAndReturnError:(*id)arg0 ;
-(BOOL)safeExpandAndReturnError:(*id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)appBackgrounded:(id)arg0 ;
-(void)appForegrounded:(id)arg0 ;
-(void)appWillResignActive:(id)arg0 ;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)didMoveToWindow;
-(void)expand;
-(void)unloadAdViewIfRequired;
-(void)willEnterforeground;
-(void)willMoveToSuperview:(id)arg0 ;


@end


#endif