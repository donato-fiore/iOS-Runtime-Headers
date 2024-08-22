// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC22_GROUPACTIVITIES_UIKIT41GROUPACTIVITYPLACEHOLDERSHARINGCONTROLLER_H
#define _TTC22_GROUPACTIVITIES_UIKIT41GROUPACTIVITYPLACEHOLDERSHARINGCONTROLLER_H

@class UINavigationController;
@protocol _EXHostViewControllerDelegate;



@interface _TtC22_GroupActivities_UIKit41GroupActivityPlaceholderSharingController : UINavigationController <_EXHostViewControllerDelegate>

 {
    ? rootViewController;
    ? placeholderControllerDidCancel;
}




-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNavigationBarClass:(Class)arg0 toolbarClass:(Class)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithRootViewController:(id)arg0 ;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)hostViewController:(id)arg0 didEndHosting:(id)arg1 error:(id)arg2 ;
-(void)hostViewController:(id)arg0 didFailToHost:(id)arg1 error:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif