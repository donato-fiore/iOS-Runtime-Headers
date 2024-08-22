// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBHMULTIPLEXINGWRAPPERVIEWCONTROLLER_H
#define SBHMULTIPLEXINGWRAPPERVIEWCONTROLLER_H

@class UIViewController, NSHashTable, APUIAppPredictionViewController, NSArray, UIView, NSString, _UILegibilitySettings;
@protocol SBHMultiplexingViewControllerObserver, SBIconViewCustomImageViewControlling, SBHMultiplexingWrapperViewControllerDelegate, SBLeafIconDataSource;


#import "SBIcon.h"

@interface SBHMultiplexingWrapperViewController : UIViewController <SBHMultiplexingViewControllerObserver, SBIconViewCustomImageViewControlling>

 {
    NSHashTable *_observers;
}


@property (readonly, weak, nonatomic) APUIAppPredictionViewController *appPredictionViewController; // ivar: _appPredictionViewController
@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition; // ivar: _approximateLayoutPosition
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (nonatomic) NSUInteger backgroundAnimationCount; // ivar: _backgroundAnimationCount
@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (copy, nonatomic) id *backgroundViewConfigurator; // ivar: _backgroundViewConfigurator
@property (copy, nonatomic) id *backgroundViewProvider; // ivar: _backgroundViewProvider
@property (nonatomic) CGFloat brightness;
@property (readonly, nonatomic) BOOL canAlignWithGrid; // ivar: _canAlignWithGrid
@property (readonly, nonatomic) NSUInteger component; // ivar: _component
@property (retain, nonatomic) UIView *containerView; // ivar: _containerView
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHMultiplexingWrapperViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (nonatomic) BOOL forcesEdgeAntialiasing; // ivar: _forcesEdgeAntialiasing
@property (readonly, nonatomic, getter=isGridAligned) BOOL gridAligned;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIcon *icon; // ivar: _icon
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (nonatomic) NSUInteger imageViewAlignment; // ivar: _imageViewAlignment
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings; // ivar: _legibilitySettings
@property (copy, nonatomic) NSString *location; // ivar: _location
@property (readonly, nonatomic) UIViewController *multiplexingViewController; // ivar: _multiplexingViewController
@property (nonatomic, getter=isOverlapping) BOOL overlapping; // ivar: _overlapping
@property (nonatomic) NSUInteger pauseReasons; // ivar: _pauseReasons
@property (nonatomic) NSUInteger presentationMode;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu; // ivar: _showingContextMenu
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) BOOL showsSquareCorners; // ivar: _showsSquareCorners
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) CGPoint snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled; // ivar: _userInteractionEnabled
@property (nonatomic) NSUInteger userVisibilityStatus;
@property (readonly, nonatomic) CGRect visibleBounds;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *visiblyActiveDataSource;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (nonatomic) BOOL wantsEditingDisplayStyle; // ivar: _wantsEditingDisplayStyle
@property (readonly, nonatomic) BOOL wantsLabelHidden;


-(BOOL)_canShowWhileLocked;
-(NSUInteger)expectedAppPredictionViewControllerMode;
-(id)_widgetContextMenuController;
-(id)initWithIcon:(id)arg0 location:(id)arg1 multiplexingViewController:(id)arg2 appPredictionViewController:(id)arg3 canAlignWithGrid:(BOOL)arg4 ;
-(id)initWithIcon:(id)arg0 location:(id)arg1 multiplexingViewController:(id)arg2 component:(NSUInteger)arg3 ;
-(id)sourceView;
-(void)_configureBackgroundViewIfNecessary;
-(void)_updateApproximateWidgetPosition;
-(void)_updateBackgroundViewWeighting;
-(void)_updateEdgeAntialiasing;
-(void)_updateMultiplexingViewControllerModeAnimated:(BOOL)arg0 ;
-(void)_updateWidgetViewHitTesting;
-(void)addCustomImageViewControllerObserver:(id)arg0 ;
-(void)didSelectApplicationShortcutItem:(id)arg0 ;
-(void)loadView;
-(void)multiplexingViewControllerDidActivate:(id)arg0 ;
-(void)removeCustomImageViewControllerObserver:(id)arg0 ;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)willShowContextMenuAtLocation:(struct CGPoint )arg0 ;


@end


#endif