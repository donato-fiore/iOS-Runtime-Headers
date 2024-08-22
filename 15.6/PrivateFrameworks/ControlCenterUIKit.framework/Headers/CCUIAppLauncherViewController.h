// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCUIAPPLAUNCHERVIEWCONTROLLER_H
#define CCUIAPPLAUNCHERVIEWCONTROLLER_H

@class SCUIAssetProvider, NSArray, UIViewPropertyAnimator, NSString;
@protocol CCUIContentModuleContentViewControllerInternal, OS_dispatch_queue;


#import "CCUIMenuModuleViewController.h"
#import "CCUIAppLauncherModule.h"

@interface CCUIAppLauncherViewController : CCUIMenuModuleViewController <CCUIContentModuleContentViewControllerInternal>

 {
    SCUIAssetProvider *_assetProvider;
    NSObject<OS_dispatch_queue> *_menuItemsFetchQueue;
    NSArray *_fetchedMenuItems;
}


@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CCUIAppLauncherModule *module; // ivar: _module
@property (readonly, nonatomic) CGFloat preferredExpandedContentHeight;
@property (readonly, nonatomic) CGFloat preferredExpandedContentWidth;
@property (readonly, nonatomic) CGFloat preferredExpandedContinuousCornerRadius;
@property (readonly, nonatomic) BOOL providesOwnPlatter;
@property (readonly, nonatomic) BOOL shouldPerformClickInteraction;
@property (readonly, nonatomic) BOOL shouldPerformHoverInteraction;
@property (readonly) Class superclass;


-(BOOL)_canShowWhileLocked;
-(BOOL)shouldBeginTransitionToExpandedContentModule;
-(id)_assetProvider;
-(id)_menuItemForShortcutItem:(id)arg0 ;
-(id)leadingImageForMenuItem:(id)arg0 ;
-(void)_activateApplicationForShortcutItem:(id)arg0 ;
-(void)_queue_setFetchedMenuItems:(id)arg0 ;
-(void)_queue_updateApplicationShortcutsActions;
-(void)_updateApplicationShortcutsActionsIfNecessary;
-(void)_updateWithFetchedMenuItemsIfNecessary;
-(void)buttonTapped:(id)arg0 forEvent:(id)arg1 ;
-(void)buttonTouchDown:(id)arg0 forEvent:(id)arg1 ;
-(void)didTransitionToExpandedContentMode:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)willResignActive;


@end


#endif