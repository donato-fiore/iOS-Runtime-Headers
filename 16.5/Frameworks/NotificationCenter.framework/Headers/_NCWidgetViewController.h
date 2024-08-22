// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NCWIDGETVIEWCONTROLLER_H
#define _NCWIDGETVIEWCONTROLLER_H

@class UIViewController, NSMapTable, UIScrollViewDelayedTouchesBeganGestureRecognizer, NSString, UIViewController<NCWidgetProvidingPrivate>, UIView;
@protocol _NCWidgetViewController_Service_IPC, NCSizeObservingViewDelegate, OS_dispatch_queue;



@interface _NCWidgetViewController : UIViewController <_NCWidgetViewController_Service_IPC, NCSizeObservingViewDelegate>

 {
    NSObject<OS_dispatch_queue> *_remoteViewControllerProxyQueue;
    NSMapTable *_wrappedAppearStatesToOpenTransactionIDs;
    UIScrollViewDelayedTouchesBeganGestureRecognizer *_touchDelayGestureRecognizer;
    CGRect _initialBounds;
    BOOL _snapshotTimestampsEnabled;
    BOOL _clientUsesAutolayout;
    ? _contentProvidingViewControllerFlags;
}


@property (nonatomic, getter=_clientMarginInsets, setter=_setClientMarginInsets:) UIEdgeInsets clientMarginInsets; // ivar: _clientMarginInsets
@property (copy, nonatomic, getter=_containerIdentifier) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic, getter=_contentProvidingViewController) UIViewController<NCWidgetProvidingPrivate> *contentProvidingViewController; // ivar: _contentProvidingViewController
@property (retain, nonatomic, getter=_contentView, setter=_setContentView:) UIView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=_initialLayoutMargins, setter=_setInitialLayoutMargins:) UIEdgeInsets initialLayoutMargins; // ivar: _initialLayoutMargins
@property (readonly) Class superclass;
@property (nonatomic, getter=_visibilityState, setter=_setVisibilityState:) NSInteger visibilityState; // ivar: _visibilityState
@property (copy, nonatomic, getter=_widgetIdentifier) NSString *widgetIdentifier; // ivar: _widgetIdentifier


+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
+(void)_reduceTransparencyDidChange:(id)arg0 ;
+(void)initialize;
-(BOOL)_disableAutomaticKeyboardBehavior;
-(BOOL)_setVisibleFrame:(struct CGRect )arg0 ;
-(BOOL)_shouldRemoveViewFromHierarchyOnDisappear;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(CGFloat)_clientPreferredContentHeight;
-(CGFloat)_clientPreferredContentHeightPermittingAutolayout:(BOOL)arg0 didUseFittingSize:(*BOOL)arg1 ;
-(CGFloat)_effectiveHeightForRequestedHeight:(CGFloat)arg0 ;
-(NSInteger)_clientLargestSupportedDisplayMode;
-(id)_widgetExtensionContext;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)__openTransactionForAppearanceCallWithState:(int)arg0 withIdentifier:(id)arg1 ;
-(void)__performUpdateWithReplyHandler:(id)arg0 ;
-(void)__requestEncodedLayerTreeToURL:(id)arg0 withCodingImageFormat:(id)arg1 withReplyHandler:(id)arg2 ;
-(void)__setActiveDisplayMode:(NSInteger)arg0 ;
-(void)__setMaximumSize:(struct CGSize )arg0 forDisplayMode:(NSInteger)arg1 ;
-(void)__updateLayoutMargins:(id)arg0 ;
-(void)__updateVisibilityState:(NSInteger)arg0 ;
-(void)__updateVisibleFrame:(struct CGRect )arg0 withReplyHandler:(id)arg1 ;
-(void)_clientLargestSupportedDisplayModeDidChange;
-(void)_closeTransactionWithAppearState:(int)arg0 ;
-(void)_encodeLayerTreeToURL:(id)arg0 withCodingImageFormat:(id)arg1 withReplyHandler:(id)arg2 ;
-(void)_enqueueProxyRequest:(id)arg0 ;
-(void)_notifyContentProvidingViewControllerOfActiveDisplayModeChange;
-(void)_performUpdateWithCompletionHandler:(id)arg0 ;
-(void)_processInputItems:(id)arg0 initialActiveDisplayMode:(*NSInteger)arg1 ;
-(void)_requestMarginInsets;
-(void)_requestPreferredViewHeight:(CGFloat)arg0 ;
-(void)_setActiveDisplayMode:(NSInteger)arg0 unconditionallyNotifyingContentProvidingViewController:(BOOL)arg1 ;
-(void)_setMaximumWidth:(CGFloat)arg0 forDisplayMode:(NSInteger)arg1 ;
-(void)beginRequestWithExtensionContext:(id)arg0 ;
-(void)dealloc;
-(void)delayed:(id)arg0 ;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)sizeObservingView:(id)arg0 didChangeSize:(struct CGSize )arg1 ;
-(void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif