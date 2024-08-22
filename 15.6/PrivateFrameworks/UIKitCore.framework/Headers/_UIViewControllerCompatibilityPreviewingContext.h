// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIVIEWCONTROLLERCOMPATIBILITYPREVIEWINGCONTEXT_H
#define _UIVIEWCONTROLLERCOMPATIBILITYPREVIEWINGCONTEXT_H

@class NSString;
@protocol UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal, UIViewControllerPreviewingDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIPreviewInteractionController.h"
#import "UIGestureRecognizer.h"
#import "UIViewController.h"

@interface _UIViewControllerCompatibilityPreviewingContext : NSObject <UIPreviewInteractionControllerDelegate_Internal, UIViewControllerPreviewing_Internal>



@property (retain, nonatomic) UIView *customViewForInteractiveHighlight; // ivar: _customViewForInteractiveHighlight
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIViewControllerPreviewingDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIPreviewInteractionController *previewInteractionController; // ivar: _previewInteractionController
@property (readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)performsCustomCommitTransitionForPreviewInteractionController:(id)arg0 ;
-(BOOL)performsViewControllerCommitTransitionForPreviewInteractionController:(id)arg0 ;
-(BOOL)previewInteractionController:(id)arg0 shouldStartPreviewingSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)previewInteractionController:(id)arg0 shouldUseStandardRevealTransformForPreviewingAtLocation:(struct CGPoint )arg1 inView:(id)arg2 ;
-(BOOL)previewInteractionControllerShouldPerformCompatibilityCommitTransition:(id)arg0 ;
-(id)initWithSourceView:(id)arg0 viewController:(id)arg1 ;
-(id)previewInteractionController:(id)arg0 committedViewControllerForPreviewViewController:(id)arg1 ;
-(id)previewInteractionController:(id)arg0 transitioningDelegateForPreviewingAtPosition:(struct CGPoint )arg1 inView:(id)arg2 ;
-(id)previewInteractionController:(id)arg0 viewControllerForPreviewingAtPosition:(struct CGPoint )arg1 inView:(id)arg2 presentingViewController:(*id)arg3 ;
-(void)previewInteractionController:(id)arg0 didDismissViewController:(id)arg1 committing:(BOOL)arg2 ;
-(void)previewInteractionController:(id)arg0 didSelectMenuItem:(id)arg1 ;
-(void)previewInteractionController:(id)arg0 interactionProgress:(id)arg1 forRevealAtLocation:(struct CGPoint )arg2 inSourceView:(id)arg3 containerView:(id)arg4 ;
-(void)previewInteractionController:(id)arg0 performCommitForPreviewViewController:(id)arg1 committedViewController:(id)arg2 ;
-(void)previewInteractionController:(id)arg0 performCustomCommitForPreviewViewController:(id)arg1 completion:(id)arg2 ;
-(void)previewInteractionController:(id)arg0 willDismissViewController:(id)arg1 ;
-(void)previewInteractionController:(id)arg0 willPresentViewController:(id)arg1 ;
-(void)previewInteractionController:(id)arg0 willPresentViewController:(id)arg1 forPosition:(struct CGPoint )arg2 inSourceView:(id)arg3 ;
-(void)unregister;


@end


#endif