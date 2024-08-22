// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRXCARDCONTAINERVIEW_H
#define PRXCARDCONTAINERVIEW_H

@class UIView, NSLayoutConstraint, UITapGestureRecognizer, NSString;
@protocol UIGestureRecognizerDelegate, PRXCardContainerViewDelegate;


#import "PRXCardBackgroundView.h"
#import "PRXPullDismissalScrollView.h"

@interface PRXCardContainerView : UIView <UIGestureRecognizerDelegate>

 {
    NSLayoutConstraint *_scrollViewBottomConstraint;
    NSLayoutConstraint *_visibleHeightConstraint;
    NSLayoutConstraint *_contentWidthConstraint;
    NSLayoutConstraint *_contentHeightConstraint;
    NSLayoutConstraint *_contentTopConstraint;
    NSLayoutConstraint *_scrollViewHeightConstraint;
    NSLayoutConstraint *_scrollViewTopConstraint;
    UITapGestureRecognizer *_tapRecognizer;
    CGFloat _keyboardHeight;
    BOOL _shouldDismissKeyboardOnTap;
    NSDirectionalEdgeInsets _containerLayoutMargins;
}


@property (readonly, nonatomic) PRXCardBackgroundView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) UIView *contentContainerView; // ivar: _contentContainerView
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL defersKeyboardUpdates; // ivar: _defersKeyboardUpdates
@property (weak, nonatomic) NSObject<PRXCardContainerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize preferredContentSize; // ivar: _preferredContentSize
@property (readonly, nonatomic) PRXPullDismissalScrollView *pullDismissalScrollView; // ivar: _pullDismissalScrollView
@property (readonly) Class superclass;
@property (nonatomic) BOOL usePortraitTopInset; // ivar: _usePortraitTopInset


-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(id)init;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 containerLayoutMargins:(struct NSDirectionalEdgeInsets )arg1 ;
-(void)_updateKeyboardDeferred:(BOOL)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)tappedView:(id)arg0 ;


@end


#endif