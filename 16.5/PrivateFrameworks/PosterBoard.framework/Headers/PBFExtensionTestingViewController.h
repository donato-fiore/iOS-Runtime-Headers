// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFEXTENSIONTESTINGVIEWCONTROLLER_H
#define PBFEXTENSIONTESTINGVIEWCONTROLLER_H

@class UIViewController, UINavigationBar, UISegmentedControl;


#import "ExtensionListViewController.h"
#import "PBFGalleryViewController.h"
#import "PBFConfigViewController.h"
#import "PBFClientTesterViewController.h"

@interface PBFExtensionTestingViewController : UIViewController {
    UINavigationBar *_barView;
    UISegmentedControl *_variantSelector;
    ExtensionListViewController *_renderingController;
    ExtensionListViewController *_editingController;
    PBFGalleryViewController *_galleryController;
    PBFConfigViewController *_configController;
    PBFClientTesterViewController *_clientTesterController;
    UIViewController *_presentedViewController;
}




-(id)init;
-(void)_variantSelectorValueChanged:(id)arg0 ;
-(void)presentPage:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif