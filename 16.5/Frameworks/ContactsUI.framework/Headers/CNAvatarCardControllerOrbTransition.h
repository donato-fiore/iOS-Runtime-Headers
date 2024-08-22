// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAVATARCARDCONTROLLERORBTRANSITION_H
#define CNAVATARCARDCONTROLLERORBTRANSITION_H

@class UIViewPropertyAnimator, NSString, UIView, UITargetedPreview, UIVisualEffectView;
@protocol _UIClickPresentationTransition, CNAvatarCardControllerOrbTransitionDelegate;

#import <Foundation/Foundation.h>

#import "CNAvatarCardViewController.h"
#import "CNContactOrbHeaderView.h"

@interface CNAvatarCardControllerOrbTransition : NSObject <_UIClickPresentationTransition>



@property (weak, nonatomic) CNAvatarCardViewController *cardViewController; // ivar: _cardViewController
@property (readonly, nonatomic) UIViewPropertyAnimator *customAnimator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CNAvatarCardControllerOrbTransitionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) CGAffineTransform endActionListTransform; // ivar: _endActionListTransform
@property (nonatomic) CGAffineTransform endHeaderTransform; // ivar: _endHeaderTransform
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) CNContactOrbHeaderView *headerView; // ivar: _headerView
@property (nonatomic) CGFloat highlightViewToAlpha; // ivar: _highlightViewToAlpha
@property (weak, nonatomic) UIView *highlightedView; // ivar: _highlightedView
@property (nonatomic) BOOL isDismissing; // ivar: _isDismissing
@property (copy, nonatomic) UITargetedPreview *sourcePreview;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (weak, nonatomic) UIView *sourceView; // ivar: _sourceView
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIVisualEffectView *visualEffectView; // ivar: _visualEffectView


-(id)initWithCardViewController:(id)arg0 headerView:(id)arg1 sourceView:(id)arg2 highlightedView:(id)arg3 sourceRect:(struct CGRect )arg4 backgroundVisualEffectView:(id)arg5 isDismissing:(BOOL)arg6 ;
-(struct CGRect )_sourceRectInContainerView:(id)arg0 ;
-(void)performTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)prepareTransitionFromView:(id)arg0 toView:(id)arg1 containerView:(id)arg2 ;
-(void)setupTransitionFromView:(id)arg0 toView:(id)arg1 withContainerView:(id)arg2 ;
-(void)transitionDidEnd:(BOOL)arg0 ;


@end


#endif