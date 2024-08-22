// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSPRESENTATIONVIEWCONTROLLER_H
#define CSPRESENTATIONVIEWCONTROLLER_H

@class NSArray, NSString;
@protocol BSDescriptionProviding, CSPresentationViewControllerDelegate;


#import "CSCoverSheetViewControllerBase.h"

@interface CSPresentationViewController : CSCoverSheetViewControllerBase <BSDescriptionProviding>

 {
    NSUInteger _mutatingPresentation;
    NSUInteger _transitioning;
}


@property (readonly, copy, nonatomic) NSArray *contentViewControllers; // ivar: _contentViewControllers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=hasContent) BOOL hasContent;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<CSPresentationViewControllerDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (readonly, copy, nonatomic) NSArray *presentedViewControllers; // ivar: _activeContentViewControllers
@property (readonly, nonatomic, getter=isPresentingContent) BOOL presentingContent;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;


-(BOOL)handleAppearanceUpdateFromController:(id)arg0 animationSettings:(*id)arg1 ;
-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(NSInteger)participantState;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_didTransitionViewController:(id)arg0 toPresented:(BOOL)arg1 ;
-(void)_reflowPresentationWithAnimationSettings:(id)arg0 ;
-(void)_updateContentViewControllersAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)_updatePresentationForViewController:(id)arg0 presentation:(id)arg1 animationSettings:(id)arg2 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)aggregatePresentation:(id)arg0 ;
-(void)dismissContentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)dismissContentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)dismissContentViewControllers:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)dismissPresentationAnimated:(BOOL)arg0 ;
-(void)dismissPresentationAnimated:(BOOL)arg0 completion:(id)arg1 ;
-(void)presentContentViewController:(id)arg0 animated:(BOOL)arg1 ;
-(void)presentContentViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)presentContentViewControllers:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)rebuildEverythingForReason:(id)arg0 ;
-(void)updatePresentationAnimated:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif