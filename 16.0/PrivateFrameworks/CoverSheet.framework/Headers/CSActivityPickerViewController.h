// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSACTIVITYPICKERVIEWCONTROLLER_H
#define CSACTIVITYPICKERVIEWCONTROLLER_H

@class UIView, MTMaterialView, _UIPortalView, FCUIActivityPickerViewController, UITapGestureRecognizer, NSString;
@protocol CSDismissableModalViewControllerDelegate, CSActivityPickerViewControllerDelegate, CSActivityPickerViewControllerParentContainer;


#import "CSCoverSheetViewControllerBase.h"
#import "CSDismissableModalViewController.h"

@interface CSActivityPickerViewController : CSCoverSheetViewControllerBase <CSDismissableModalViewControllerDelegate>

 {
    UIView *_contentView;
    MTMaterialView *_backgroundMaterialView;
    _UIPortalView *_presentingPortalView;
    UIView *_grabberView;
    FCUIActivityPickerViewController *_activityPickerViewController;
    UITapGestureRecognizer *_tapGesture;
    CGRect _sourceViewInitialFrame;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CSActivityPickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CSDismissableModalViewController *modalPresenter; // ivar: _modalPresenter
@property (weak, nonatomic) NSObject<CSActivityPickerViewControllerParentContainer> *parentContainer; // ivar: _parentContainer
@property (readonly) Class superclass;


-(BOOL)handleEvent:(id)arg0 ;
-(BOOL)wouldHandleButtonEvent:(id)arg0 ;
-(NSInteger)presentationPriority;
-(NSInteger)presentationStyle;
-(NSInteger)presentationTransition;
-(NSInteger)presentationType;
-(struct CGSize )sizeForChildContentContainer:(id)arg0 withParentContainerSize:(struct CGSize )arg1 ;
-(void)_dismissWithRepresentedActivity:(id)arg0 transitionCoordinator:(id)arg1 ;
-(void)_presentFromView:(id)arg0 representedActivity:(id)arg1 transitionCoordinator:(id)arg2 ;
-(void)addGrabberView:(id)arg0 ;
-(void)aggregateAppearance:(id)arg0 ;
-(void)aggregateBehavior:(id)arg0 ;
-(void)dismiss;
-(void)dismissForHomeButton;
-(void)handleBarSwipeHomeGesturePerformed;
-(void)handleTap:(id)arg0 ;
-(void)performCustomTransitionToVisible:(BOOL)arg0 withAnimationSettings:(id)arg1 completion:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif