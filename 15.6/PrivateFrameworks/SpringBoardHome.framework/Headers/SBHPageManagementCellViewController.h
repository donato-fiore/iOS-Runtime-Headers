// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBHPAGEMANAGEMENTCELLVIEWCONTROLLER_H
#define SBHPAGEMANAGEMENTCELLVIEWCONTROLLER_H

@class UIViewController, NSArray, NSString, _UILegibilitySettings, MTMaterialView, UIView, UIGestureRecognizer;
@protocol UIGestureRecognizerDelegate, SBIconViewCustomImageViewControlling, SBHPageManagementCellViewControllerDelegate, SBLeafIconDataSource;


#import "SBFolder.h"
#import "SBIcon.h"
#import "SBIconListView.h"
#import "SBHPageManagementCellView.h"

@interface SBHPageManagementCellViewController : UIViewController <UIGestureRecognizerDelegate, SBIconViewCustomImageViewControlling>

 {
    SBHPageManagementCellMetrics _metrics;
    BOOL _toggleButtonAllowed;
}


@property (readonly, copy, nonatomic) NSArray *applicationShortcutItems;
@property (nonatomic) SBIconApproximateLayoutPosition approximateLayoutPosition;
@property (nonatomic) BOOL automaticallyUpdatesVisiblySettled;
@property (copy, nonatomic) id *backgroundViewConfigurator;
@property (copy, nonatomic) id *backgroundViewProvider; // ivar: _backgroundViewProvider
@property (nonatomic) CGFloat brightness;
@property (readonly, nonatomic) CGFloat continuousCornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBHPageManagementCellViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDropping) BOOL dropping;
@property (nonatomic, getter=isEditing) BOOL editing; // ivar: _editing
@property (readonly, nonatomic) SBFolder *folder; // ivar: _folder
@property (nonatomic) BOOL forcesEdgeAntialiasing;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBIcon *icon;
@property (nonatomic) SBIconImageInfo iconImageInfo; // ivar: _iconImageInfo
@property (nonatomic) NSUInteger imageViewAlignment;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly, nonatomic) MTMaterialView *listBackgroundView; // ivar: _listBackgroundView
@property (readonly, nonatomic) SBIconListView *listView; // ivar: _listView
@property (readonly, nonatomic) UIEdgeInsets minimumPreferredEdgeInsetsForContextMenu;
@property (nonatomic, getter=isOverlapping) BOOL overlapping;
@property (readonly, nonatomic) SBHPageManagementCellView *pageManagementCellView;
@property (nonatomic) NSUInteger pauseReasons;
@property (nonatomic) NSUInteger presentationMode;
@property (nonatomic) BOOL scalesListView;
@property (nonatomic, getter=isShowingContextMenu) BOOL showingContextMenu;
@property (nonatomic) BOOL showsSnapshotWhenDeactivated;
@property (nonatomic) BOOL showsSquareCorners; // ivar: _showsSquareCorners
@property (readonly, nonatomic) UIView *snapshotView;
@property (readonly, nonatomic) CGPoint snapshotViewCenter;
@property (readonly, nonatomic) UIView *springLoadingEffectTargetView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic) CGFloat toggleButtonAlpha;
@property (readonly, nonatomic) MTMaterialView *toggleButtonBackgroundView; // ivar: _toggleButtonBackgroundView
@property (nonatomic, getter=isUserInteractionEnabled) BOOL userInteractionEnabled;
@property (nonatomic) NSUInteger userVisibilityStatus;
@property (readonly, nonatomic) CGRect visibleBounds;
@property (readonly, nonatomic) NSObject<SBLeafIconDataSource> *visiblyActiveDataSource;
@property (readonly, nonatomic) BOOL wantsCaptureOnlyBackgroundView;
@property (nonatomic) BOOL wantsEditingDisplayStyle;
@property (readonly, nonatomic) BOOL wantsLabelHidden;


-(BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(id)initWithListView:(id)arg0 listBackgroundView:(id)arg1 toggleButtonBackgroundView:(id)arg2 folder:(id)arg3 metrics:(struct SBHPageManagementCellMetrics )arg4 toggleButtonAllowed:(BOOL)arg5 ;
-(id)listHighlightView;
-(id)sourceView;
-(void)cancelGestures;
-(void)cleanUpListView;
-(void)listViewTapped:(id)arg0 ;
-(void)loadView;
-(void)setListHighlighted:(BOOL)arg0 ;


@end


#endif