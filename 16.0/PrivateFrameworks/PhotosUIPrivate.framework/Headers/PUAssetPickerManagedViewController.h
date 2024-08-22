// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUASSETPICKERMANAGEDVIEWCONTROLLER_H
#define PUASSETPICKERMANAGEDVIEWCONTROLLER_H

@class UIViewController, UINavigationController, NSString, UISplitViewController;
@protocol UINavigationControllerDelegate, UISplitViewControllerDelegate;


#import "PUPickerConfiguration.h"
#import "PUAssetPickerContainerController.h"
#import "PUSidebarViewController.h"

@interface PUAssetPickerManagedViewController : UIViewController <UINavigationControllerDelegate, UISplitViewControllerDelegate>



@property (readonly, nonatomic) PUPickerConfiguration *configuration; // ivar: _configuration
@property (readonly, nonatomic) UINavigationController *contentNavigationController; // ivar: _contentNavigationController
@property (readonly, nonatomic) PUAssetPickerContainerController *contentViewController; // ivar: _contentViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UINavigationController *sidebarNavigationController; // ivar: _sidebarNavigationController
@property (readonly, nonatomic) PUSidebarViewController *sidebarViewController; // ivar: _sidebarViewController
@property (readonly, nonatomic) UISplitViewController *splitViewController; // ivar: _splitViewController
@property (readonly) Class superclass;


-(id)initWithConfiguration:(id)arg0 contentViewController:(id)arg1 ;
-(void)_updatePreferredDisplayMode;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)splitViewController:(id)arg0 willChangeToDisplayMode:(NSInteger)arg1 ;
-(void)splitViewControllerDidCollapse:(id)arg0 ;
-(void)splitViewControllerDidExpand:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif