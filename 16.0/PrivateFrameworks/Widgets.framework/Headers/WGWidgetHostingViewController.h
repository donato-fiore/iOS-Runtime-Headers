// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WGWIDGETHOSTINGVIEWCONTROLLER_H
#define WGWIDGETHOSTINGVIEWCONTROLLER_H

@class UIViewController, NSString, BSAuditToken, UIView, NSTimer, NSDate, NSMapTable, NSMutableDictionary;
@protocol WGWidgetHostingViewControllerDelegate, OS_dispatch_queue, NSCopying, WGWidgetHostingViewControllerHost, OS_dispatch_semaphore;


#import "WGWidgetLifeCycleSequence.h"
#import "_WGBrokenWidgetView.h"
#import "_WGLockedOutWidgetView.h"
#import "_WGWidgetRemoteViewController.h"
#import "_WGCAPackageView.h"
#import "WGWidgetInfo.h"

@interface WGWidgetHostingViewController : UIViewController

@property (readonly, nonatomic) NSInteger activeDisplayMode; // ivar: _activeDisplayMode
@property (readonly, nonatomic, getter=_activeLifeCycleSequence) WGWidgetLifeCycleSequence *activeLifeCycleSequence; // ivar: _activeLifeCycleSequence
@property (copy, nonatomic) NSString *appBundleID; // ivar: _appBundleID
@property (readonly, weak, nonatomic) BSAuditToken *auditToken;
@property (nonatomic, getter=_isBlacklisted, setter=_setBlacklisted:) BOOL blacklisted; // ivar: _blacklisted
@property (retain, nonatomic, getter=_brokenView, setter=_setBrokenView:) _WGBrokenWidgetView *brokenView; // ivar: _brokenView
@property (readonly, nonatomic, getter=isBrokenViewVisible) BOOL brokenViewVisible;
@property (nonatomic, getter=_connectionState, setter=_setConnectionState:) NSInteger connectionState; // ivar: _connectionState
@property (readonly, copy, nonatomic, getter=_containerIdentifier) NSString *containerIdentifier;
@property (retain, nonatomic, getter=_contentProvidingView, setter=_setContentProvidingView:) UIView *contentProvidingView; // ivar: _contentProvidingView
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (weak, nonatomic) NSObject<WGWidgetHostingViewControllerDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=_didRequestViewInset, setter=_setDidRequestViewInset:) BOOL didRequestViewInset; // ivar: _didRequestViewInset
@property (nonatomic, getter=_didUpdate, setter=_setDidUpdate:) BOOL didUpdate; // ivar: _didUpdate
@property (weak, nonatomic, getter=_disconnectionTimer, setter=_setDisconnectionTimer:) NSTimer *disconnectionTimer; // ivar: _disconnectionTimer
@property (nonatomic) BOOL disconnectsImmediately; // ivar: _disconnectsImmediately
@property (readonly, nonatomic, getter=_diskWriteQueue) NSObject<OS_dispatch_queue> *diskWriteQueue; // ivar: _diskWriteQueue
@property (readonly, copy, nonatomic) NSString *displayName;
@property (nonatomic, getter=_isEncodingLayerTree, setter=_setEncodingLayerTree:) BOOL encodingLayerTree; // ivar: _encodingLayerTree
@property (copy, nonatomic, getter=_extensionRequest, setter=_setExtensionRequest:) NSObject<NSCopying> *extensionRequest; // ivar: _extensionRequest
@property (weak, nonatomic) NSObject<WGWidgetHostingViewControllerHost> *host; // ivar: _host
@property (nonatomic, getter=_isIgnoringParentAppearState, setter=_setIgnoringParentAppearState:) BOOL ignoringParentAppearState; // ivar: _ignoringParentAppearState
@property (nonatomic, setter=_setImplementsPerformUpdate:) BOOL implementsPerformUpdate; // ivar: _implementsPerformUpdate
@property (readonly, nonatomic) NSInteger largestAvailableDisplayMode;
@property (retain, nonatomic, getter=_lastUnanticipatedDisconnectionDate, setter=_setLastUnanticipatedDisconnectionDate:) NSDate *lastUnanticipatedDisconnectionDate; // ivar: _lastUnanticipatedDisconnectionDate
@property (readonly, nonatomic, getter=isLockedOut) BOOL lockedOut; // ivar: _lockedOut
@property (retain, nonatomic, getter=_lockedOutView, setter=_setLockedOutView:) _WGLockedOutWidgetView *lockedOutView; // ivar: _lockedOutView
@property (nonatomic) NSUInteger maskedCorners; // ivar: _maskedCorners
@property (readonly, nonatomic, getter=_openAppearanceTransactions) NSMapTable *openAppearanceTransactions; // ivar: _openAppearanceTransactions
@property (readonly, nonatomic, getter=_proxyConnectionQueue) NSObject<OS_dispatch_queue> *proxyConnectionQueue; // ivar: _proxyConnectionQueue
@property (readonly, nonatomic, getter=_proxyRequestQueue) NSObject<OS_dispatch_queue> *proxyRequestQueue; // ivar: _proxyRequestQueue
@property (retain, nonatomic, getter=_remoteViewController, setter=_setRemoteViewController:) _WGWidgetRemoteViewController *remoteViewController; // ivar: _remoteViewController
@property (copy, nonatomic, getter=_remoteViewControllerConnectionHandler, setter=_setRemoteViewControllerConnectionHandler:) id *remoteViewControllerConnectionHandler; // ivar: _remoteViewControllerConnectionHandler
@property (copy, nonatomic, getter=_remoteViewControllerDisconnectionHandler, setter=_setRemoteViewControllerDisconnectionHandler:) id *remoteViewControllerDisconnectionHandler; // ivar: _remoteViewControllerDisconnectionHandler
@property (readonly, nonatomic, getter=isRemoteViewVisible) BOOL remoteViewVisible;
@property (retain, nonatomic, getter=_sequenceIDsToOutstandingWidgetUpdateCompletionHandlers, setter=_setSequenceIDsToOutstandingWidgetUpdateCompletionHandlers:) NSMutableDictionary *sequenceIDsToOutstandingWidgetUpdateCompletionHandlers; // ivar: _sequenceIDsToOutstandingWidgetUpdateCompletionHandlers
@property (readonly, nonatomic, getter=isSnapshotLoaded) BOOL snapshotLoaded;
@property (retain, nonatomic, getter=_snapshotView, setter=_setSnapshotView:) _WGCAPackageView *snapshotView; // ivar: _snapshotView
@property (nonatomic, getter=_snapshotViewBounds, setter=_setSnapshotBounds:) CGRect snapshotViewBounds; // ivar: _snapshotViewBounds
@property (nonatomic) NSInteger userSpecifiedDisplayMode;
@property (retain, nonatomic, getter=_viewWillAppearSemaphore, setter=_setViewWillAppearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillAppearSemaphore; // ivar: _viewWillAppearSemaphore
@property (retain, nonatomic, getter=_viewWillDisappearSemaphore, setter=_setViewWillDisappearSemaphore:) NSObject<OS_dispatch_semaphore> *viewWillDisappearSemaphore; // ivar: _viewWillDisappearSemaphore
@property (readonly, copy, nonatomic) NSString *widgetIdentifier;
@property (readonly, nonatomic) WGWidgetInfo *widgetInfo; // ivar: _widgetInfo


+(BOOL)_canWidgetHostCaptureSnapshotForSequence:(id)arg0 ;
+(BOOL)_canWidgetHostConnectRemoteViewControllerByCancellingDisappearanceForSequence:(id)arg0 ;
+(BOOL)_canWidgetHostConnectRemoteViewControllerByRequestingForSequence:(id)arg0 disconnectionTimer:(id)arg1 connectionState:(NSInteger)arg2 ;
+(BOOL)_canWidgetHostDisconnectRemoteViewControllerForSequence:(id)arg0 disconnectionTimer:(id)arg1 coalesce:(BOOL)arg2 ;
+(BOOL)_canWidgetHostEndSequenceByDisconnectingRemoteViewControllerForSequence:(id)arg0 ;
+(BOOL)_canWidgetHostInsertRemoteViewForSequence:(id)arg0 ;
+(BOOL)_canWidgetHostRequestRemoteViewControllerForSequence:(id)arg0 ;
+(void)setWidgetSnapshotTimestampsEnabled:(BOOL)arg0 ;
-(BOOL)_canInsertRemoteView:(*id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)_hasOutstandingUpdateRequestForSequence:(id)arg0 ;
-(BOOL)_isActiveSequence:(id)arg0 ;
-(BOOL)_managingContainerIsVisible;
-(BOOL)_shouldRemoveSnapshotWhenNotVisible;
-(BOOL)isLinkedOnOrAfterSystemVersion:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(id)_cancelTouches;
-(id)_snapshotIdentifierForLayoutMode:(NSInteger)arg0 ;
-(id)_updateRequestForSequence:(SEL)arg0 ;
-(id)_widgetSnapshotURLForLayoutMode:(NSInteger)arg0 ensuringDirectoryExists:(BOOL)arg1 ;
-(id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg0 ;
-(id)_widgetSnapshotURLForSnapshotIdentifier:(id)arg0 ensuringDirectoryExists:(BOOL)arg1 ;
-(id)description;
-(id)initWithWidgetInfo:(id)arg0 delegate:(id)arg1 host:(id)arg2 ;
-(struct CGSize )_maxSizeForDisplayMode:(NSInteger)arg0 ;
-(struct UIEdgeInsets )_layoutMargins;
-(struct UIEdgeInsets )_marginInsets;
-(void)_abortActiveSequence;
-(void)_attemptReconnectionAfterUnanticipatedDisconnection;
-(void)_beginRemoteViewControllerAppearanceTransitionIfNecessary:(BOOL)arg0 semaphore:(id)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
// -(void)_beginSequenceWithReason:(id)arg0 completion:(id)arg1 updateHandler:(unk)arg2  ;
-(void)_captureLayerTree:(id)arg0 ;
-(void)_captureSnapshotAndBeginDisappearanceTransitionForSequence:(id)arg0 completionHandler:(id)arg1 ;
-(void)_connectRemoteViewControllerForReason:(id)arg0 sequence:(id)arg1 completionHandler:(id)arg2 ;
-(void)_disconnectRemoteViewControllerForReason:(id)arg0 sequence:(id)arg1 coalesce:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)_disconnectRemoteViewControllerForSequence:(id)arg0 completion:(id)arg1 ;
-(void)_disconnectionTimerDidFire:(id)arg0 ;
-(void)_endRemoteViewControllerAppearanceTransitionIfNecessary;
-(void)_endRemoteViewControllerAppearanceTransitionIfNecessaryWithCompletion:(id)arg0 ;
-(void)_endSequence:(id)arg0 withReason:(id)arg1 completion:(id)arg2 ;
// -(void)_enqueueDisconnectionRequestForSequence:(id)arg0 endTransitionBlock:(id)arg1 completion:(unk)arg2  ;
// -(void)_enqueueRemoteServiceRequest:(id)arg0 withDescription:(unk)arg1  ;
// -(void)_enqueueRequest:(id)arg0 inQueue:(unk)arg1 trampolinedToMainQueue:(id)arg2 withDescription:(BOOL)arg3  ;
-(void)_finishDisconnectingRemoteViewControllerForSequence:(id)arg0 error:(id)arg1 completion:(id)arg2 ;
-(void)_initiateNewSequenceIfNecessary;
-(void)_insertAppropriateContentView;
-(void)_insertBrokenView;
-(void)_insertContentProvidingSubview:(id)arg0 sequence:(id)arg1 completion:(id)arg2 ;
-(void)_insertLockedOutViewWithExplanation:(id)arg0 ;
-(void)_insertSnapshotViewIfAppropriate;
-(void)_insertSnapshotWithCompletionHandler:(id)arg0 ;
-(void)_invalidateDisconnectionTimer;
-(void)_invalidateSnapshotWithForce:(BOOL)arg0 removingSnapshotFilesForActiveDisplayMode:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)_invalidateVisibleFrame;
-(void)_layoutMarginsDidChange;
-(void)_loadSnapshotViewFromDiskIfNecessary:(id)arg0 ;
-(void)_noteOutstandingUpdateRequestForSequence:(id)arg0 ;
-(void)_packageViewFromURL:(id)arg0 reply:(id)arg1 ;
// -(void)_packageViewWithBlock:(id)arg0 reply:(unk)arg1  ;
-(void)_performUpdateForSequence:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)_purgeLegacySnapshotsIfNecessary;
// -(void)_registerUpdateRequestCompletionHandler:(id)arg0 forSequence:(unk)arg1  ;
-(void)_removeAllSnapshotFilesDueToIssue:(BOOL)arg0 ;
-(void)_removeAllSnapshotFilesForActiveDisplayMode;
-(void)_removeAllSnapshotFilesInActiveDisplayModeForAllButActiveUserInterfaceStyle;
-(void)_removeAllSnapshotFilesInActiveDisplayModeForContentSizeCategory:(id)arg0 ;
-(void)_removeAllSnapshotFilesMatchingPredicate:(id)arg0 dueToIssue:(BOOL)arg1 ;
-(void)_removeItemAsynchronouslyAtURL:(id)arg0 ;
-(void)_removeItemAtURL:(id)arg0 ;
-(void)_requestInsertionOfRemoteViewAfterViewWillAppearForSequence:(id)arg0 completionHandler:(id)arg1 ;
-(void)_requestRemoteViewControllerForSequence:(id)arg0 completionHander:(id)arg1 ;
-(void)_requestVisibilityStateUpdateForPossiblyAppearing:(BOOL)arg0 sequence:(id)arg1 ;
-(void)_rowHeightDidChange:(id)arg0 ;
// -(void)_scheduleDisconnectionTimerForSequence:(id)arg0 endTransitionBlock:(id)arg1 completion:(unk)arg2  ;
-(void)_setupRequestQueue;
-(void)_synchronizeGeometryWithSnapshot;
-(void)_updatePreferredContentSizeWithHeight:(CGFloat)arg0 ;
-(void)_updateWidgetWithCompletionHandler:(id)arg0 ;
-(void)_validateSnapshotViewForActiveLayoutMode;
-(void)dealloc;
-(void)handleReconnectionRequest:(id)arg0 ;
-(void)invalidateCachedSnapshotWithCompletionHandler:(id)arg0 ;
-(void)invalidateCachedSnapshotWithURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)managingContainerDidDisappear:(id)arg0 ;
-(void)managingContainerWillAppear:(id)arg0 ;
-(void)maximumSizeDidChangeForDisplayMode:(NSInteger)arg0 ;
-(void)requestIconWithHandler:(id)arg0 ;
-(void)requestSettingsIconWithHandler:(id)arg0 ;
-(void)setPreferredContentSize:(struct CGSize )arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)widget:(id)arg0 didTerminateWithError:(id)arg1 ;


@end


#endif