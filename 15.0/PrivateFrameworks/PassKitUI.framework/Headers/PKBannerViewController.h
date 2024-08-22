// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKBANNERVIEWCONTROLLER_H
#define PKBANNERVIEWCONTROLLER_H

@class UIViewController, PLPlatterView, NSTimer, UIImageView, UILabel, UIButton, PKBannerModel, NSString, BNBannerSourceLayoutDescription, PKSecureElementPass;
@protocol BNPresentable, PKBannerViewControllerDelegate, BNPresentableContext;



@interface PKBannerViewController : UIViewController <BNPresentable>

 {
    PLPlatterView *_platterView;
    NSTimer *_dismissTimer;
    id<PKBannerViewControllerDelegate> *_delegate;
    UIImageView *_cardArtImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    BOOL _wasAutomaticallyDismissed;
}


@property (retain, nonatomic) UIButton *actionButton; // ivar: _actionButton
@property (readonly, nonatomic) PKBannerModel *bannerModel; // ivar: _bannerModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger destination; // ivar: _destination
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BNBannerSourceLayoutDescription *layoutDescription; // ivar: _layoutDescription
@property (readonly, nonatomic) PKSecureElementPass *pass; // ivar: _pass
@property (weak, nonatomic) NSObject<BNPresentableContext> *presentableContext;
@property (readonly, nonatomic) NSInteger presentableType;
@property (retain, nonatomic) NSString *primaryText; // ivar: _primaryText
@property (readonly, copy, nonatomic) NSString *requestIdentifier; // ivar: _requestIdentifier
@property (readonly, copy, nonatomic) NSString *requesterIdentifier;
@property (retain, nonatomic) NSString *secondaryText; // ivar: _secondaryText
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;
@property (readonly, nonatomic) UIViewController *viewController;


-(BOOL)shouldShowActionButton;
-(id)_newPlatterView;
-(id)initWithSecureElementPass:(id)arg0 destination:(NSInteger)arg1 layoutDescription:(id)arg2 bannerModel:(id)arg3 delegate:(id)arg4 ;
-(struct CGSize )preferredContentSizeWithPresentationSize:(struct CGSize )arg0 containerSize:(struct CGSize )arg1 ;
-(struct UIEdgeInsets )bannerContentOutsets;
-(void)_cleanupAndDismissBannerWithAutomaticDismissal:(BOOL)arg0 ;
-(void)_handleBannerTapped:(id)arg0 ;
-(void)_scheduleDismissTimerIfNecessary;
-(void)presentableDidAppearAsBanner:(id)arg0 ;
-(void)presentableWillDisappearAsBanner:(id)arg0 withReason:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif