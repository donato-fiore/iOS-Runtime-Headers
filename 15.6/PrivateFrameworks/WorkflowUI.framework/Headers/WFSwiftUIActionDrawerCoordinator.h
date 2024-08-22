// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFSWIFTUIACTIONDRAWERCOORDINATOR_H
#define WFSWIFTUIACTIONDRAWERCOORDINATOR_H

@class NSString, WFDrawerController, WFEditorDrawerViewController, UIViewController, WFActionDrawerResultsController;
@protocol WFActionDrawerDelegate, UIPopoverPresentationControllerDelegate, WFSwiftUIActionDrawerCoordinatorDelegate;

#import <Foundation/Foundation.h>


@interface WFSwiftUIActionDrawerCoordinator : NSObject <WFActionDrawerDelegate, UIPopoverPresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WFSwiftUIActionDrawerCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) WFDrawerController *drawerController; // ivar: _drawerController
@property (readonly, nonatomic) WFEditorDrawerViewController *drawerViewController; // ivar: _drawerViewController
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIViewController *inspectorPaneContainerViewController; // ivar: _inspectorPaneContainerViewController
@property (readonly, nonatomic) NSUInteger presentationMode; // ivar: _presentationMode
@property (retain, nonatomic) UIViewController *presentedPopover; // ivar: _presentedPopover
@property (readonly, nonatomic) WFActionDrawerResultsController *resultsController; // ivar: _resultsController
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIViewController *visibleInspectorPaneContentViewController; // ivar: _visibleInspectorPaneContentViewController


-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)initWithResultsController:(id)arg0 ;
-(id)newDrawerViewControllerWithStyle:(NSUInteger)arg0 ;
-(void)appendAction:(id)arg0 ;
-(void)collapseDrawer;
-(void)configureAsBottomSheetInParentViewController:(id)arg0 belowSubview:(id)arg1 ;
-(void)configureAsNavigationStackInParentViewController:(id)arg0 ;
-(void)dealloc;
-(void)expandDrawer;
-(void)presentDrawerViewController:(id)arg0 inPopover:(BOOL)arg1 withSourceRect:(struct CGRect )arg2 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)responderDidBeginEditing:(id)arg0 ;
-(void)setInspectorPaneViewController:(id)arg0 ;
-(void)subscribeForTextEditingNotifications;
-(void)unsubscribeFromTextEditingNotifications;


@end


#endif