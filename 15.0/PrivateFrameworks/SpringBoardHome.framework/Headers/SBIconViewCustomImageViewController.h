// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBICONVIEWCUSTOMIMAGEVIEWCONTROLLER_H
#define SBICONVIEWCUSTOMIMAGEVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, _UILegibilitySettings, UIView;
@protocol SBIconViewCustomImageViewControlling, SBLeafIconDataSource;


#import "SBIcon.h"

@interface SBIconViewCustomImageViewController : UIViewController <SBIconViewCustomImageViewControlling>



@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (copy, nonatomic) id *backgroundViewConfigurator;
@property (copy, nonatomic) id *backgroundViewProvider;
@property (nonatomic) CGFloat brightness;
@property (retain, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing;
@property (nonatomic) BOOL forcesEdgeAntialiasing; // ivar: _forcesEdgeAntialiasing
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIcon *icon;
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (nonatomic) NSUInteger imageViewAlignment;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (nonatomic) NSUInteger pauseReasons;
@property (nonatomic) NSUInteger presentationMode;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) BOOL showsSquareCorners; // ivar: _showsSquareCorners
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) CGPoint snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) NSUInteger userVisibilityStatus;
@property (readonly, nonatomic) CGRect visibleBounds;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *visiblyActiveDataSource;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (readonly, nonatomic) BOOL wantsLabelHidden;


-(id)contentView;
-(id)initWithContentViewController:(id)arg0 ;
-(id)sourceView;
-(void)_updateEdgeAntialiasing;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidMoveToWindow:(id)arg0 shouldAppearOrDisappear:(BOOL)arg1 ;


@end


#endif