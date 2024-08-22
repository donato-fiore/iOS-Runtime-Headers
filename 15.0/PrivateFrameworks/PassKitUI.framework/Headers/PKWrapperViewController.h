// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKWRAPPERVIEWCONTROLLER_H
#define PKWRAPPERVIEWCONTROLLER_H

@class UIViewController;



@interface PKWrapperViewController : UIViewController {
    NSInteger _type;
}


@property (readonly, nonatomic) UIViewController *wrappedViewController; // ivar: _wrappedViewController


-(BOOL)_canShowWhileLocked;
-(BOOL)extendedLayoutIncludesOpaqueBars;
-(NSInteger)preferredUserInterfaceStyle;
-(NSUInteger)edgesForExtendedLayout;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)childViewControllerForScreenEdgesDeferringSystemGestures;
-(id)childViewControllerForStatusBarHidden;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForWhitePointAdaptivityStyle;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithWrappedViewController:(id)arg0 type:(NSInteger)arg1 ;
-(void)_updatePreferredContentSize;
-(void)loadView;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif