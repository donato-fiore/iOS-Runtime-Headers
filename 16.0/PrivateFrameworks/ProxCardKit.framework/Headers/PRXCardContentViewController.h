// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRXCARDCONTENTVIEWCONTROLLER_H
#define PRXCARDCONTENTVIEWCONTROLLER_H

@class UIViewController, NSArray, NSAttributedString, UIImageView, NSString;
@protocol UIScrollViewDelegate, PRXPullDismissalProvider, PRXCardContentProviding;


#import "PRXTransitioningController.h"
#import "PRXCardContentView.h"
#import "PRXCardContentWrapperView.h"
#import "PRXAction.h"
#import "PRXButton.h"
#import "PRXPullDismissalInteractionDriver.h"

@interface PRXCardContentViewController : UIViewController <UIScrollViewDelegate, PRXPullDismissalProvider, PRXCardContentProviding>

 {
    PRXTransitioningController *_transitionController;
    BOOL _transitioningSize;
    PRXCardContentView *_contentView;
    PRXCardContentWrapperView *_wrapperView;
    BOOL _shouldAutoScrollToBottom;
}


@property (readonly, nonatomic) NSArray *actions; // ivar: _actions
@property (readonly, nonatomic) BOOL allowsPullToDismiss;
@property (copy, nonatomic) NSAttributedString *attributedSubtitle; // ivar: _attributedSubtitle
@property (retain, nonatomic) UIImageView *bottomTrayImageView;
@property (copy, nonatomic) NSString *bottomTrayTitle; // ivar: _bottomTrayTitle
@property (readonly, nonatomic) NSInteger cardStyle;
@property (readonly, nonatomic) PRXCardContentView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PRXAction *dismissButtonAction; // ivar: _dismissButtonAction
@property (nonatomic) NSUInteger dismissalType; // ivar: _dismissalType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PRXButton *infoButton;
@property (retain, nonatomic) PRXAction *infoButtonAction;
@property (readonly, nonatomic) PRXPullDismissalInteractionDriver *pullDismissalInteractionDriver; // ivar: _pullDismissalInteractionDriver
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (readonly) Class superclass;


-(id)addAction:(id)arg0 ;
-(id)bottomTray;
-(id)dismissalConfirmationActionWithTitle:(id)arg0 message:(id)arg1 confirmButtonTitle:(id)arg2 cancelButtonTitle:(id)arg3 ;
-(id)initWithContentView:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_prxCommonInit;
-(void)_updateActionButtons;
-(void)_updateDismisalControls;
-(void)_updateSubtitleLabel;
-(void)_updateTitleLabel;
-(void)hideActivityIndicator;
-(void)loadView;
-(void)removeAction:(id)arg0 ;
-(void)removeBottomTray;
-(void)scrollToBottom;
-(void)setContentOffset:(struct CGPoint )arg0 animated:(BOOL)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)setTransitioningSize:(BOOL)arg0 ;
-(void)showActivityIndicatorWithStatus:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updatePreferredContentSizeForCardWidth:(CGFloat)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif