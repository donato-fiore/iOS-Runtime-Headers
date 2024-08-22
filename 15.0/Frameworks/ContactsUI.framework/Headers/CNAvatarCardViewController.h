// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAVATARCARDVIEWCONTROLLER_H
#define CNAVATARCARDVIEWCONTROLLER_H

@class UIViewController, NSArray, UIView, NSLayoutConstraint, NSString, UIImage;
@protocol CNAvatarCardActionsViewDelegate, CNContactActionsControllerDelegate, CNCardTransitioning, UIGestureRecognizerDelegate, CNAvatarCardActionListController, CNAvatarCardActionListOrbSupport, CNAvatarCardViewControllerDelegate;


#import "CNContactActionsController.h"
#import "CNAvatarCardController.h"
#import "CNAvatarCardActionsView.h"

@interface CNAvatarCardViewController : UIViewController <CNAvatarCardActionsViewDelegate, CNContactActionsControllerDelegate, CNCardTransitioning, UIGestureRecognizerDelegate>



@property (copy, nonatomic) NSArray *actionCategories;
@property (readonly, nonatomic) NSObject<CNAvatarCardActionListController> *actionListController;
@property (readonly, nonatomic) NSObject<CNAvatarCardActionListOrbSupport> *actionListViewController;
@property (retain, nonatomic) CNContactActionsController *actionsController; // ivar: _actionsController
@property (retain, nonatomic) UIView *actionsListView; // ivar: _actionsListView
@property (nonatomic) BOOL actionsReversed;
@property (retain, nonatomic) NSLayoutConstraint *actionsViewControllerHeightConstraint; // ivar: _actionsViewControllerHeightConstraint
@property (nonatomic) CGFloat borderMargin; // ivar: _borderMargin
@property (nonatomic) BOOL bypassActionValidation;
@property (weak, nonatomic) CNAvatarCardController *cardController; // ivar: _cardController
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarCardViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dismissesBeforePerforming;
@property (retain, nonatomic) UIView *effectView; // ivar: _effectView
@property (nonatomic) BOOL hasHeader; // ivar: _hasHeader
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIView *headerContainerView; // ivar: _headerContainerView
@property (nonatomic) BOOL headerOnTop; // ivar: _headerOnTop
@property (retain, nonatomic) CNAvatarCardActionsView *legacyContactActionsView; // ivar: _legacyContactActionsView
@property (retain, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGRect transitioningContentFrame;
@property (readonly, nonatomic) UIView *transitioningContentView;
@property (readonly, nonatomic) CGRect transitioningFrame;
@property (readonly, nonatomic) UIImage *transitioningImage;
@property (readonly, nonatomic) CGRect transitioningImageFrame;
@property BOOL transitioningImageVisible;
@property (readonly, nonatomic) UIView *transitioningView;
@property (retain, nonatomic) NSArray *verticalConstraints; // ivar: _verticalConstraints
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)actionsView;
-(id)cardActionsView:(id)arg0 orderedPropertiesForProperties:(id)arg1 category:(id)arg2 ;
-(id)initWithContacts:(id)arg0 ;
-(id)viewControllerForCardActionsView:(id)arg0 ;
-(id)viewForTouchContinuation;
-(struct CGRect )_photoFrameInView:(id)arg0 ;
-(void)_updatePreferredSize;
-(void)cardActionsView:(id)arg0 didShowActions:(id)arg1 ;
-(void)contactActionsController:(id)arg0 didSelectAction:(id)arg1 ;
-(void)contentSizeCategoryDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didAddActionsViewToHierarchy;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissViewControllerForCardActionsView:(id)arg0 animated:(BOOL)arg1 ;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg0 ;
-(void)refreshActions;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateActionsControllerHeightConstraint;
-(void)updateActionsViewBackgroundColor;
-(void)updateViewConstraints;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willAddActionsViewToHierarchy;


@end


#endif