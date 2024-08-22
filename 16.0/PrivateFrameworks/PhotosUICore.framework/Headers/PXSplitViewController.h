// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSPLITVIEWCONTROLLER_H
#define PXSPLITVIEWCONTROLLER_H

@class UISplitViewController, NSHashTable, UIViewController;
@protocol UISplitViewControllerDelegate;



@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate>

 {
    BOOL _inViewWillTransitionToSize;
    NSInteger _originalPreferredDisplayMode;
    NSHashTable *_changeObservers;
}


@property (readonly, nonatomic) UIViewController *contentViewController; // ivar: _contentViewController
@property (readonly, nonatomic) BOOL isSidebarVisible;
@property (readonly, nonatomic) UIViewController *sidebarViewController; // ivar: _sidebarViewController
@property (nonatomic) BOOL wantsSidebarHidden; // ivar: _wantsSidebarHidden


+(void)initialize;
-(BOOL)_isDisplayModeAllVisibleAllowed;
-(BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1 ;
-(NSInteger)splitViewController:(id)arg0 displayModeForExpandingToProposedDisplayMode:(NSInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSidebarNavigationController:(id)arg0 contentViewController:(id)arg1 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(void)dismissPrimaryColumnIfOverlay;
-(void)registerChangeObserver:(id)arg0 ;
-(void)splitViewController:(id)arg0 willChangeToDisplayMode:(NSInteger)arg1 ;
-(void)toggleSidebarVisibilityAnimated;
-(void)unregisterChangeObserver:(id)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif