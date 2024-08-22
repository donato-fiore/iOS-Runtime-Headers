// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __TVMODALPRESENTERNAVIGATIONCONTROLLER_H
#define __TVMODALPRESENTERNAVIGATIONCONTROLLER_H

@class UINavigationController, UIViewController, NSMapTable, NSString, NSArray, UIView;
@protocol UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVApplicationInspectorDocumentProvider, UIFocusItemContainer, UIFocusEnvironment;



@interface __TVModalPresenterNavigationController : UINavigationController <UIGestureRecognizerDelegate, _TVModalPresenterFocusing, _TVApplicationInspectorDocumentProvider>

 {
    UIViewController *_rootViewController;
    NSMapTable *_pushCompletionBlocks;
    NSMapTable *_popCompletionBlocks;
    BOOL _isModalNavVisisble;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *dismissalBlock; // ivar: _dismissalBlock
@property (readonly, copy, nonatomic) NSString *focusGroupIdentifier;
@property (readonly, nonatomic) NSObject<UIFocusItemContainer> *focusItemContainer;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) NSObject<UIFocusEnvironment> *parentFocusEnvironment;
@property (readonly, copy, nonatomic) NSArray *preferredFocusEnvironments;
@property (readonly, weak, nonatomic) UIView *preferredFocusedView;
@property (retain, nonatomic) NSArray *previousViewControllers; // ivar: _previousViewControllers
@property (readonly) Class superclass;


-(BOOL)shouldAutorotate;
-(id)activeDocument;
-(id)childViewControllerForHomeIndicatorAutoHidden;
-(id)initWithRootViewController:(id)arg0 ;
-(id)popViewControllerAnimated:(BOOL)arg0 ;
-(void)_dismissForLastViewController;
-(void)_dismissForLastViewController:(BOOL)arg0 ;
-(void)_ensureNavigationBarHiddenSafelyForViewSize:(struct CGSize )arg0 ;
-(void)didShowViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)popViewControllerAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)pushViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)reset;
-(void)updatePreferredFocusedViewStateForFocus:(BOOL)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif