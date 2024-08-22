// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC8VIDEOSUI23ROOTSPLITVIEWCONTROLLER_H
#define _TTC8VIDEOSUI23ROOTSPLITVIEWCONTROLLER_H

@class UISplitViewController, UINavigationController, UIViewController;
@protocol VUITVAppRootViewController;



@interface _TtC8VideosUI23RootSplitViewController : UISplitViewController <VUITVAppRootViewController>

 {
    ? libraryManager;
    ? sideBarController;
    ? secondaryColumnHostingController;
    ? mainBarItems;
    ? libraryBarItems;
    ? stagedLibraryBarItems;
    ? libraryNeedsUpdate;
    ? lastSelectedLibraryIdentifier;
    ? splitTabBarController;
    ? tabBarItems;
    ? mode;
    ? controllerMap;
    ? lastSelectedIdentifier;
    ? selectedIndexPath;
    ? previousIndexPath;
    ? appContext;
    ? libraryOnly;
    ? stagedMode;
    ? viewIsVisible;
}


@property (nonatomic, readonly) UINavigationController *currentNavigationController;
@property (nonatomic, readonly) UIViewController *currentViewController;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif