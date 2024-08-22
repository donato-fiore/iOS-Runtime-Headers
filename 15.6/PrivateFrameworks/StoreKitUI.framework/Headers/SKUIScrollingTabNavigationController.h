// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUISCROLLINGTABNAVIGATIONCONTROLLER_H
#define SKUISCROLLINGTABNAVIGATIONCONTROLLER_H

@class NSString;
@protocol SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack, SKUINavigationStackObserver;


#import "SKUINavigationController.h"

@interface SKUIScrollingTabNavigationController : SKUINavigationController <SKUIScrollingTabBarBottomInsetAwareContent, SKUIObservableNavigationStack>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<SKUINavigationStackObserver> *navigationStackObserver; // ivar: _navigationStackObserver
@property (nonatomic, getter=isShowingNavigationStackRootContent) BOOL showingNavigationStackRootContent;
@property (readonly) Class superclass;


-(CGFloat)_scrollViewBottomContentInsetForViewController:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_observedNavigationStackDidChange;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)dismissViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)popToNavigationStackRootContentAnimated:(BOOL)arg0 withBehavior:(NSInteger)arg1 ;
-(void)presentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)scrollingTabBarBottomInsetAdjustmentDidChange;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif