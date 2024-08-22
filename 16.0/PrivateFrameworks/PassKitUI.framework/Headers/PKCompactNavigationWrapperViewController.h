// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCOMPACTNAVIGATIONWRAPPERVIEWCONTROLLER_H
#define PKCOMPACTNAVIGATIONWRAPPERVIEWCONTROLLER_H



#import "PKWrapperViewController.h"
#import "PKCompactNavigationContainedNavigationController.h"

@interface PKCompactNavigationWrapperViewController : PKWrapperViewController {
    PKCompactNavigationContainedNavigationController *_parentNavigationController;
    CGFloat _navigationBarHeight;
}


@property (readonly, nonatomic) BOOL hasExplicitTargetNavigationHeight; // ivar: _hasExplicitTargetNavigationHeight
@property (readonly, nonatomic) BOOL needsInitialLayout; // ivar: _needsInitialLayout
@property (nonatomic) CGFloat targetNavigationHeight; // ivar: _targetNavigationHeight


-(BOOL)_canShowWhileLocked;
-(id)initWithWrappedViewController:(id)arg0 parentNavigationController:(id)arg1 ;
-(id)initWithWrappedViewController:(id)arg0 type:(NSInteger)arg1 ;
-(struct CGRect )_wrappedViewControllerFrameForBounds:(struct CGRect )arg0 navigationBarHeight:(CGFloat)arg1 ;
-(struct UIEdgeInsets )_edgeInsetsForChildViewController:(id)arg0 insetsAreAbsolute:(*BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillLayoutSubviews;


@end


#endif