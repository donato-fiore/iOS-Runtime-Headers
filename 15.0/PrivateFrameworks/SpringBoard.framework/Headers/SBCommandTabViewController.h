// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBCOMMANDTABVIEWCONTROLLER_H
#define SBCOMMANDTABVIEWCONTROLLER_H

@class UIViewController, NSMutableOrderedSet, NSMutableArray, MTMaterialShadowView, UIView, SBIconView, UILabel, NSLayoutConstraint, UIStackView, UIPanGestureRecognizer, UITapGestureRecognizer, UIHoverGestureRecognizer, NSString;
@protocol SBIconViewDelegate, SBCommandTabViewControllerDelegate;


#import "SBIconController.h"
#import "SBIconModel.h"

@interface SBCommandTabViewController : UIViewController <SBIconViewDelegate>

 {
    NSMutableOrderedSet *_recentDisplayItems;
    NSUInteger _selectedIndex;
    SBIconController *_iconController;
    SBIconModel *_iconModel;
    NSMutableArray *_iconViews;
    MTMaterialShadowView *_backgroundMaterialView;
    UIView *_blurredBackgroundView;
    UIView *_selectionSquareView;
    SBIconView *_selectedIconView;
    UILabel *_selectedIconLabel;
    NSLayoutConstraint *_selectionXLayoutConstraint;
    NSLayoutConstraint *_selectedLabelXConstraint;
    NSLayoutConstraint *_selectedLabelBottomConstraint;
    UIStackView *_stackView;
    SBIconView *_homeIconView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    UITapGestureRecognizer *_tapDismissGestureRecognizer;
    UIHoverGestureRecognizer *_hoverGestureRecognizer;
    CGPoint _lastHoverLocation;
    BOOL _isTouchDown;
    BOOL _isIconSelected;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBCommandTabViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canActivateWithRecentDisplayItems:(id)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)iconViewDisplaysAccessories:(id)arg0 ;
-(NSUInteger)indexOfDisplayItem:(id)arg0 ;
-(id)init;
-(id)initWithRecentDisplayItems:(id)arg0 ;
-(id)selectedApplicationDisplayItem;
-(void)_configureGridLayoutConfiguration:(id)arg0 ;
-(void)_handleCommandTab:(id)arg0 ;
-(void)_handleShiftCommandTab:(id)arg0 ;
-(void)_handleTapDismissGesture:(id)arg0 ;
-(void)_handleUIGesture:(id)arg0 ;
-(void)_moveSelectionSquareToIconAtIndex:(NSUInteger)arg0 ;
-(void)_updateForUserInterfaceStyle;
-(void)_updateIconSelectionPositionAndLabelText;
-(void)dealloc;
-(void)icon:(id)arg0 touchEnded:(BOOL)arg1 ;
-(void)iconModelDidChange:(id)arg0 ;
-(void)iconTapped:(id)arg0 ;
-(void)iconTouchBegan:(id)arg0 ;
-(void)next;
-(void)previous;
-(void)removeDisplayItem:(id)arg0 ;
-(void)showCommandTabBar;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif